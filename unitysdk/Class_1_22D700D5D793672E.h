#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_22D700D5D793672E_METHOD_1_A408E2C2F61208A0_OFFSET UNITYSDK_OFFSET(0x113BFC50)
#define CLASS_1_22D700D5D793672E_METHOD_1_B1DE827DC72584F2_OFFSET UNITYSDK_OFFSET(0x113BF840)
#define CLASS_1_22D700D5D793672E_METHOD_1_FCC0F3B032C1C020_OFFSET UNITYSDK_OFFSET(0x113BFD10)

inline static constexpr unsigned int Class_1_22D700D5D793672E_TypeDefinitionIndex = 70566;

class Class_1_22D700D5D793672E : public ::System::Object
{
public:
	static ::System::Void Method_1_B1DE827DC72584F2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a4, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22D700D5D793672E_METHOD_1_B1DE827DC72584F2_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_A408E2C2F61208A0(::Foundation::ViewObject::ViewObjectHandle a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_22D700D5D793672E_METHOD_1_A408E2C2F61208A0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FCC0F3B032C1C020(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a4, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22D700D5D793672E_METHOD_1_FCC0F3B032C1C020_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
