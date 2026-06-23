#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/EndOfFramePhase.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define FOUNDATION_ENDOFFRAMESERVICE_DOENDOFFRAMEWORK_OFFSET UNITYSDK_OFFSET(0x1E5D80B0)
#define FOUNDATION_ENDOFFRAMESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E5D86A0)
#define FOUNDATION_ENDOFFRAMESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x1E5D8690)
#define FOUNDATION_ENDOFFRAMESERVICE_INVOKECALLONCECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E5D8080)
#define FOUNDATION_ENDOFFRAMESERVICE_INVOKESELFDETERMINEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E5D7F80)
#define FOUNDATION_ENDOFFRAMESERVICE_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E5D84B0)
#define FOUNDATION_ENDOFFRAMESERVICE_START_OFFSET UNITYSDK_OFFSET(0x1E5D7F30)
#define FOUNDATION_ENDOFFRAMESERVICE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E5D85A0)
#define FOUNDATION_ENDOFFRAMESERVICE_VALIDATEINVARIANT_OFFSET UNITYSDK_OFFSET(0x1E5D80A0)
#define FOUNDATION_ENDOFFRAMESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D7CE0)

namespace Foundation
{
	inline static constexpr unsigned int EndOfFrameService_TypeDefinitionIndex = 8430;

	class EndOfFrameService : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Action*>* _callbacks; // 0x10
		::UnityEngine::WaitForEndOfFrame* _endOfFrame; // 0x18
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Func_1<::System::Boolean>*>*>* _selfDeterminedCallbacks; // 0x20
		::Il2CppArray<::System::Action*>* _callOnceCallbacks; // 0x28
		::System::Int32 _frameCount; // 0x30
		::System::Boolean _isInvoking; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE__CTOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Start()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_START_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Func_1<::System::Boolean>*>* InvokeSelfDeterminedCallback(::System::Collections::Generic::List_1<::System::Func_1<::System::Boolean>*>* callbackList)
		{
			return ((::System::Collections::Generic::List_1<::System::Func_1<::System::Boolean>*>*(*)(::System::Collections::Generic::List_1<::System::Func_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_INVOKESELFDETERMINEDCALLBACK_OFFSET))(callbackList);
		}

		static ::System::Action* InvokeCallOnceCallback(::System::Action* callback)
		{
			return ((::System::Action*(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_INVOKECALLONCECALLBACK_OFFSET))(callback);
		}

		::System::Void ValidateInvariant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_VALIDATEINVARIANT_OFFSET))(this);
		}

		::System::Void DoEndOfFrameWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_DOENDOFFRAMEWORK_OFFSET))(this);
		}

		::System::Void Register(::Foundation::EndOfFramePhase phase, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EndOfFramePhase, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_REGISTER_OFFSET))(this, phase, callback);
		}

		::System::Void UnRegister(::Foundation::EndOfFramePhase phase, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EndOfFramePhase, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_UNREGISTER_OFFSET))(this, phase, callback);
		}

		::System::Void Foundation_IGameService_OnReadyToDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_FOUNDATION_IGAMESERVICE_ONREADYTODESTROY_OFFSET))(this);
		}

		::System::Void Foundation_IGameService_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ENDOFFRAMESERVICE_FOUNDATION_IGAMESERVICE_ONDESTROY_OFFSET))(this);
		}
	};
}
