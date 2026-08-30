#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_9C998B9765FA8AA3_OFFSET UNITYSDK_OFFSET(0x1DB524C0)
#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_F0E0DE986E3ED890_OFFSET UNITYSDK_OFFSET(0x1DB52470)
#define RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB524B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAlleyPackEnable3DControl_TypeDefinitionIndex = 24084;

	class SetAlleyPackEnable3DControl : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0E0DE986E3ED890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAlleyPackEnable3DControl*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_F0E0DE986E3ED890_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C998B9765FA8AA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetAlleyPackEnable3DControl* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetAlleyPackEnable3DControl*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETALLEYPACKENABLE3DCONTROL_METHOD_3_9C998B9765FA8AA3_OFFSET))(a1, a2);
		}
	};
}
