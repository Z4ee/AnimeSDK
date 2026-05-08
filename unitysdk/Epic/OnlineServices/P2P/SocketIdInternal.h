#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class SocketId; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_GET_SOCKETNAME_OFFSET UNITYSDK_OFFSET(0x8E0790)
#define EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8E0970)
#define EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8E08A0)
#define EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_SOCKETNAME_OFFSET UNITYSDK_OFFSET(0x8E07F0)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SocketIdInternal_TypeDefinitionIndex = 33979;

	struct alignas(8) SocketIdInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::Il2CppArray<::System::Byte>* m_SocketName; // 0x18

		::System::String* get_SocketName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_GET_SOCKETNAME_OFFSET))(this);
		}

		::System::Void set_SocketName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_SOCKETNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::SocketId* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SocketId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SOCKETIDINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
