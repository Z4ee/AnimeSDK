#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_43BD383C98B4C0C5_234;
class Class_1_50AC12A2F890597C;
class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffDetailViewModel; }
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffIconViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1CC5BA80)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_BUFFICONS_OFFSET UNITYSDK_OFFSET(0x1B71F970)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_CLICKBUFFCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B71F950)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_GET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B71F980)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_REFRESHBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B71F6D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_CLICKBUFFCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B71F960)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_SET_DETAILVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B71F990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71F9A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1CC5BB20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONBUFFCHANGEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B71F680)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONCLICKBUFF_OFFSET UNITYSDK_OFFSET(0x1CC5BC60)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayBuffPanelViewModel_TypeDefinitionIndex = 80042;

	class ChenLingFesGameplayBuffPanelViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*>* _BuffIcons_k__BackingField; // 0x20
		::Sofa::Core::SimpleCommand* _ClickBuffCommand_k__BackingField; // 0x28
		::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* _DetailViewModel_k__BackingField; // 0x30
		::Class_1_50AC12A2F890597C* _GameplayBridge; // 0x38
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel* Create(::Class_1_50AC12A2F890597C* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayBuffPanelViewModel*(*)(::Class_1_50AC12A2F890597C*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnClickBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONCLICKBUFF_OFFSET))(this);
		}

		::System::Void _OnBuffChangeMessage(::Class_1_43BD383C98B4C0C5_234* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_234*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYBUFFPANELVIEWMODEL__ONBUFFCHANGEMESSAGE_OFFSET))(this, a1);
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
