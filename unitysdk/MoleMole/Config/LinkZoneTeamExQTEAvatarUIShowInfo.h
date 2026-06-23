#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LinkZoneTeamExQTEAvatarSlotInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_LINKZONETEAMEXQTEAVATARUISHOWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x170C56C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LinkZoneTeamExQTEAvatarUIShowInfo_TypeDefinitionIndex = 71865;

	class LinkZoneTeamExQTEAvatarUIShowInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo*>* ThreeAvatarSlotInfos; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LinkZoneTeamExQTEAvatarSlotInfo*>* TwoAvatarSlotInfos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LINKZONETEAMEXQTEAVATARUISHOWINFO__CTOR_OFFSET))(this);
		}
	};
}
