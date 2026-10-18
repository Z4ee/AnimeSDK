#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_1C6D038ACA57B217;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_1724616537E36B8E_OFFSET UNITYSDK_OFFSET(0x16561BD0)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_5B944DF9FC8FD32D_OFFSET UNITYSDK_OFFSET(0x16561B10)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_A92825C9B15D16AA_OFFSET UNITYSDK_OFFSET(0x16561730)
#define CLASS_2_ED349B47CFEDF9B8_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x16561AA0)
#define CLASS_2_ED349B47CFEDF9B8__CTOR_OFFSET UNITYSDK_OFFSET(0x16561C20)
#define CLASS_2_ED349B47CFEDF9B8__ONBIND_OFFSET UNITYSDK_OFFSET(0x165615B0)
#define CLASS_2_ED349B47CFEDF9B8___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x16561C60)

inline static constexpr unsigned int Class_2_ED349B47CFEDF9B8_TypeDefinitionIndex = 72277;

class Class_2_ED349B47CFEDF9B8 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* IIFENECAOBG; // 0x0
	// static const ::System::String* CGNGHKIIGCM; // 0x0
	::UnityEngine::Animation* KCOAILOHDND; // 0x60
	::System::Action_1<::Class_2_ED349B47CFEDF9B8*>* CIFOILLJFNF; // 0x68
	::UnityEngine::UI::Text* GOHFAIIDICB; // 0x70
	::UnityEngine::UI::Text* PDKECBBIBBP; // 0x78
	::UnityEngine::Vector2 IKKNJMJCDOJ; // 0x80

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
