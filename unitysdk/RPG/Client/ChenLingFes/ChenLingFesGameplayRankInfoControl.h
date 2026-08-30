#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayRankInfoViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayRankItemControl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B7308E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B731560)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B730190)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B7300F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONRANKITEMSCHANGED_OFFSET UNITYSDK_OFFSET(0x1B731470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1B731260)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x1B730990)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayRankInfoControl_TypeDefinitionIndex = 79991;

	class ChenLingFesGameplayRankInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::Transform* _NodeEmpty; // 0x38
		::RPG::Client::PrefabLoadMeta* _ItemLoadMeta; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayRankItemControl*>* _ItemControls; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRankItemsChanged(::System::Object* a1, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__ONRANKITEMSCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL__REFRESHITEMS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayRankInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayRankInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYRANKINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}
	};
}
