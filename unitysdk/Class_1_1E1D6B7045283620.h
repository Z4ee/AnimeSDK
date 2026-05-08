#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1F9696B7CBEA5C76_Enum_3_D6A1C366BEC79821.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1F9696B7CBEA5C76;
class Class_2_32138D5A75148582;
class Class_2_6968552DB576BBB3;
class Class_4_DA19DD65175B97CF;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_1E1D6B7045283620_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x133FE2E0)
#define CLASS_1_1E1D6B7045283620_METHOD_1_4A43CE1304B21F00_OFFSET UNITYSDK_OFFSET(0x133FC8B0)
#define CLASS_1_1E1D6B7045283620_METHOD_1_50ADC22FE612284E_OFFSET UNITYSDK_OFFSET(0x133FD6F0)
#define CLASS_1_1E1D6B7045283620_METHOD_1_7A4DA50406643EC6_OFFSET UNITYSDK_OFFSET(0x133FD0C0)
#define CLASS_1_1E1D6B7045283620_METHOD_1_7F7379F8817AA054_OFFSET UNITYSDK_OFFSET(0x133FDDA0)
#define CLASS_1_1E1D6B7045283620_METHOD_1_9EF9C4C2711D220E_OFFSET UNITYSDK_OFFSET(0x133FD350)
#define CLASS_1_1E1D6B7045283620_METHOD_1_A0ECBFEA2D1D05B9_OFFSET UNITYSDK_OFFSET(0x133FD660)
#define CLASS_1_1E1D6B7045283620_METHOD_1_D8C1AF43B5839F41_OFFSET UNITYSDK_OFFSET(0x133FD120)
#define CLASS_1_1E1D6B7045283620_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x133FCF70)
#define CLASS_1_1E1D6B7045283620_METHOD_1_E98A23CC3682A5D1_OFFSET UNITYSDK_OFFSET(0x133FE360)
#define CLASS_1_1E1D6B7045283620_METHOD_1_EB1C153876FE589E_OFFSET UNITYSDK_OFFSET(0x133FD360)
#define CLASS_1_1E1D6B7045283620_METHOD_1_EF9DE33CA43F82BC_OFFSET UNITYSDK_OFFSET(0x133FE370)
#define CLASS_1_1E1D6B7045283620__CTOR_OFFSET UNITYSDK_OFFSET(0x133FC7F0)

inline static constexpr unsigned int Class_1_1E1D6B7045283620_TypeDefinitionIndex = 47749;

class Class_1_1E1D6B7045283620 : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::System::Action* Field_1_7; // 0x18
	::Class_4_DA19DD65175B97CF* Field_1_4; // 0x20
	::Class_2_32138D5A75148582* Field_1_2; // 0x28
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_5; // 0x30
	::Class_1_1F9696B7CBEA5C76* Field_1_3; // 0x38
	::Class_2_6968552DB576BBB3* Field_1_1; // 0x40
	::MoleMole::Config::ConfigHollowChessboard* Field_1_0; // 0x48
	::Foundation::Coroutine::CoroutineHandle Field_1_9; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::System::Boolean Field_1_6; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_4A43CE1304B21F00(::System::String* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_4A43CE1304B21F00_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7A4DA50406643EC6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_7A4DA50406643EC6_OFFSET))(this);
	}

	::System::Single Method_1_D8C1AF43B5839F41(::System::String* a1, ::System::Action* a2, ::System::Action* a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_D8C1AF43B5839F41_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9EF9C4C2711D220E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_9EF9C4C2711D220E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EB1C153876FE589E(::Class_1_1F9696B7CBEA5C76_Enum_3_D6A1C366BEC79821 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F9696B7CBEA5C76_Enum_3_D6A1C366BEC79821, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_EB1C153876FE589E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A0ECBFEA2D1D05B9(::Class_4_DA19DD65175B97CF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_DA19DD65175B97CF*))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_A0ECBFEA2D1D05B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_50ADC22FE612284E(::MoleMole::ConfigAnimationCurveGroup* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Action_1<::MoleMole::UICameraAtom>* a4, ::System::Single a5, ::System::Action* a6, ::System::Action* a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::UICameraAtom>*, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_50ADC22FE612284E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_1_7F7379F8817AA054(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_7F7379F8817AA054_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Action* Method_1_E98A23CC3682A5D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_E98A23CC3682A5D1_OFFSET))(this);
	}

	::System::Boolean Method_1_EF9DE33CA43F82BC(::System::Single a1, ::MoleMole::UICameraAtom& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::MoleMole::UICameraAtom&))((::PBYTE)hIl2Cpp + CLASS_1_1E1D6B7045283620_METHOD_1_EF9DE33CA43F82BC_OFFSET))(this, a1, a2);
	}
};
