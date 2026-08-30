#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class CharMatCameraPropOverrideBehavior; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCAC1B60)

namespace RPG::Client
{
	inline static constexpr unsigned int CharMatCameraPropOverrideMonoPlugin_TypeDefinitionIndex = 70357;

	class CharMatCameraPropOverrideMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::CharMatCameraPropOverrideBehavior*>
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* TargetRenderers; // 0x30
		::System::Single CameraFieldOfView; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARMATCAMERAPROPOVERRIDEMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
