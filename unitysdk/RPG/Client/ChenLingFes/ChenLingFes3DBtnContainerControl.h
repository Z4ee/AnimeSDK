#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::ChenLingFes { class ChenLingFes3DBtnContainerViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFes3DIncomePreviewControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB293F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0xCB28FD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB29FB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__GETORCREATEINCOMEPREVIEWCONTROL_OFFSET UNITYSDK_OFFSET(0xCB29DB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB291A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONDATAPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xCB296D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB29F40)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONINCOMEPREVIEWVISIBLECHANGED_OFFSET UNITYSDK_OFFSET(0xCB294A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xCB29160)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__RECYCLEALLACTIVEINCOMEPREVIEWCONTROLS_OFFSET UNITYSDK_OFFSET(0xCB29BE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__REFRESHINCOMEPREVIEWCONTROLS_OFFSET UNITYSDK_OFFSET(0xCB298A0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFes3DBtnContainerControl_TypeDefinitionIndex = 79969;

	class ChenLingFes3DBtnContainerControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Collections::Generic::Stack_1<::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewControl*>* _IncomePreviewControlPool; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewControl*>* _ActiveIncomePreviewControls; // 0x40
		::UnityEngine::GameObject* _IncomePreviewAsset; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDataPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONDATAPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnIncomePreviewVisibleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONINCOMEPREVIEWVISIBLECHANGED_OFFSET))(this);
		}

		::System::Void _RefreshIncomePreviewControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__REFRESHINCOMEPREVIEWCONTROLS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewControl* _GetOrCreateIncomePreviewControl()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFes3DIncomePreviewControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__GETORCREATEINCOMEPREVIEWCONTROL_OFFSET))(this);
		}

		::System::Void _RecycleAllActiveIncomePreviewControls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__RECYCLEALLACTIVEINCOMEPREVIEWCONTROLS_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL__ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFes3DBtnContainerViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFes3DBtnContainerViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFES3DBTNCONTAINERCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
