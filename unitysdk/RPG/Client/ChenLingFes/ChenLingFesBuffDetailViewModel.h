#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_50AC12A2F890597C;
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffItemViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace Sofa::Core { template <typename T> class ObservableList_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1AFFCE70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_BUFFITEMS_OFFSET UNITYSDK_OFFSET(0x1AFFDDD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_CLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1AFFDDB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1AFFCBE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_REFRESHBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1AFFD160)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_SET_CLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0x1AFFDDC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1AFFD6D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__CONVERTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1AFFDA20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFFCFD0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1AFFD090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AFFD640)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffDetailViewModel_TypeDefinitionIndex = 76406;

	class ChenLingFesBuffDetailViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_50AC12A2F890597C* _GameplayBridge; // 0x20
		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffItemViewModel*>* _BuffItems_k__BackingField; // 0x28
		::Sofa::Core::SimpleCommand* _CloseCommand_k__BackingField; // 0x30
		::System::Boolean _IsShow; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel* Create(::Class_1_50AC12A2F890597C* a1)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffDetailViewModel*(*)(::Class_1_50AC12A2F890597C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__ONCLOSE_OFFSET))(this);
		}

		::System::Void RefreshBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_REFRESHBUFFDATA_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* _ConvertParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL__CONVERTPARAMLIST_OFFSET))(a1);
		}

		::Sofa::Core::SimpleCommand* get_CloseCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_CLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_CloseCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_SET_CLOSECOMMAND_OFFSET))(this, a1);
		}

		::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffItemViewModel*>* get_BuffItems()
		{
			return ((::Sofa::Core::ObservableList_1<::RPG::Client::ChenLingFes::ChenLingFesBuffItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_BUFFITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFDETAILVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}
	};
}
