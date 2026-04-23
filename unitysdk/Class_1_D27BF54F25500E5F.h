#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_D27BF54F25500E5F_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19D8B240)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_24760666D193D610_OFFSET UNITYSDK_OFFSET(0x19D8AF80)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_268E567D28600EB4_OFFSET UNITYSDK_OFFSET(0x19D8B1B0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x19D8B0D0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_3BF2CDE6E692701D_OFFSET UNITYSDK_OFFSET(0x19D8B1F0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_3F6949F11EB869BC_OFFSET UNITYSDK_OFFSET(0x19D8AE00)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_45C0783388812B7C_OFFSET UNITYSDK_OFFSET(0x19D8B270)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x19D8B020)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x19D8B1A0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x19D8B010)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_7107C000655257CE_OFFSET UNITYSDK_OFFSET(0x19D8AF10)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_7DC95A8997FB4A79_OFFSET UNITYSDK_OFFSET(0x19D8B000)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19D8ADE0)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_B8E4DD0E94EED4D0_OFFSET UNITYSDK_OFFSET(0x19D8AE80)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_1_OFFSET UNITYSDK_OFFSET(0x19D8B100)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_C7AA0B5353D21688_OFFSET UNITYSDK_OFFSET(0x19D8B030)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_C7B1E957732CAFAE_OFFSET UNITYSDK_OFFSET(0x19D8B210)
#define CLASS_1_D27BF54F25500E5F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19D8B260)
#define CLASS_1_D27BF54F25500E5F_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x19D8B250)
#define CLASS_1_D27BF54F25500E5F__CTOR_OFFSET UNITYSDK_OFFSET(0x19D8ADC0)

inline static constexpr unsigned int Class_1_D27BF54F25500E5F_TypeDefinitionIndex = 9758;

class Class_1_D27BF54F25500E5F : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_8; // 0x10
	::System::Action* Field_1_7; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Boolean _IsFinish_k__BackingField; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_3; // 0x30
	::System::Single Field_1_1; // 0x34
	::System::Single Field_1_6; // 0x38

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

	::System::Void Method_1_268E567D28600EB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_268E567D28600EB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BF2CDE6E692701D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_3BF2CDE6E692701D_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7B1E957732CAFAE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_METHOD_1_C7B1E957732CAFAE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_GET_ISFINISH_OFFSET))(this);
	}

	::System::Void set_IsFinish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D27BF54F25500E5F_SET_ISFINISH_OFFSET))(this, value);
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
