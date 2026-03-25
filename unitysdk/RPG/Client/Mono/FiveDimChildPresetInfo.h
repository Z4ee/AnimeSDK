#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Mono { class FiveDimChildPresetItem; }

#define RPG_CLIENT_MONO_FIVEDIMCHILDPRESETINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9C11610)

namespace RPG::Client::Mono
{
	inline static constexpr unsigned int FiveDimChildPresetInfo_TypeDefinitionIndex = 61874;

	class FiveDimChildPresetInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::RPG::Client::Mono::FiveDimChildPresetItem*>* ChildPresetItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONO_FIVEDIMCHILDPRESETINFO__CTOR_OFFSET))(this);
		}
	};
}
