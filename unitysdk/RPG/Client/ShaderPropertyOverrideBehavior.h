#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class ShaderPropertyOverrideMonoPlugin; }

#define RPG_CLIENT_SHADERPROPERTYOVERRIDEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1AF7CDE0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7CE60)

namespace RPG::Client
{
	inline static constexpr unsigned int ShaderPropertyOverrideBehavior_TypeDefinitionIndex = 70988;

	class ShaderPropertyOverrideBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEBEHAVIOR__CTOR_OFFSET))(this);
		}

		::RPG::Client::ShaderPropertyOverrideMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::ShaderPropertyOverrideMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
