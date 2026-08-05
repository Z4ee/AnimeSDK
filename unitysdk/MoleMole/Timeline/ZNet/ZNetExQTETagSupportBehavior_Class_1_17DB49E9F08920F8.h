#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MihoyoEffectTagControlTrack; }
namespace MoleMole::Timeline::ZNet { class ZNetExQTETagSupportBehavior; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::Timeline { class TrackAsset; }

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportBehavior_Class_1_17DB49E9F08920F8_TypeDefinitionIndex = 41662;

	template <typename T>
	class ZNetExQTETagSupportBehavior_Class_1_17DB49E9F08920F8 : public ::System::Object
	{
	public:
		::MoleMole::Timeline::ZNet::ZNetExQTETagSupportBehavior* Field_1_2; // 0x0
		::MoleMole::Timeline::MihoyoEffectTagControlTrack* Field_1_1; // 0x0
		::System::Action_2<T, ::System::Boolean>* Field_1_0; // 0x0
	};
}
