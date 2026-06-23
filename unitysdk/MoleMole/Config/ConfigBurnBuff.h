#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGBURNBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1270E180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBurnBuff_TypeDefinitionIndex = 59147;

	class ConfigBurnBuff : public ::System::Object
	{
	public:
		::System::String* BurnDotEffectAudio; // 0x10
		::System::String* FlameBurstEffectAttachPoint; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* FlameBurstMaterialAnimationNames; // 0x20
		::System::String* MiddleFlameBurstEffectName; // 0x28
		::System::String* SmallFlameBurstEffectName; // 0x30
		::System::String* LargeFlameBurstEffectName; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBURNBUFF__CTOR_OFFSET))(this);
		}
	};
}
