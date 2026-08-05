#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_A1B83C8DEA7CC5F6;
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_3120406F2F033EEC_OFFSET UNITYSDK_OFFSET(0x1668C5E0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x1668CFD0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET UNITYSDK_OFFSET(0x1668D0C0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_55BF9B0BDCC574FD_OFFSET UNITYSDK_OFFSET(0x1668C3D0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1668C6A0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E12EA1682B02E1A6_OFFSET UNITYSDK_OFFSET(0x1668C900)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1668C8B0)
#define CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1668C3C0)

inline static constexpr unsigned int Class_1_E5C5FCDBF5C3BDAC_TypeDefinitionIndex = 91245;

class Class_1_E5C5FCDBF5C3BDAC : public ::System::Object
{
public:
	::Class_1_A1B83C8DEA7CC5F6* Field_1_2; // 0x10
	::System::Action* Field_1_6; // 0x18
	::System::Threading::CancellationTokenSource* Field_1_5; // 0x20
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x28
	::System::Single Field_1_0; // 0x2C
	::System::Single Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_55BF9B0BDCC574FD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_55BF9B0BDCC574FD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3120406F2F033EEC(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_3120406F2F033EEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A1B83C8DEA7CC5F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E12EA1682B02E1A6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E12EA1682B02E1A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_4E80C9CC9E7CA21F(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET))(this, a1, a2, a3, a4);
	}
};
