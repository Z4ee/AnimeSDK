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

#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_COPYPLAYERSANCTIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x1DFF4EA0)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_GETPLAYERSANCTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1DFF5150)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_ONQUERYACTIVEPLAYERSANCTIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF4DF0)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_QUERYACTIVEPLAYERSANCTIONS_OFFSET UNITYSDK_OFFSET(0x1DFF5350)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF4E90)
#define EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF4E80)

namespace Epic::OnlineServices::Sanctions
{
	inline static constexpr unsigned int SanctionsInterface_TypeDefinitionIndex = 35849;

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

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::Epic::OnlineServices::Result CopyPlayerSanctionByIndex(::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions* options, ::Epic::OnlineServices::Sanctions::PlayerSanction*& outSanction)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sanctions::CopyPlayerSanctionByIndexOptions*, ::Epic::OnlineServices::Sanctions::PlayerSanction*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_COPYPLAYERSANCTIONBYINDEX_OFFSET))(this, options, outSanction);
		}

		::System::UInt32 GetPlayerSanctionCount(::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sanctions::GetPlayerSanctionCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_GETPLAYERSANCTIONCOUNT_OFFSET))(this, options);
		}

		::System::Void QueryActivePlayerSanctions(::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sanctions::QueryActivePlayerSanctionsOptions*, ::System::Object*, ::Epic::OnlineServices::Sanctions::OnQueryActivePlayerSanctionsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_QUERYACTIVEPLAYERSANCTIONS_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnQueryActivePlayerSanctionsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SANCTIONS_SANCTIONSINTERFACE_ONQUERYACTIVEPLAYERSANCTIONSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
