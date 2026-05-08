#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_1_OFFSET UNITYSDK_OFFSET(0xF604F20)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_2_OFFSET UNITYSDK_OFFSET(0xF604F50)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_OFFSET UNITYSDK_OFFSET(0xF604F10)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_1_OFFSET UNITYSDK_OFFSET(0xF604F30)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_2_OFFSET UNITYSDK_OFFSET(0xF6063B0)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_OFFSET UNITYSDK_OFFSET(0xF604D00)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_39D8DBBF1FD78AFB_1_OFFSET UNITYSDK_OFFSET(0xF6063A0)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_39D8DBBF1FD78AFB_OFFSET UNITYSDK_OFFSET(0xF605C10)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_4A9BD1EB45E99E66_1_OFFSET UNITYSDK_OFFSET(0xF605C20)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_4A9BD1EB45E99E66_OFFSET UNITYSDK_OFFSET(0xF605C00)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_62E7D5C88B2A7DF1_OFFSET UNITYSDK_OFFSET(0xF604D10)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_83DA8FE11BEA9751_OFFSET UNITYSDK_OFFSET(0xF6059E0)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_A06887FFE1C4152C_OFFSET UNITYSDK_OFFSET(0xF604F70)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_A0B449AFCD86DCF5_OFFSET UNITYSDK_OFFSET(0xF605C30)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_A77146FFE812D4CF_OFFSET UNITYSDK_OFFSET(0xF606110)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_B815CC8D577760D2_OFFSET UNITYSDK_OFFSET(0xF6063C0)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_C1C5B22C1FF2BED8_OFFSET UNITYSDK_OFFSET(0xF604BA0)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_C43AFA13714AC40A_OFFSET UNITYSDK_OFFSET(0xF605960)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_E93AF5925CE09D93_OFFSET UNITYSDK_OFFSET(0xF604F40)
#define CLASS_2_CCBE29276BB7D81C_METHOD_2_F0931B984BDF9FEC_OFFSET UNITYSDK_OFFSET(0xF604F60)
#define CLASS_2_CCBE29276BB7D81C_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xF604A10)
#define CLASS_2_CCBE29276BB7D81C__CTOR_OFFSET UNITYSDK_OFFSET(0xF6048A0)

inline static constexpr unsigned int Class_2_CCBE29276BB7D81C_TypeDefinitionIndex = 68596;

class Class_2_CCBE29276BB7D81C : public ::Class_1_F4299CC27263318B
{
public:
	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Field_2_2; // 0x70
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_1; // 0x78
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_5; // 0x80
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_3; // 0x88
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_0; // 0x90
	::Class_2_000597E145D7A42A<::System::Single>* Field_2_4; // 0x98
	::System::Single Field_2_7; // 0xA0
	::UnityEngine::Vector2 Field_2_9; // 0xA4
	::System::Single Field_2_8; // 0xAC
	::UnityEngine::Vector2 Field_2_6; // 0xB0

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_C1C5B22C1FF2BED8(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_C1C5B22C1FF2BED8_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_OFFSET))(this);
	}

	::System::Void Method_2_62E7D5C88B2A7DF1(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_62E7D5C88B2A7DF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_004D5A9C26512E4C(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_OFFSET))(this, a1);
	}

	::System::Void Method_2_004D5A9C26512E4C_1(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_1_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5_1()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_1_OFFSET))(this);
	}

	::System::Void Method_2_E93AF5925CE09D93(::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_E93AF5925CE09D93_OFFSET))(this, a1);
	}

	::System::Void Method_2_004D5A9C26512E4C_2(::Class_2_000597E145D7A42A<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_004D5A9C26512E4C_2_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::UnityEngine::Vector2>* Method_2_F0931B984BDF9FEC()
	{
		return ((::Class_2_000597E145D7A42A<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_F0931B984BDF9FEC_OFFSET))(this);
	}

	::System::Void Method_2_A06887FFE1C4152C(::UnityEngine::RectTransform* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_A06887FFE1C4152C_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_4A9BD1EB45E99E66_OFFSET))(this);
	}

	::System::Void Method_2_39D8DBBF1FD78AFB(::Class_2_000597E145D7A42A<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_39D8DBBF1FD78AFB_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Single>* Method_2_4A9BD1EB45E99E66_1()
	{
		return ((::Class_2_000597E145D7A42A<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_4A9BD1EB45E99E66_1_OFFSET))(this);
	}

	::System::Void Method_2_A0B449AFCD86DCF5(::UnityEngine::RectTransform* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_A0B449AFCD86DCF5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A77146FFE812D4CF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_A77146FFE812D4CF_OFFSET))(this, a1);
	}

	::System::Void Method_2_C43AFA13714AC40A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_C43AFA13714AC40A_OFFSET))(this, a1);
	}

	::System::Void Method_2_83DA8FE11BEA9751(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_83DA8FE11BEA9751_OFFSET))(this, a1);
	}

	::System::Void Method_2_39D8DBBF1FD78AFB_1(::Class_2_000597E145D7A42A<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_000597E145D7A42A<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_39D8DBBF1FD78AFB_1_OFFSET))(this, a1);
	}

	::Class_2_000597E145D7A42A<::System::Int32>* Method_2_37493865ED77F3A5_2()
	{
		return ((::Class_2_000597E145D7A42A<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_37493865ED77F3A5_2_OFFSET))(this);
	}

	::System::Void Method_2_B815CC8D577760D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CCBE29276BB7D81C_METHOD_2_B815CC8D577760D2_OFFSET))(this, a1);
	}
};
