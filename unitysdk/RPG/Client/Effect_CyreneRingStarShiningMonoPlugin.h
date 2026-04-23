#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class Effect_CyreneRingStarShiningBehavior; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1C6720)
#define RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA1C6770)
#define RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA1C6820)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_CyreneRingStarShiningMonoPlugin_TypeDefinitionIndex = 64939;

	class Effect_CyreneRingStarShiningMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_CyreneRingStarShiningBehavior*>
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererSlots*>* TargetMaterials; // 0x30
		::System::String* ShiningIntensityPropertyName; // 0x38
		::UnityEngine::Vector2 ShiningIntensityMinMax; // 0x40
		::System::Single ShiningIntensityPower; // 0x48
		::UnityEngine::AnimationCurve* ShiningIntensityOverView; // 0x50
		::System::Single ShiningViewAngle; // 0x58
		::System::Single ShiningViewPower; // 0x5C
		::UnityEngine::AnimationCurve* ShiningIntensityOverLifetime; // 0x60
		::System::Single ShiningLifetime; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_CYRENERINGSTARSHININGMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
