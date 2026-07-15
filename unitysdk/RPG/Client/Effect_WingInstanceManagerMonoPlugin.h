#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_WingInstanceManagerBehavior; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x15138120)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WingInstanceManagerMonoPlugin_TypeDefinitionIndex = 67376;

	class Effect_WingInstanceManagerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_WingInstanceManagerBehavior*>
	{
	public:
		::UnityEngine::Mesh* TargetMesh; // 0x30
		::Il2CppArray<::UnityEngine::Material*>* TargetMats; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
