#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_RendererMatBackwardBehavior; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB885380)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0xB885160)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0xB885220)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0xB8852E0)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB8853D0)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB8853E0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RendererMatBackwardMonoPlugin_TypeDefinitionIndex = 65964;

	class Effect_RendererMatBackwardMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_RendererMatBackwardBehavior*>
	{
	public:
		::System::Int32 ExampleProperty; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PAUSE_OFFSET))(this);
		}

		::System::Void playBackward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYBACKWARD_OFFSET))(this);
		}

		::System::Void playForward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYFORWARD_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
