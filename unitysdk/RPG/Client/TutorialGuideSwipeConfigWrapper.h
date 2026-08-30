#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigType.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigWrapper.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"

namespace RPG::Client { class RuntimeTutorialNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_CREATEGUIDESWIPE_OFFSET UNITYSDK_OFFSET(0x1B10C280)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETENDNODE_OFFSET UNITYSDK_OFFSET(0x1B10C7E0)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETSTARTNODE_OFFSET UNITYSDK_OFFSET(0x1B10C630)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0x1B10C990)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET UNITYSDK_OFFSET(0x1B10C9E0)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_SYNCSWIPEAREATO_OFFSET UNITYSDK_OFFSET(0x1B10C420)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10C270)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideSwipeConfigWrapper_TypeDefinitionIndex = 68198;

	class TutorialGuideSwipeConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::TutorialGuideSwipeConfigWrapper* CreateGuideSwipe(::RPG::GameCore::TutorialGuideHintType a1, ::System::Collections::Generic::IList_1<::System::String*>* a2)
		{
			return ((::RPG::Client::TutorialGuideSwipeConfigWrapper*(*)(::RPG::GameCore::TutorialGuideHintType, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_CREATEGUIDESWIPE_OFFSET))(a1, a2);
		}

		::System::Void SyncSwipeAreaTo(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_SYNCSWIPEAREATO_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeTutorialNode* GetStartNode()
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETSTARTNODE_OFFSET))(this);
		}

		::RPG::Client::RuntimeTutorialNode* GetEndNode()
		{
			return ((::RPG::Client::RuntimeTutorialNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETENDNODE_OFFSET))(this);
		}

		::RPG::Client::TutorialGuideConfigType get_ConfigType()
		{
			return ((::RPG::Client::TutorialGuideConfigType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET))(this);
		}

		::System::Boolean get__UseOriginRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET))(this);
		}
	};
}
