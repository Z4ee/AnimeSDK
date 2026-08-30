#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class FlipbookControllBehavior; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN_EVALUATTIMEBYINPUT_OFFSET UNITYSDK_OFFSET(0x190DECF0)
#define RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x190DEDB0)
#define RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x190DEE00)

namespace RPG::Client
{
	inline static constexpr unsigned int FlipbookControllMonoPlugin_TypeDefinitionIndex = 70568;

	class FlipbookControllMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FlipbookControllBehavior*>
	{
	public:
		::UnityEngine::AnimationCurve* Curve; // 0x30
		::System::Single TimeDebug; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void EvaluatTimebyInput(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN_EVALUATTIMEBYINPUT_OFFSET))(this, a1);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FLIPBOOKCONTROLLMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
