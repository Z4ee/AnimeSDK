#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace MoleMole::Timeline { class MihoyoEffectTagControlTrack_TagItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_METHOD_5_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x129E40E0)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x129E40D0)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x129E3C80)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONBEFORETRACKSERIALIZE_OFFSET UNITYSDK_OFFSET(0x129E3930)
#define MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x129E3FB0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MihoyoEffectTagControlTrack_TypeDefinitionIndex = 47344;

	class MihoyoEffectTagControlTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Timeline::TrackAsset*, ::MoleMole::Timeline::MihoyoEffectTagControlTrack_TagItem*>* tagMap; // 0xB0
		::System::Collections::Generic::List_1<::MoleMole::Timeline::MihoyoEffectTagControlTrack_TagItem*>* tagItems; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeTrackSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONBEFORETRACKSERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterTrackDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_ONAFTERTRACKDESERIALIZE_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MIHOYOEFFECTTAGCONTROLTRACK_METHOD_5_832295EC279E5994_1_OFFSET))(this);
		}
	};
}
