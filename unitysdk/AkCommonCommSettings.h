#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCommunicationSettings_AkCommSystem.h"
#include "unitysdk/System/Object.h"

class AkCommunicationSettings;
namespace System { class String; }

#define AKCOMMONCOMMSETTINGS_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B95FD30)
#define AKCOMMONCOMMSETTINGS_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1B960820)
#define AKCOMMONCOMMSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9608A0)
#define AKCOMMONCOMMSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B960860)

inline static constexpr unsigned int AkCommonCommSettings_TypeDefinitionIndex = 42039;

class AkCommonCommSettings : public ::System::Object
{
public:
	static ::System::UInt16* StaticGet_DefaultDiscoveryBroadcastPort()
	{
		return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(AkCommonCommSettings_TypeDefinitionIndex)->GetStaticField(0xF680);
	}
	::System::UInt32 m_PoolSize; // 0x10
	::System::UInt16 m_DiscoveryBroadcastPort; // 0x14
	::System::UInt16 m_CommandPort; // 0x16
	::System::UInt16 m_NotificationPort; // 0x18
	::System::Boolean m_InitializeSystemComms; // 0x1A
	::System::String* m_NetworkName; // 0x20
	::AkCommunicationSettings_AkCommSystem m_commSystem; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS__CCTOR_OFFSET))();
	}

	::System::Void CopyTo(::AkCommunicationSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkCommunicationSettings*))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_COPYTO_OFFSET))(this, a1);
	}

	::System::Void Validate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONCOMMSETTINGS_VALIDATE_OFFSET))(this);
	}
};
