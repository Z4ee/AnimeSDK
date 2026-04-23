#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/P2P/SocketIdInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_P2P_SOCKETID_GET_SOCKETNAME_OFFSET UNITYSDK_OFFSET(0x8EE48C0)
#define EPIC_ONLINESERVICES_P2P_SOCKETID_SET_1_OFFSET UNITYSDK_OFFSET(0x8EE4A20)
#define EPIC_ONLINESERVICES_P2P_SOCKETID_SET_OFFSET UNITYSDK_OFFSET(0x8EE48E0)
#define EPIC_ONLINESERVICES_P2P_SOCKETID_SET_SOCKETNAME_OFFSET UNITYSDK_OFFSET(0x8EE48D0)
#define EPIC_ONLINESERVICES_P2P_SOCKETID__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE4BD0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SocketId_TypeDefinitionIndex = 41759;

	class SocketId : public ::System::Object
	{
	public:
		::System::String* _SocketName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETID__CTOR_OFFSET))(this);
		}

		::System::String* get_SocketName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETID_GET_SOCKETNAME_OFFSET))(this);
		}

		::System::Void set_SocketName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETID_SET_SOCKETNAME_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::P2P::SocketIdInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::P2P::SocketIdInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETID_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETID_SET_1_OFFSET))(this, other);
		}
	};
}
