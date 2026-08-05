#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_TAGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19999770)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoEffectTagControlTrack_TagItem_TypeDefinitionIndex = 47345;

	class MihoyoEffectTagControlTrack_TagItem : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::TrackAsset* track; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* WhiteList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BlackList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_TAGITEM__CTOR_OFFSET))(this);
		}
	};
}
