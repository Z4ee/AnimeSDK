#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AbilitySwitchSetting.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCSECTIONABILITYSWITCHCONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD443770)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSectionAbilitySwitchConfigSO_TypeDefinitionIndex = 50689;

	class NPCSectionAbilitySwitchConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::AbilitySwitchSetting>* Section2AbilitySettings; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSECTIONABILITYSWITCHCONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
