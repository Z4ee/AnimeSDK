#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_1_6F763FE7425E8072_GETRESULT_OFFSET UNITYSDK_OFFSET(0x10110E90)
#define CLASS_1_6F763FE7425E8072_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x10111000)
#define CLASS_1_6F763FE7425E8072_METHOD_1_1E1EF22C61B3E4CE_OFFSET UNITYSDK_OFFSET(0x10111380)
#define CLASS_1_6F763FE7425E8072_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10110FA0)
#define CLASS_1_6F763FE7425E8072_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x10111230)
#define CLASS_1_6F763FE7425E8072_METHOD_1_95F1706522302B48_OFFSET UNITYSDK_OFFSET(0x10111430)
#define CLASS_1_6F763FE7425E8072_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x10111110)
#define CLASS_1_6F763FE7425E8072_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x10111190)
#define CLASS_1_6F763FE7425E8072__CTOR_OFFSET UNITYSDK_OFFSET(0x10110E20)

inline static constexpr unsigned int Class_1_6F763FE7425E8072_TypeDefinitionIndex = 82500;

class Class_1_6F763FE7425E8072 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::RenderDataHandle Field_1_3; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Boolean> Field_1_0; // 0x20
	::System::Threading::CancellationToken Field_1_2; // 0x40
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
