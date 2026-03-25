#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigType.h"
#include "unitysdk/RPG/Client/TutorialGuideConfigWrapper.h"
#include "unitysdk/RPG/GameCore/TutorialGuideHintType.h"

namespace RPG::Client { class RuntimeTutorialNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_CREATEGUIDESWIPE_OFFSET UNITYSDK_OFFSET(0xA63EAC0)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETENDNODE_OFFSET UNITYSDK_OFFSET(0xA63EFD0)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GETSTARTNODE_OFFSET UNITYSDK_OFFSET(0xA63EE80)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET_CONFIGTYPE_OFFSET UNITYSDK_OFFSET(0xA63F120)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_GET__USEORIGINRATIO_OFFSET UNITYSDK_OFFSET(0xA63F130)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_SYNCSWIPEAREATO_OFFSET UNITYSDK_OFFSET(0xA63EC70)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA63EAB0)
#define RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER___IFIXBASEPROXY_GET__USEORIGINRATIO_OFFSET UNITYSDK_OFFSET(0xA63F170)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialGuideSwipeConfigWrapper_TypeDefinitionIndex = 55683;

	class TutorialGuideSwipeConfigWrapper : public ::RPG::Client::TutorialGuideConfigWrapper
	{
	public:
		::System::Void _ctor(::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER__CTOR_OFFSET))(this, nodeIDList);
		}

		static ::RPG::Client::TutorialGuideSwipeConfigWrapper* CreateGuideSwipe(::RPG::GameCore::TutorialGuideHintType hintType, ::System::Collections::Generic::IList_1<::System::String*>* nodeIDList)
		{
			return ((::RPG::Client::TutorialGuideSwipeConfigWrapper*(*)(::RPG::GameCore::TutorialGuideHintType, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_CREATEGUIDESWIPE_OFFSET))(hintType, nodeIDList);
		}

		::System::Void SyncSwipeAreaTo(::UnityEngine::RectTransform* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER_SYNCSWIPEAREATO_OFFSET))(this, node);
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

		::System::Boolean __iFixBaseProxy_get__UseOriginRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALGUIDESWIPECONFIGWRAPPER___IFIXBASEPROXY_GET__USEORIGINRATIO_OFFSET))(this);
		}
	};
}
