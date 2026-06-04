#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client { class Effect_BATControllerBehavior; }
namespace RPG::Client { class Effect_BATControllerBehavior_RendererPackage; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB843500)
#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_UPDATERENDERERPACKAGES_OFFSET UNITYSDK_OFFSET(0xB843210)
#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xB843550)
#define RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xB843560)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_BATControllerMonoPlugin_TypeDefinitionIndex = 65858;

	class Effect_BATControllerMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::Effect_BATControllerBehavior*>
	{
	public:
		::Il2CppArray<::RPG::Client::Effect_BATControllerBehavior_RendererPackage*>* RendererPackages; // 0x30
		::UnityEngine::Texture2D* AnimationTexture; // 0x38
		::System::Int32 FrameIndex; // 0x40
		::System::Int32 NumberOfBones; // 0x44
		::System::Boolean Loop; // 0x48
		::System::Int32 FrameRate; // 0x4C
		::UnityEngine::Vector2Int LoopRange; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRendererPackages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_UPDATERENDERERPACKAGES_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_BATCONTROLLERMONOPLUGIN___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
