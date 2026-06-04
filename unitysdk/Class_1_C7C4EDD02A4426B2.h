#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_0BA114B592B3A582_OFFSET UNITYSDK_OFFSET(0x13B0E770)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_40ECD08BFCF2C287_OFFSET UNITYSDK_OFFSET(0x13B0E1E0)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_DE1A9559DB1F03FD_OFFSET UNITYSDK_OFFSET(0x13B0E270)
#define CLASS_1_C7C4EDD02A4426B2_METHOD_1_FB76FC343B9B1038_OFFSET UNITYSDK_OFFSET(0x13B0E050)
#define CLASS_1_C7C4EDD02A4426B2__CTOR_OFFSET UNITYSDK_OFFSET(0x13B0DC70)

inline static constexpr unsigned int Class_1_C7C4EDD02A4426B2_TypeDefinitionIndex = 65250;

class Class_1_C7C4EDD02A4426B2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*>* Field_1_2; // 0x20

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FB76FC343B9B1038(::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_FB76FC343B9B1038_OFFSET))(this, a1);
	}

	::System::Void Method_1_40ECD08BFCF2C287(::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C7C4EDD02A4426B2_Class_1_B96114C165E9AA6B*>*))((::PBYTE)hIl2Cpp + CLASS_1_C7C4EDD02A4426B2_METHOD_1_40ECD08BFCF2C287_OFFSET))(this, a1);
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
