#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Sanctions { class CopyPlayerSanctionByIndexOptions; }
namespace Epic::OnlineServices::Sanctions { class GetPlayerSanctionCountOptions; }
namespace Epic::OnlineServices::Sanctions { class OnQueryActivePlayerSanctionsCallback; }
namespace Epic::OnlineServices::Sanctions { class PlayerSanction; }
namespace Epic::OnlineServices::Sanctions { class QueryActivePlayerSanctionsOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_COPYPLAYERSANCTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xB3FA5D0)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_GETPLAYERSANCTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xB3FA860)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_ONQUERYACTIVEPLAYERSANCTIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB3FA510)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_QUERYACTIVEPLAYERSANCTIONS_OFFSET UNITYSDK_OFFSET(0xB3FAA50)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3FA5C0)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB3FA5B0)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int SanctionsInterface_TypeDefinitionIndex = 45254;

	class SanctionsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 CopyplayersanctionbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetplayersanctioncountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 PlayersanctionApiLatest = 0x2; // 0x0
		// static const ::System::Int32 QueryactiveplayersanctionsApiLatest = 0x2; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result CopyPlayerSanctionByIndex(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions* a1, ::Epic::OnlineServices::Sanctions::PlayerSanction*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions*, ::Epic::OnlineServices::Sanctions::PlayerSanction*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_COPYPLAYERSANCTIONBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetPlayerSanctionCount(::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_GETPLAYERSANCTIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void QueryActivePlayerSanctions(::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions*, ::System::Object*, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_QUERYACTIVEPLAYERSANCTIONS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnQueryActivePlayerSanctionsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_ONQUERYACTIVEPLAYERSANCTIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
