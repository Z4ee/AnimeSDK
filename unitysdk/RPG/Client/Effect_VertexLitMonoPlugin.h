#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_VertexLitBehavior; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x958ECA0)
#define RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x958EC10)
#define RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x958ECF0)
#define RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x958ED90)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_VertexLitMonoPlugin_TypeDefinitionIndex = 57800;

	class Effect_VertexLitMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_VertexLitBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x30
		::UnityEngine::Light* DirectionalLight; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Light*>* PointLights; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* ParticleSystemLights; // 0x48
		::RPG::Client::Effect_VertexLitBehavior* Field_7_4; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::RPG::Client::Effect_VertexLitBehavior* get_Behavior()
		{
			return ((::RPG::Client::Effect_VertexLitBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_VERTEXLITMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
