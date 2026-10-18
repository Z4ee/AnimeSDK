#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_1_87E5EEA55D87ED35_ADD_CLICKED_OFFSET UNITYSDK_OFFSET(0xB5D4180)
#define CLASS_1_87E5EEA55D87ED35_METHOD_1_035EA8155A99C79E_OFFSET UNITYSDK_OFFSET(0xB5D43E0)
#define CLASS_1_87E5EEA55D87ED35_METHOD_1_03E2B9212B4B6EAF_OFFSET UNITYSDK_OFFSET(0xB5D4140)
#define CLASS_1_87E5EEA55D87ED35_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xB5D4350)
#define CLASS_1_87E5EEA55D87ED35_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB5D4200)
#define CLASS_1_87E5EEA55D87ED35_REMOVE_CLICKED_OFFSET UNITYSDK_OFFSET(0xB5D42E0)
#define CLASS_1_87E5EEA55D87ED35__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D40C0)
#define CLASS_1_87E5EEA55D87ED35___ENSURECLICKWIRED_B__12_0_OFFSET UNITYSDK_OFFSET(0xB5D4510)

inline static constexpr unsigned int Class_1_87E5EEA55D87ED35_TypeDefinitionIndex = 72674;

class Class_1_87E5EEA55D87ED35 : public ::System::Object
{
public:
	::System::Action* BGFEONFDMJC; // 0x10
	::UnityEngine::UI::Button* AAFGIHCCPOP; // 0x18
	::UnityEngine::Transform* BKPOHOCNDOL; // 0x20
	::System::Boolean LPDIDHJOFIN; // 0x28
	::System::Boolean JLMFDOFGIAC; // 0x29

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_03E2B9212B4B6EAF()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_METHOD_1_03E2B9212B4B6EAF_OFFSET))(this);
	}

	::System::Void add_Clicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_ADD_CLICKED_OFFSET))(this, a1);
	}

	::System::Void remove_Clicked(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_REMOVE_CLICKED_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::UnityEngine::UI::Button* Method_1_035EA8155A99C79E()
	{
		return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35_METHOD_1_035EA8155A99C79E_OFFSET))(this);
	}

	::System::Void __EnsureClickWired_b__12_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E5EEA55D87ED35___ENSURECLICKWIRED_B__12_0_OFFSET))(this);
	}
};
