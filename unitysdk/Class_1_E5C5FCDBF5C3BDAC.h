#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_A1B83C8DEA7CC5F6;
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x12ECA420)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x12ECA0D0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET UNITYSDK_OFFSET(0x12ECACB0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_55BF9B0BDCC574FD_OFFSET UNITYSDK_OFFSET(0x12ECA210)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x12ECAAA0)
#define CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12ECA1C0)
#define CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET UNITYSDK_OFFSET(0x12ECA0C0)

inline static constexpr unsigned int Class_1_E5C5FCDBF5C3BDAC_TypeDefinitionIndex = 48996;

class Class_1_E5C5FCDBF5C3BDAC : public ::System::Object
{
public:
	::System::Threading::CancellationTokenSource* Field_1_5; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Class_1_A1B83C8DEA7CC5F6* Field_1_0; // 0x20
	::System::Single Field_1_3; // 0x28
	::Foundation::Coroutine::CoroutineHandle Field_1_1; // 0x2C
	::System::Single Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A1B83C8DEA7CC5F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A1B83C8DEA7CC5F6*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_55BF9B0BDCC574FD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_55BF9B0BDCC574FD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_4E80C9CC9E7CA21F(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Threading::CancellationTokenSource* a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_1_E5C5FCDBF5C3BDAC_METHOD_1_4E80C9CC9E7CA21F_OFFSET))(this, a1, a2, a3, a4);
	}
};
