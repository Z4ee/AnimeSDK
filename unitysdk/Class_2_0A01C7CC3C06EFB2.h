#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_424C59E7A53DF715;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_0A01C7CC3C06EFB2_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x17AC0200)
#define CLASS_2_0A01C7CC3C06EFB2_METHOD_2_7A0E335452FE2056_OFFSET UNITYSDK_OFFSET(0x17AC0070)
#define CLASS_2_0A01C7CC3C06EFB2_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x17AC02A0)
#define CLASS_2_0A01C7CC3C06EFB2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17AC03D0)
#define CLASS_2_0A01C7CC3C06EFB2_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x17ABFF90)
#define CLASS_2_0A01C7CC3C06EFB2__CTOR_OFFSET UNITYSDK_OFFSET(0x17AC0060)

inline static constexpr unsigned int Class_2_0A01C7CC3C06EFB2_TypeDefinitionIndex = 50448;

class Class_2_0A01C7CC3C06EFB2 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Transform* Field_2_3; // 0x18
	::UnityEngine::Animation* Field_2_2; // 0x20
	::UnityEngine::Animation* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	static ::Class_2_0A01C7CC3C06EFB2* Method_2_7A0E335452FE2056(::Class_2_424C59E7A53DF715* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_0A01C7CC3C06EFB2*(*)(::Class_2_424C59E7A53DF715*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2_METHOD_2_7A0E335452FE2056_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_424C59E7A53DF715* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_424C59E7A53DF715*))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0A01C7CC3C06EFB2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
