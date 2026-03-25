#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5EBE290801EA4DF2;
class Class_2_C6C3225495E5A2D1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4886B715E2D100C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117ABEF0)
#define CLASS_1_4886B715E2D100C0_METHOD_1_1DE7A7D7D194BF44_OFFSET UNITYSDK_OFFSET(0x117ABF30)
#define CLASS_1_4886B715E2D100C0_METHOD_1_3F61F56295827FBC_OFFSET UNITYSDK_OFFSET(0x117AC020)
#define CLASS_1_4886B715E2D100C0_METHOD_1_6D99F4D449755ECC_OFFSET UNITYSDK_OFFSET(0x117AC0C0)
#define CLASS_1_4886B715E2D100C0_METHOD_1_70611709D1E2982F_OFFSET UNITYSDK_OFFSET(0x117AC5B0)
#define CLASS_1_4886B715E2D100C0__CTOR_OFFSET UNITYSDK_OFFSET(0x117ABE50)

inline static constexpr unsigned int Class_1_4886B715E2D100C0_TypeDefinitionIndex = 42121;

class Class_1_4886B715E2D100C0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_C6C3225495E5A2D1*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5EBE290801EA4DF2*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1DE7A7D7D194BF44(::System::UInt32 a1, ::Class_2_C6C3225495E5A2D1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_C6C3225495E5A2D1*))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0_METHOD_1_1DE7A7D7D194BF44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3F61F56295827FBC(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0_METHOD_1_3F61F56295827FBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D99F4D449755ECC(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::System::UInt32> a3, ::System::Nullable_1<::System::UInt32> a4, ::Il2CppArray<::System::UInt32>* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::System::UInt32>, ::System::Nullable_1<::System::UInt32>, ::Il2CppArray<::System::UInt32>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0_METHOD_1_6D99F4D449755ECC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_70611709D1E2982F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4886B715E2D100C0_METHOD_1_70611709D1E2982F_OFFSET))(this, a1);
	}
};
