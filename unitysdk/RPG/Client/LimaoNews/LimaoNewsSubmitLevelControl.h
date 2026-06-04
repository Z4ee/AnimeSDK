#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::LimaoNews { class LimaoNewsSubmitLevelViewModel; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDAFAB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL_PLAYLEVELCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBD8CF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBDB0C00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDAFF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDAF4E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__PLAYFIRECHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBDAFE80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__PLAYLEVELCHANGEANIMATION_OFFSET UNITYSDK_OFFSET(0xBDB0820)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETNODELISTVIEW_1_OFFSET UNITYSDK_OFFSET(0xBDB05C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETNODELISTVIEW_OFFSET UNITYSDK_OFFSET(0xBDB07A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETUPREWARDLIMITVIEW_OFFSET UNITYSDK_OFFSET(0xBDAFC30)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBDB0370)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBDB0CA0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBDB0C40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsSubmitLevelControl_TypeDefinitionIndex = 73847;

	class LimaoNewsSubmitLevelControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Animation* _LevelChangeAnimation; // 0x38
		::UnityEngine::UI::Text* _TextLevel; // 0x40
		::UnityEngine::UI::Text* _TextPreLevel; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _NodesLevel; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _NodesLevelActive; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _NodesLevelUnActive; // 0x60
		::System::Single _FireFadeInCD; // 0x68
		::UnityEngine::UI::Text* _TextOfferingTips; // 0x70
		::UnityEngine::UI::Text* _TextOverFlowCount; // 0x78
		::UnityEngine::Transform* _NodeOverFlow; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void PlayLevelChangeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL_PLAYLEVELCHANGEANIMATION_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _PlayFireChangeAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__PLAYFIRECHANGEANIMATION_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupRewardLimitView(::RPG::Client::OfferingRewardData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETUPREWARDLIMITVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void _SetupView(::RPG::Client::OfferingRewardData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void _SetNodeListView(::RPG::Client::OfferingRewardData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OfferingRewardData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETNODELISTVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void _SetNodeListView_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__SETNODELISTVIEW_1_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayLevelChangeAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL__PLAYLEVELCHANGEANIMATION_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsSubmitLevelViewModel* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsSubmitLevelViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSSUBMITLEVELCONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
