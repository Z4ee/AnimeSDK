#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/LoaderNodeBase_1.h"

namespace System { class Action; }
namespace UnityEngine { class Object; }

#define FOUNDATION_TIMESLICEDLOADERNODE_AWAITLOAD_OFFSET UNITYSDK_OFFSET(0x1D8FC470)
#define FOUNDATION_TIMESLICEDLOADERNODE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1D8FC960)
#define FOUNDATION_TIMESLICEDLOADERNODE_CALLLOADED_OFFSET UNITYSDK_OFFSET(0x1D8FC7E0)
#define FOUNDATION_TIMESLICEDLOADERNODE_ONASSETCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D8FC8E0)
#define FOUNDATION_TIMESLICEDLOADERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FC1A0)

namespace Foundation
{
	inline static constexpr unsigned int TimeSlicedLoaderNode_TypeDefinitionIndex = 7980;

	class TimeSlicedLoaderNode : public ::Foundation::LoaderNodeBase_1<::Foundation::AssetRequestHandle>
	{
	public:
		::System::Void _ctor(::Foundation::AssetRequestHandle value, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADERNODE__CTOR_OFFSET))(this, value, callback);
		}

		::System::Void AwaitLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADERNODE_AWAITLOAD_OFFSET))(this);
		}

		::System::Void CallLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADERNODE_CALLLOADED_OFFSET))(this);
		}

		::System::Void OnAssetCompleteCallback(::UnityEngine::Object* asset, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADERNODE_ONASSETCOMPLETECALLBACK_OFFSET))(this, asset, handle);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TIMESLICEDLOADERNODE_BEFORERECYCLE_OFFSET))(this);
		}
	};
}
