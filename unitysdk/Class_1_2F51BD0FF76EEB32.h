#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_2F51BD0FF76EEB32__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA3410)

inline static constexpr unsigned int Class_1_2F51BD0FF76EEB32_TypeDefinitionIndex = 46727;

class Class_1_2F51BD0FF76EEB32 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* Field_1_0; // 0x10
	::UnityEngine::Timeline::GroupTrack* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F51BD0FF76EEB32__CTOR_OFFSET))(this);
	}
};
