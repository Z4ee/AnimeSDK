#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x1798BFE0)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_251012853F531BB0_OFFSET UNITYSDK_OFFSET(0x1798B940)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_DE1A9559DB1F03FD_OFFSET UNITYSDK_OFFSET(0x1798BAE0)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_DF7D35538741C3A4_OFFSET UNITYSDK_OFFSET(0x1798BA50)
#define CLASS_1_C7C4EDD02A4426B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1798B560)

inline static constexpr unsigned int Class_1_C7C4EDD02A4426B2_TypeDefinitionIndex = 66660;

class Class_1_C7C4EDD02A4426B2 : public ::System::Object
{
public:
	::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_251012853F531BB0(::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_251012853F531BB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF7D35538741C3A4(::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_DF7D35538741C3A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE1A9559DB1F03FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_DE1A9559DB1F03FD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0BA114B592B3A582()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_0BA114B592B3A582_OFFSET))(this);
	}
};
