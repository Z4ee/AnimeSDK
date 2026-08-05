#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_F00B40DBB5A83F85;
class Class_2_208CC9941471731A_352;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GUIStyle; }

#define CLASS_1_DE919FAFF050A044_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x145CE250)
#define CLASS_1_DE919FAFF050A044_METHOD_1_1F10030F822C46ED_OFFSET UNITYSDK_OFFSET(0x145CE020)
#define CLASS_1_DE919FAFF050A044_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x145CD7D0)
#define CLASS_1_DE919FAFF050A044_METHOD_1_7BC0F751A64AEB32_OFFSET UNITYSDK_OFFSET(0x145CD880)
#define CLASS_1_DE919FAFF050A044_METHOD_1_B2AF81294D9C69C7_OFFSET UNITYSDK_OFFSET(0x145CDD70)
#define CLASS_1_DE919FAFF050A044_METHOD_1_C0D2B63814379CF7_OFFSET UNITYSDK_OFFSET(0x145CDB60)
#define CLASS_1_DE919FAFF050A044__CTOR_OFFSET UNITYSDK_OFFSET(0x145CD6A0)

inline static constexpr unsigned int Class_1_DE919FAFF050A044_TypeDefinitionIndex = 70135;

class Class_1_DE919FAFF050A044 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::Class_1_F00B40DBB5A83F85*>* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_F00B40DBB5A83F85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F00B40DBB5A83F85*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7BC0F751A64AEB32(::Class_2_208CC9941471731A_352* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_352*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_7BC0F751A64AEB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0D2B63814379CF7(::UnityEngine::GUIStyle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_C0D2B63814379CF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_B2AF81294D9C69C7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_B2AF81294D9C69C7_OFFSET))(this);
	}

	::System::Boolean Method_1_1F10030F822C46ED(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_1F10030F822C46ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE919FAFF050A044_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
