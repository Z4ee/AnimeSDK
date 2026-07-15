#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_34F80054F85A682F_OFFSET UNITYSDK_OFFSET(0x1B432ED0)
#define RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_6080C54B36F99846_OFFSET UNITYSDK_OFFSET(0x1B432F10)
#define RPG_GAMECORE_SWITCHALLEYSHIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B432F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAlleyShip_TypeDefinitionIndex = 23214;

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

		static ::System::Void Method_3_34F80054F85A682F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAlleyShip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAlleyShip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_34F80054F85A682F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6080C54B36F99846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAlleyShip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAlleyShip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHALLEYSHIP_METHOD_3_6080C54B36F99846_OFFSET))(a1, a2);
		}
	};
}
