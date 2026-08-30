#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class MaterialAnimationBindingSyncBehavior; }
namespace RPG::Client { class MaterialAnimationBindingSyncBehavior_SyncChannel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD679370)
#define RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD6793C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialAnimationBindingSyncMonoPlugin_TypeDefinitionIndex = 70258;

	class MaterialAnimationBindingSyncMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::MaterialAnimationBindingSyncBehavior*>
	{
	public:
		::System::Boolean AutoDiscoverFromAnimator; // 0x30
		::UnityEngine::Animator* MaterialAnimator; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MaterialAnimationBindingSyncBehavior_SyncChannel*>* Channels; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALANIMATIONBINDINGSYNCMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
