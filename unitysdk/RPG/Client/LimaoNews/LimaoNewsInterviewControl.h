#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MonoPrefabSwitcher; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD455980)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD454990)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD4548A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__SETUPDECO_OFFSET UNITYSDK_OFFSET(0xD4551D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsInterviewControl_TypeDefinitionIndex = 79062;

	class LimaoNewsInterviewControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::MonoPrefabSwitcher* _PrefabSwitcher; // 0x38
		::RPG::Client::AnimatorButton* _Btn; // 0x40
		::UnityEngine::UI::Image* _InterviewImage; // 0x48
		::UnityEngine::UI::Text* _InterviewTitle; // 0x50
		::UnityEngine::UI::Text* _InterviewIntro; // 0x58
		::RPG::Client::PrefabLoadMeta* _DecoPrefabLoad; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* _DecoPrefabs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _SetupDeco()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSINTERVIEWCONTROL__SETUPDECO_OFFSET))(this);
		}
	};
}
