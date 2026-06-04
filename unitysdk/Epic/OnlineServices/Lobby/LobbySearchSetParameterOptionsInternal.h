#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetParameterOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x550D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x550C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x2A90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x55040)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x54FD0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetParameterOptionsInternal_TypeDefinitionIndex = 42742;

	struct alignas(8) LobbySearchSetParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Parameter; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Parameter(::Epic::OnlineServices::Lobby::AttributeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET))(this, a1);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
