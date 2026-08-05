#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/ComparisonOp.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Lobby { class AttributeData; }
namespace Epic::OnlineServices::Lobby { class LobbySearchSetParameterOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9613C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9613B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET UNITYSDK_OFFSET(0x5B0840)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x961330)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x9612C0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbySearchSetParameterOptionsInternal_TypeDefinitionIndex = 36380;

	struct alignas(8) LobbySearchSetParameterOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_Parameter; // 0x18
		::Epic::OnlineServices::ComparisonOp m_ComparisonOp; // 0x20

		::System::Void set_Parameter(::Epic::OnlineServices::Lobby::AttributeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::AttributeData*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_PARAMETER_OFFSET))(this, value);
		}

		::System::Void set_ComparisonOp(::Epic::OnlineServices::ComparisonOp value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ComparisonOp))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_COMPARISONOP_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYSEARCHSETPARAMETEROPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
