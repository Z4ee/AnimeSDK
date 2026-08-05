#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIGUISOUND_TRANSFERSOUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C9A20)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_TransferSoundConfig_TypeDefinitionIndex = 90155;

	class ConfigUISound_TransferSoundConfig : public ::System::Object
	{
	public:
		::System::UInt32 lastSection; // 0x10
		::System::UInt32 nextSection; // 0x14
		::System::String* transferScopeValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_TRANSFERSOUNDCONFIG__CTOR_OFFSET))(this);
		}
	};
}
