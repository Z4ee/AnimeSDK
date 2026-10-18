#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LimaoNews { class LimaoNewsMainLimaoControl_LimaoItem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B7A90)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsMainLimaoControl_LimaoGroup_TypeDefinitionIndex = 80365;

	class LimaoNewsMainLimaoControl_LimaoGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::LimaoNews::LimaoNewsMainLimaoControl_LimaoItem*>* LimaoItems; // 0x10
		::UnityEngine::Transform* Root; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSMAINLIMAOCONTROL_LIMAOGROUP__CTOR_OFFSET))(this);
		}
	};
}
