#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_TransformToMaterialBehavior; }
namespace RPG::Client { class Effect_TransformToMaterialBehavior_TransformPropertyMapping; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA211660)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_TransformToMaterialMonoPlugin_TypeDefinitionIndex = 65075;

	class Effect_TransformToMaterialMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_TransformToMaterialBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Effect_TransformToMaterialBehavior_TransformPropertyMapping*>* PropertyMappings; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_TRANSFORMTOMATERIALMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
