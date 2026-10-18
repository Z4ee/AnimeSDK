#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlindBox/Pool/PoolClosedReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FeatureSwitchModule; }

#define CLASS_1_E94D9F0C0B348BD4_METHOD_1_AE362FE584CB28F5_OFFSET UNITYSDK_OFFSET(0x163248C0)
#define CLASS_1_E94D9F0C0B348BD4__CTOR_OFFSET UNITYSDK_OFFSET(0x16324840)

inline static constexpr unsigned int Class_1_E94D9F0C0B348BD4_TypeDefinitionIndex = 74920;

class Class_1_E94D9F0C0B348BD4 : public ::System::Object
{
public:
	::RPG::Client::FeatureSwitchModule* OOBAFGIEEPM; // 0x10
	::System::UInt32 EOCOOIELJPE; // 0x18

	::System::Void _ctor(::RPG::Client::FeatureSwitchModule* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FeatureSwitchModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E94D9F0C0B348BD4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::BlindBox::Pool::PoolClosedReason Method_1_AE362FE584CB28F5()
	{
		return ((::RPG::Client::BlindBox::Pool::PoolClosedReason(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E94D9F0C0B348BD4_METHOD_1_AE362FE584CB28F5_OFFSET))(this);
	}
};
