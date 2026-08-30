#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class CreateLobbySearchOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x4F710)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_MAXRESULTS_OFFSET UNITYSDK_OFFSET(0x2200)
#define EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x2210)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int CreateLobbySearchOptionsInternal_TypeDefinitionIndex = 45688;

	struct alignas(4) CreateLobbySearchOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt32 m_MaxResults; // 0x14

		::System::Void set_MaxResults(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_MAXRESULTS_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_CREATELOBBYSEARCHOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
