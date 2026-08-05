#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_6F763FE7425E8072_GETRESULT_OFFSET UNITYSDK_OFFSET(0x18267400)
#define CLASS_1_6F763FE7425E8072_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x18267570)
#define CLASS_1_6F763FE7425E8072_METHOD_1_1E1EF22C61B3E4CE_OFFSET UNITYSDK_OFFSET(0x182678F0)
#define CLASS_1_6F763FE7425E8072_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18267510)
#define CLASS_1_6F763FE7425E8072_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x182677A0)
#define CLASS_1_6F763FE7425E8072_METHOD_1_95F1706522302B48_OFFSET UNITYSDK_OFFSET(0x18267990)
#define CLASS_1_6F763FE7425E8072_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18267680)
#define CLASS_1_6F763FE7425E8072_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x18267700)
#define CLASS_1_6F763FE7425E8072__CTOR_OFFSET UNITYSDK_OFFSET(0x18267390)

inline static constexpr unsigned int Class_1_6F763FE7425E8072_TypeDefinitionIndex = 61386;

class Class_1_6F763FE7425E8072 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_1_7; // 0x10
	::System::Threading::CancellationToken Field_1_0; // 0x20
	::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x48

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072__CTOR_OFFSET))(this, a1);
	}

	::System::Void GetResult(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_GETRESULT_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_GETSTATUS_OFFSET))(this, a1);
	}

	::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
	}

	::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
	{
		return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_UNSAFEGETSTATUS_OFFSET))(this);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_1E1EF22C61B3E4CE()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_METHOD_1_1E1EF22C61B3E4CE_OFFSET))(this);
	}

	::System::Void Method_1_95F1706522302B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_METHOD_1_95F1706522302B48_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6F763FE7425E8072_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
