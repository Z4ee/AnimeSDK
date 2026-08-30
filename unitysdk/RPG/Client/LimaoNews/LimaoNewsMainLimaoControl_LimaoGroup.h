#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainLimaoControl_LimaoItem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD469F10)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_LimaoGroup_TypeDefinitionIndex = 79043;

	class LimaoNewsMainLimaoControl_LimaoGroup : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Root; // 0x10
		::Il2CppArray<::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoItem*>* LimaoItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP__CTOR_OFFSET))(this);
		}
	};
}
