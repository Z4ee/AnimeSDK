#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_43BD383C98B4C0C5_122;
class Class_1_C58399FF0AF9177E;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::UINavigation { class UINavigationArea; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace System { class Object; }
namespace UnityEngine { class CanvasGroup; }
template <typename T> class Class_1_D90286A3143EECEC;

#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE3CFCF0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE3D0600)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xE3D0440)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xE3D05A0)
#define RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___BINDING_B__5_2_OFFSET UNITYSDK_OFFSET(0xE3D0640)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int UINavigationFocusSampleControl_TypeDefinitionIndex = 73366;

	class UINavigationFocusSampleControl : public ::Sofa::BaseSofaControl_1<::Class_1_C58399FF0AF9177E*>
	{
	public:
		::RPG::UINavigation::UINavigationButton* _NavigationButton; // 0x58
		::RPG::UINavigation::UINavigationArea* _NavigationArea; // 0x60
		::UnityEngine::CanvasGroup* _CanvasGroup; // 0x68
		::RPG::Client::LocalizedText* _StatusText; // 0x70
		::RPG::Client::LocalizedText* _FocusCountText; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_C58399FF0AF9177E*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_C58399FF0AF9177E*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Boolean _OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONBACKPRESSED_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd(::System::Object* a1, ::Class_1_43BD383C98B4C0C5_122* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_43BD383C98B4C0C5_122*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL__ONENTRANCEANIMEND_OFFSET))(this, a1, a2);
		}

		::R3::Observable_1<::System::Single>* __Binding_b__5_2(::Class_1_C58399FF0AF9177E* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::Class_1_C58399FF0AF9177E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_UINAVIGATIONFOCUSSAMPLECONTROL___BINDING_B__5_2_OFFSET))(this, a1);
		}
	};
}
