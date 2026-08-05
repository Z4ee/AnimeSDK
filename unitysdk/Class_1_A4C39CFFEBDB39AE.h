#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_A4C39CFFEBDB39AE_METHOD_1_7476B7499599725C_OFFSET UNITYSDK_OFFSET(0x1C119290)
#define CLASS_1_A4C39CFFEBDB39AE_METHOD_1_82FC0C67742EE749_OFFSET UNITYSDK_OFFSET(0x1C119450)
#define CLASS_1_A4C39CFFEBDB39AE_METHOD_1_9DC41AC6622840A7_OFFSET UNITYSDK_OFFSET(0x1C119170)
#define CLASS_1_A4C39CFFEBDB39AE_METHOD_1_D533C48EE040D8E4_OFFSET UNITYSDK_OFFSET(0x1C1197C0)
#define CLASS_1_A4C39CFFEBDB39AE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1190D0)

inline static constexpr unsigned int Class_1_A4C39CFFEBDB39AE_TypeDefinitionIndex = 60537;

class Class_1_A4C39CFFEBDB39AE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::Coroutine*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::Coroutine*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4C39CFFEBDB39AE_TypeDefinitionIndex)->GetStaticField(0x411B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE__CCTOR_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_1_9DC41AC6622840A7(::Foundation::ViewObject::ViewObjectHandle a1, ::System::ValueTuple_2<::System::Int32, ::System::Int32> a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Foundation::ViewObject::ViewObjectHandle a6, ::System::Boolean a7)
	{
		return ((::System::Collections::IEnumerator*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Single, ::System::Single, ::System::Single, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_METHOD_1_9DC41AC6622840A7_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_7476B7499599725C(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1)
	{
		return ((::System::Void(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_METHOD_1_7476B7499599725C_OFFSET))(a1);
	}

	static ::System::Void Method_1_82FC0C67742EE749(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_METHOD_1_82FC0C67742EE749_OFFSET))(a1);
	}

	static ::System::Void Method_1_D533C48EE040D8E4(::System::ValueTuple_2<::System::Int32, ::System::Int32> a1, ::Foundation::ViewObject::ViewObjectHandle a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Foundation::ViewObject::ViewObjectHandle a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Foundation::ViewObject::ViewObjectHandle, ::System::Single, ::System::Single, ::System::Single, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A4C39CFFEBDB39AE_METHOD_1_D533C48EE040D8E4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}
};
