#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_1_2F51BD0FF76EEB32__CTOR_OFFSET UNITYSDK_OFFSET(0x12E85490)

inline static constexpr unsigned int Class_1_2F51BD0FF76EEB32_TypeDefinitionIndex = 48973;

class Class_1_2F51BD0FF76EEB32 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* EOHCPMLDIFE; // 0x10
	::UnityEngine::Timeline::GroupTrack* HBBDNGBNCBM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F51BD0FF76EEB32__CTOR_OFFSET))(this);
	}
};
