#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_METHOD_3_423A361F938C5ED7_OFFSET UNITYSDK_OFFSET(0x17797290)
#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_METHOD_3_C39D28E45528C446_OFFSET UNITYSDK_OFFSET(0x17797310)
#define RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x177972E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotSetHudActive_TypeDefinitionIndex = 20181;

	class SwitchMascotSetHudActive : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_423A361F938C5ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetHudActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetHudActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_METHOD_3_423A361F938C5ED7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C39D28E45528C446(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchMascotSetHudActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchMascotSetHudActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTSETHUDACTIVE_METHOD_3_C39D28E45528C446_OFFSET))(a1, a2);
		}
	};
}
