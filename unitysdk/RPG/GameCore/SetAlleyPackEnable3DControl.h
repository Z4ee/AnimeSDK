#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_9C998B9765FA8AA3_OFFSET UNITYSDK_OFFSET(0x19C27EA0)
#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_DF585F09B042749A_OFFSET UNITYSDK_OFFSET(0x19C27E20)
#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x19C27E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAlleyPackEnable3DControl_TypeDefinitionIndex = 23035;

	class SetAlleyPackEnable3DControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DF585F09B042749A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAlleyPackEnable3DControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_DF585F09B042749A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C998B9765FA8AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAlleyPackEnable3DControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_9C998B9765FA8AA3_OFFSET))(a1, a2);
		}
	};
}
