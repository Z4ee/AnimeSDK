#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_DB0FCE9E013F4C7C;
class Class_2_FDFE69FE7B72463B;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x18657F40)
#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_1D05C371EBD1713E_OFFSET UNITYSDK_OFFSET(0x18657D40)
#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x18658160)
#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x18658210)
#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18657FD0)
#define CLASS_2_9F86B2B2DDC129EF_METHOD_2_D78B7A4B1086EA41_OFFSET UNITYSDK_OFFSET(0x18658070)
#define CLASS_2_9F86B2B2DDC129EF__CTOR_OFFSET UNITYSDK_OFFSET(0x18657FC0)

inline static constexpr unsigned int Class_2_9F86B2B2DDC129EF_TypeDefinitionIndex = 50006;

class Class_2_9F86B2B2DDC129EF : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_5; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::MoleMole::MonoGamepadSpaceList* Field_2_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1D05C371EBD1713E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_1D05C371EBD1713E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	static ::Class_2_9F86B2B2DDC129EF* Method_2_D78B7A4B1086EA41(::Class_2_DB0FCE9E013F4C7C* a1, ::Class_2_A9A857AD270B9CE1* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_9F86B2B2DDC129EF*(*)(::Class_2_DB0FCE9E013F4C7C*, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_D78B7A4B1086EA41_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_DB0FCE9E013F4C7C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DB0FCE9E013F4C7C*))((::PBYTE)hIl2Cpp + CLASS_2_9F86B2B2DDC129EF_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}
};
