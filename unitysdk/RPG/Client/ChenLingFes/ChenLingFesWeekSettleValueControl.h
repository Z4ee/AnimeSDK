#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesWeekSettleValueViewModel; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB630270)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xB6302F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB62FFC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB62FDE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB630380)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB630320)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesWeekSettleValueControl_TypeDefinitionIndex = 74007;

	class ChenLingFesWeekSettleValueControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::RPG::Client::UIStateCtrl* _StateCtrl; // 0x38
		::UnityEngine::UI::Text* _TextStar; // 0x40
		::UnityEngine::UI::Text* _TextScore; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesWeekSettleValueViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesWeekSettleValueViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL___IFIXBASEPROXY__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESWEEKSETTLEVALUECONTROL___IFIXBASEPROXY__ONBINDVIEWMODEL_OFFSET))(this);
		}
	};
}
