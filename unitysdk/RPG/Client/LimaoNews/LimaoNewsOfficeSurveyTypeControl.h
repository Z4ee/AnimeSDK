#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD9BBF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9BC70)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD9B9C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD9B840)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xBD9BD00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xBD9BCA0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyTypeControl_TypeDefinitionIndex = 73807;

	class LimaoNewsOfficeSurveyTypeControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _Node; // 0x38
		::UnityEngine::UI::Image* _Icon; // 0x40
		::UnityEngine::UI::Text* _Text; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* get__ViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
