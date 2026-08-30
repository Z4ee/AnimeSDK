#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFes3DIncomePreviewViewModel; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC4ADE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1CC48630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4BAD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC4AB40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC4B950)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC4AAA0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__REFRESHINCOME_OFFSET UNITYSDK_OFFSET(0x1CC4AE90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1CC4B740)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATEVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1CC4B530)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATEWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1CC4B010)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFes3DIncomePreviewControl_TypeDefinitionIndex = 79969;

	class ChenLingFes3DIncomePreviewControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::String* PrefabPath; // 0x0
		::UnityEngine::UI::Text* _TextNum; // 0x38
		::UnityEngine::Animation* _Animation; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _UpdateWorldPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATEWORLDPOSITION_OFFSET))(this);
		}

		::System::Void _UpdateVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATEVISIBILITY_OFFSET))(this);
		}

		::System::Void _UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__UPDATESTATE_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshIncome()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL__REFRESHINCOME_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DINCOMEPREVIEWCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
