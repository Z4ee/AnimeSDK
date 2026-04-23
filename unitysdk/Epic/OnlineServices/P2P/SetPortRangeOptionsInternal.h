#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::P2P { class SetPortRangeOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x59CD0)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_MAXADDITIONALPORTSTOTRY_OFFSET UNITYSDK_OFFSET(0x59CA0)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x59CB0)
#define EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_PORT_OFFSET UNITYSDK_OFFSET(0x59C90)

namespace Epic::OnlineServices::P2P
{
	inline static constexpr unsigned int SetPortRangeOptionsInternal_TypeDefinitionIndex = 41756;

	struct alignas(4) SetPortRangeOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::UInt16 m_Port; // 0x14
		::System::UInt16 m_MaxAdditionalPortsToTry; // 0x16

		::System::Void set_Port(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_PORT_OFFSET))(this, value);
		}

		::System::Void set_MaxAdditionalPortsToTry(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_MAXADDITIONALPORTSTOTRY_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::P2P::SetPortRangeOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::P2P::SetPortRangeOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_P2P_SETPORTRANGEOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
