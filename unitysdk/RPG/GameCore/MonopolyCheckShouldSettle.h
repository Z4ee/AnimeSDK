#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_7ED129868039381C_OFFSET UNITYSDK_OFFSET(0x1995BD50)
#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_B8CA9C5704589964_OFFSET UNITYSDK_OFFSET(0x1995BDD0)
#define RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1995BDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCheckShouldSettle_TypeDefinitionIndex = 19782;

	class MonopolyCheckShouldSettle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSettle; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotSettle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ED129868039381C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckShouldSettle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckShouldSettle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_7ED129868039381C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B8CA9C5704589964(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyCheckShouldSettle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyCheckShouldSettle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCHECKSHOULDSETTLE_METHOD_3_B8CA9C5704589964_OFFSET))(a1, a2);
		}
	};
}
