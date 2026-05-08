#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BE149A7D6310B037.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_70F762C4E2F0AD66_METHOD_2_ECA1CA7E247516D3_OFFSET UNITYSDK_OFFSET(0x107B7BA0)
#define CLASS_2_70F762C4E2F0AD66_METHOD_2_EEE8E63EA841EF9C_OFFSET UNITYSDK_OFFSET(0x107B7AA0)
#define CLASS_2_70F762C4E2F0AD66__CTOR_OFFSET UNITYSDK_OFFSET(0x107B7A90)

inline static constexpr unsigned int Class_2_70F762C4E2F0AD66_TypeDefinitionIndex = 82336;

class Class_2_70F762C4E2F0AD66 : public ::Class_1_BE149A7D6310B037
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_2_2()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_2_70F762C4E2F0AD66_TypeDefinitionIndex)->GetStaticField(0xCC10);
	}
	static ::UnityEngine::Vector3* StaticGet_Field_2_1()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_2_70F762C4E2F0AD66_TypeDefinitionIndex)->GetStaticField(0xCC1C);
	}
	::Foundation::Coroutine::CoroutineHandle Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70F762C4E2F0AD66__CTOR_OFFSET))(this);
	}

	static ::Class_1_A00B784DE48ED0A8* Method_2_EEE8E63EA841EF9C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Int32 a5)
	{
		return ((::Class_1_A00B784DE48ED0A8*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70F762C4E2F0AD66_METHOD_2_EEE8E63EA841EF9C_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_2_ECA1CA7E247516D3(::Class_1_A00B784DE48ED0A8* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Int32 a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::Class_1_A00B784DE48ED0A8*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_70F762C4E2F0AD66_METHOD_2_ECA1CA7E247516D3_OFFSET))(a1, a2, a3);
	}
};
