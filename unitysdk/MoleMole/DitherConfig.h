#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_DITHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15A08080)

namespace MoleMole
{
	inline static constexpr unsigned int DitherConfig_TypeDefinitionIndex = 57785;

	class DitherConfig : public ::System::Object
	{
	public:
		::System::String* DitherAlphaConfigKey; // 0x10
		::System::String* MpReconnectDitherAlphaConfigKey; // 0x18
		::System::String* MpDisconnectDitherAlphaConfigKey; // 0x20
		::System::String* PartDitherAlphaConfigName; // 0x28
		::System::String* BornDitherAlphaConfigKey; // 0x30
		::System::String* DitherAlphaConfigName; // 0x38
		::System::Single DefaultDitherAlpha; // 0x40
		::System::Boolean MpDisconnectDither; // 0x44
		::System::Boolean BornDither; // 0x45
		::System::Boolean AvatarUsingDitherAlpha; // 0x46
		::System::Boolean MpReconnectDither; // 0x47
		::System::Single MpDisconnectDitherDuration; // 0x48
		::System::Single MpReconnectDitherDuration; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DITHERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
