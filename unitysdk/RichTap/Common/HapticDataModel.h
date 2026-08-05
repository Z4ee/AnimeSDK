#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Types/FXPlayType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RICHTAP_COMMON_HAPTICDATAMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F227E60)
#define RICHTAP_COMMON_HAPTICDATAMODEL_NOTIFYPLAYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1F228520)
#define RICHTAP_COMMON_HAPTICDATAMODEL_PLAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F228350)
#define RICHTAP_COMMON_HAPTICDATAMODEL_RELEASECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1F227E90)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STARTREALPLAY_OFFSET UNITYSDK_OFFSET(0x1F227340)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STARTVIRTUALPLAY_OFFSET UNITYSDK_OFFSET(0x1F228120)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STOPREALPLAY_OFFSET UNITYSDK_OFFSET(0x1F227080)
#define RICHTAP_COMMON_HAPTICDATAMODEL_STOPVIRTUALPLAY_OFFSET UNITYSDK_OFFSET(0x1F227BD0)
#define RICHTAP_COMMON_HAPTICDATAMODEL_UPDATELOOPPARAMS_OFFSET UNITYSDK_OFFSET(0x1F228760)
#define RICHTAP_COMMON_HAPTICDATAMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F228770)

namespace RichTap::Common
{
	inline static constexpr unsigned int HapticDataModel_TypeDefinitionIndex = 38764;

	class HapticDataModel : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction_1<::System::Boolean>* RealPlayCompleted; // 0x10
		::System::String* uuid; // 0x18
		::System::String* name; // 0x20
		::System::String* heData; // 0x28
		::UnityEngine::Events::UnityAction_1<::System::Boolean>* VirtualPlayCompleted; // 0x30
		::System::String* identifier; // 0x38
		::System::Int32 insertionIndex; // 0x40
		::System::Int32 loop; // 0x44
		::System::Int32 currentLoopNum; // 0x48
		::System::Int32 duration; // 0x4C
		::System::Int32 priority; // 0x50
		::RichTap::Types::FXPlayType type; // 0x54
		::System::Int32 startOffset; // 0x58
		::System::Int32 interval; // 0x5C
		::System::Int32 prebakeId; // 0x60
		::System::Int32 playId; // 0x64
		::System::Int32 frequency; // 0x68
		::System::Int32 amplitude; // 0x6C
		::System::Int64 startTime; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void StartRealPlay(::UnityEngine::Events::UnityAction_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STARTREALPLAY_OFFSET))(this, callback);
		}

		::System::Void StartVirtualPlay(::UnityEngine::Events::UnityAction_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STARTVIRTUALPLAY_OFFSET))(this, callback);
		}

		::System::Void NotifyPlayComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_NOTIFYPLAYCOMPLETE_OFFSET))(this);
		}

		::System::Void StopVirtualPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STOPVIRTUALPLAY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PlayCoroutine(::System::Single waitTime)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_PLAYCOROUTINE_OFFSET))(this, waitTime);
		}

		::System::Void ReleaseCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_RELEASECOROUTINE_OFFSET))(this);
		}

		::System::Void StopRealPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_STOPREALPLAY_OFFSET))(this);
		}

		::System::Void UpdateLoopParams(::System::Int32 newAmplitude, ::System::Int32 newInterval, ::System::Int32 newFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_COMMON_HAPTICDATAMODEL_UPDATELOOPPARAMS_OFFSET))(this, newAmplitude, newInterval, newFrequency);
		}
	};
}
