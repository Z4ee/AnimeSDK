#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_404BE164D83DEE56;
class Class_1_43BD383C98B4C0C5_243;
class Class_1_D501FC103C8A2714;
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffDetailViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffIconViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA8B620)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA8B990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_BUFFICONS_OFFSET UNITYSDK_OFFSET(0xCA8BDF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_CLICKBUFFCOMMAND_OFFSET UNITYSDK_OFFSET(0xCA8BDD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA8BE00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_REFRESHBUFFDATA_OFFSET UNITYSDK_OFFSET(0xCA8B9F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_CLICKBUFFCOMMAND_OFFSET UNITYSDK_OFFSET(0xCA8BDE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCA8BE10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8B790)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xCA8B850)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONBUFFCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0xCA8BD80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONCLICKBUFF_OFFSET UNITYSDK_OFFSET(0xCA8BCA0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayBuffPanelViewModel_TypeDefinitionIndex = 81371;

	class ChenLingFesGameplayBuffPanelViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _ClickBuffCommand_k__BackingField; // 0x20
		::Class_1_D501FC103C8A2714* _Messenger; // 0x28
		::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* _DetailViewModel_k__BackingField; // 0x30
		::Class_1_404BE164D83DEE56* _GameplayBridge; // 0x38
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*>* _BuffIcons_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel* Create(::Class_1_404BE164D83DEE56* a1, ::Class_1_D501FC103C8A2714* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel*(*)(::Class_1_404BE164D83DEE56*, ::Class_1_D501FC103C8A2714*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnClickBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONCLICKBUFF_OFFSET))(this);
		}

		::System::Void _OnBuffChangeMessage(::Class_1_43BD383C98B4C0C5_243* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_243*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONBUFFCHANGEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void RefreshBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_REFRESHBUFFDATA_OFFSET))(this);
		}

		::Sofa::Core::SimpleCommand* get_ClickBuffCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_CLICKBUFFCOMMAND_OFFSET))(this);
		}

		::System::Void set_ClickBuffCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_CLICKBUFFCOMMAND_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*>* get_BuffIcons()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_BUFFICONS_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* get_DetailViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_DetailViewModel(::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
