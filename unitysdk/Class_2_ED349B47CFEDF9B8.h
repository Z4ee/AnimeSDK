#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1C6D038ACA57B217;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_1724616537E36B8E_OFFSET UNITYSDK_OFFSET(0x15B17540)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x15B17480)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_A92825C9B15D16AA_OFFSET UNITYSDK_OFFSET(0x15B170A0)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x15B17410)
#define CLASS_2_ED349B47CFEDF9B8__CTOR_OFFSET UNITYSDK_OFFSET(0x15B17590)
#define CLASS_2_ED349B47CFEDF9B8__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B16F20)
#define CLASS_2_ED349B47CFEDF9B8___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x15B175D0)

inline static constexpr unsigned int Class_2_ED349B47CFEDF9B8_TypeDefinitionIndex = 69005;

class Class_2_ED349B47CFEDF9B8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::UI::Text* Field_2_3; // 0x60
	::UnityEngine::UI::Text* Field_2_4; // 0x68
	::UnityEngine::Animation* Field_2_5; // 0x70
	::System::Action_1<::Class_2_ED349B47CFEDF9B8*>* Field_2_6; // 0x78
	::UnityEngine::Vector2 Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A92825C9B15D16AA(::Class_1_1C6D038ACA57B217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8_METHOD_2_A92825C9B15D16AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_5B944DF9FC8FD32D(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8_METHOD_2_5B944DF9FC8FD32D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1724616537E36B8E(::System::Action_1<::Class_2_ED349B47CFEDF9B8*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_ED349B47CFEDF9B8*>*))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8_METHOD_2_1724616537E36B8E_OFFSET))(this, a1);
	}

	::System::Void __OnBind_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED349B47CFEDF9B8___ONBIND_B__1_0_OFFSET))(this);
	}
};
