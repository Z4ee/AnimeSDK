#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class MonoPrefabLightFadeInOutMonoPlugin; }
namespace UnityEngine { class Light; }

#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x18C6B8A0)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x18C6B650)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_METHOD_3_31F40A8A1EFC6074_OFFSET UNITYSDK_OFFSET(0x18C6B920)
#define RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18C6BA00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPrefabLightFadeInOutBehavior_TypeDefinitionIndex = 67731;

	class MonoPrefabLightFadeInOutBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::Il2CppArray<::UnityEngine::Light*>* _TargetLights; // 0x38
		::Il2CppArray<::System::Single>* _TargetLightsIntensity; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
		}

		::System::Void Method_3_31F40A8A1EFC6074(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_METHOD_3_31F40A8A1EFC6074_OFFSET))(this, a1);
		}

		::RPG::Client::MonoPrefabLightFadeInOutMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::MonoPrefabLightFadeInOutMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPREFABLIGHTFADEINOUTBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
