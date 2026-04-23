#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA755B60)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xA755BD0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA755920)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA7557A0)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xA755C40)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xA755BE0)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyTypeControl_TypeDefinitionIndex = 68432;

	class LimaoNewsOfficeSurveyTypeControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _Node; // 0x30
		::UnityEngine::UI::Image* _Icon; // 0x38
		::UnityEngine::UI::Text* _Text; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* get__ViewModel()
		{
			return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSOFFICESURVEYTYPECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
