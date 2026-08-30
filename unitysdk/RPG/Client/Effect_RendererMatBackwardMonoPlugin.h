#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class Effect_RendererMatBackwardBehavior; }
namespace System { class String; }

#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xCE15470)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PAUSE_OFFSET UNITYSDK_OFFSET(0xCE15250)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYBACKWARD_OFFSET UNITYSDK_OFFSET(0xCE15310)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN_PLAYFORWARD_OFFSET UNITYSDK_OFFSET(0xCE153D0)
#define RPG_CLIENT_EFFECT_RENDERERMATBACKWARDMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xCE154C0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_RendererMatBackwardMonoPlugin_TypeDefinitionIndex = 70511;

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
	};
}
