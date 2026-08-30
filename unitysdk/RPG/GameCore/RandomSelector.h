#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RandomSelectorCase; }

#define RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_BBC4D439DCEEB561_OFFSET UNITYSDK_OFFSET(0x1D386900)
#define RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_FE5FE7575939BADE_OFFSET UNITYSDK_OFFSET(0x1D3868C0)
#define RPG_GAMECORE_RANDOMSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3868F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelector_TypeDefinitionIndex = 23503;

	class RandomSelector : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RandomSelectorCase*>* Cases; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* Default; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE5FE7575939BADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_FE5FE7575939BADE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BBC4D439DCEEB561(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTOR_METHOD_3_BBC4D439DCEEB561_OFFSET))(a1, a2);
		}
	};
}
