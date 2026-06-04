#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D27BF54F25500E5F_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1AC0D130)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_055E3BF644BB741B_OFFSET UNITYSDK_OFFSET(0x1AC0D080)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_24760666D193D610_OFFSET UNITYSDK_OFFSET(0x1AC0CE50)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x1AC0CFA0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_3F6949F11EB869BC_OFFSET UNITYSDK_OFFSET(0x1AC0CCD0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_45C0783388812B7C_OFFSET UNITYSDK_OFFSET(0x1AC0D160)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x1AC0CEF0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x1AC0D070)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1AC0CEE0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_7107C000655257CE_OFFSET UNITYSDK_OFFSET(0x1AC0CDE0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_7DC95A8997FB4A79_OFFSET UNITYSDK_OFFSET(0x1AC0CED0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1AC0CCA0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_B8E4DD0E94EED4D0_OFFSET UNITYSDK_OFFSET(0x1AC0CD50)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_1_OFFSET UNITYSDK_OFFSET(0x1AC0CFD0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_OFFSET UNITYSDK_OFFSET(0x1AC0CF00)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_EBF30915290B105B_1_OFFSET UNITYSDK_OFFSET(0x1AC0D0F0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_EBF30915290B105B_OFFSET UNITYSDK_OFFSET(0x1AC0D0C0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AC0D150)
#define CLASS_1_D27BF54F25500E5F_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1AC0D140)
#define CLASS_1_D27BF54F25500E5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC0CC70)

inline static constexpr unsigned int Class_1_D27BF54F25500E5F_TypeDefinitionIndex = 33527;

class Class_1_D27BF54F25500E5F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::UnityEngine::AnimationCurve* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Boolean _IsFinish_k__BackingField; // 0x2C
	::System::Single Field_1_6; // 0x30
	::System::Single Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3F6949F11EB869BC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_3F6949F11EB869BC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7107C000655257CE(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_7107C000655257CE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_24760666D193D610(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_24760666D193D610_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_B8E4DD0E94EED4D0(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_B8E4DD0E94EED4D0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_7DC95A8997FB4A79(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_7DC95A8997FB4A79_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_1_C7AA0B5353D21688()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_OFFSET))(this);
	}

	::System::Single Method_1_C7AA0B5353D21688_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_1_OFFSET))(this);
	}

	::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_3150507749BCEAEC_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_055E3BF644BB741B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_055E3BF644BB741B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF30915290B105B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_EBF30915290B105B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EBF30915290B105B_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_EBF30915290B105B_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_SET_ISFINISH_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::Client::TransitType Method_1_45C0783388812B7C()
	{
		return ((::RPG::Client::TransitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_45C0783388812B7C_OFFSET))(this);
	}
};
