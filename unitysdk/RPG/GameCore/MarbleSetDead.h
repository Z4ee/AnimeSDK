#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLESETDEAD_METHOD_3_2E76081FB96DA1BA_OFFSET UNITYSDK_OFFSET(0x18AA78C0)
#define RPG_GAMECORE_MARBLESETDEAD_METHOD_3_B395FF5B78AC85B5_OFFSET UNITYSDK_OFFSET(0x18AA7A00)
#define RPG_GAMECORE_MARBLESETDEAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA79B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSetDead_TypeDefinitionIndex = 15947;

	class MarbleSetDead : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E76081FB96DA1BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetDead*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetDead*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_METHOD_3_2E76081FB96DA1BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B395FF5B78AC85B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSetDead* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSetDead*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESETDEAD_METHOD_3_B395FF5B78AC85B5_OFFSET))(a1, a2);
		}
	};
}
