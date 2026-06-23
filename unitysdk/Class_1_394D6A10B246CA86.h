#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkPositionArray;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_394D6A10B246CA86_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13CA2FB0)
#define CLASS_1_394D6A10B246CA86_METHOD_1_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x13CA3660)
#define CLASS_1_394D6A10B246CA86_METHOD_1_4AA5A830122A2BAD_OFFSET UNITYSDK_OFFSET(0x13CA37B0)
#define CLASS_1_394D6A10B246CA86_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x13CA3320)
#define CLASS_1_394D6A10B246CA86_METHOD_1_B5953789FF63FCE2_OFFSET UNITYSDK_OFFSET(0x13CA3700)
#define CLASS_1_394D6A10B246CA86_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x13CA36E0)
#define CLASS_1_394D6A10B246CA86_METHOD_1_FB0A5672011E36A1_OFFSET UNITYSDK_OFFSET(0x13CA38D0)
#define CLASS_1_394D6A10B246CA86_POLISH_OFFSET UNITYSDK_OFFSET(0x13CA3050)
#define CLASS_1_394D6A10B246CA86_RECYCLE_OFFSET UNITYSDK_OFFSET(0x13CA3130)
#define CLASS_1_394D6A10B246CA86__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA2EB0)

inline static constexpr unsigned int Class_1_394D6A10B246CA86_TypeDefinitionIndex = 63328;

class Class_1_394D6A10B246CA86 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x40; // 0x0
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::AkPositionArray* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_FINALIZE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_RECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Boolean Method_1_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Boolean Method_1_B5953789FF63FCE2(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_B5953789FF63FCE2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4AA5A830122A2BAD(::System::Int32 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_4AA5A830122A2BAD_OFFSET))(this, a1, a2);
	}

	static ::Class_1_394D6A10B246CA86* Method_1_FB0A5672011E36A1(::System::String* a1)
	{
		return ((::Class_1_394D6A10B246CA86*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_394D6A10B246CA86_METHOD_1_FB0A5672011E36A1_OFFSET))(a1);
	}
};
