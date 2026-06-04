#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_6080C54B36F99846_OFFSET UNITYSDK_OFFSET(0x19CD7330)
#define RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_61BFF74C9B5C8B07_OFFSET UNITYSDK_OFFSET(0x19CD72B0)
#define RPG_GAMECORE_SWITCHALLEYSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD7300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAlleyShip_TypeDefinitionIndex = 22747;

	class SwitchAlleyShip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShipSmall; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShipMedium; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnShipLarge; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHALLEYSHIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61BFF74C9B5C8B07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAlleyShip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAlleyShip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_61BFF74C9B5C8B07_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6080C54B36F99846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAlleyShip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAlleyShip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_6080C54B36F99846_OFFSET))(a1, a2);
		}
	};
}
