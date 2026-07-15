#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x18F12C00)
#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_C05C477FFC273613_OFFSET UNITYSDK_OFFSET(0x18F132F0)
#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_CEC9837B7BBDD30D_OFFSET UNITYSDK_OFFSET(0x18F12800)
#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_CF383E080AD4F896_OFFSET UNITYSDK_OFFSET(0x18F12740)
#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_E6D67A0D7F874789_OFFSET UNITYSDK_OFFSET(0x18F12A00)
#define CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3__CTOR_OFFSET UNITYSDK_OFFSET(0x18F12730)

inline static constexpr unsigned int Class_2_3092D1F427FB5418_Class_1_151035310015E0C3_TypeDefinitionIndex = 67208;

class Class_2_3092D1F427FB5418_Class_1_151035310015E0C3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* Field_1_3; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF383E080AD4F896(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_CF383E080AD4F896_OFFSET))(this, a1);
	}

	::System::Void Method_1_C05C477FFC273613(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_C05C477FFC273613_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CEC9837B7BBDD30D(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_CEC9837B7BBDD30D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E6D67A0D7F874789(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_E6D67A0D7F874789_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3092D1F427FB5418_CLASS_1_151035310015E0C3_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}
};
