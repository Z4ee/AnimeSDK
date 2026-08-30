#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTUREPLAYVO_METHOD_3_136F2CFA50D25C17_OFFSET UNITYSDK_OFFSET(0x1CDF5090)
#define RPG_GAMECORE_ADVENTUREPLAYVO_METHOD_3_879E3AD042A4835C_OFFSET UNITYSDK_OFFSET(0x1CDF5050)
#define RPG_GAMECORE_ADVENTUREPLAYVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF5080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayVO_TypeDefinitionIndex = 20510;

	class AdventurePlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureCharacterVOType VOType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_879E3AD042A4835C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePlayVO*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePlayVO*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO_METHOD_3_879E3AD042A4835C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_136F2CFA50D25C17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventurePlayVO* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO_METHOD_3_136F2CFA50D25C17_OFFSET))(a1, a2);
		}
	};
}
