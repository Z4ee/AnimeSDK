#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_50AC12A2F890597C;
class Class_1_5F4D64A4B97E38F9;
class Class_1_83665B095F1535B5_29;
namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressViewModel; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A4AF4C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_GET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x1A4AF3F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_GET_PROGRESSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A4AF8C0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_SET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x1A4AF830)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_SET_PROGRESSVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A4AF8D0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4AF580)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1A4AF5A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__ONFEVERSWITCH_OFFSET UNITYSDK_OFFSET(0x1A4AF660)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayFeverViewModel_TypeDefinitionIndex = 76411;

	class ChenLingFesGameplayFeverViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x20
		::Class_1_50AC12A2F890597C* _GameplayBridge; // 0x28
		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* _ProgressViewModel_k__BackingField; // 0x30
		::System::Boolean _IsFeverActive; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel* Create(::Class_1_50AC12A2F890597C* a1, ::Class_1_5F4D64A4B97E38F9* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayFeverViewModel*(*)(::Class_1_50AC12A2F890597C*, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnFeverSwitch(::Class_1_83665B095F1535B5_29* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL__ONFEVERSWITCH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFeverActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_GET_ISFEVERACTIVE_OFFSET))(this);
		}

		::System::Void set_IsFeverActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_SET_ISFEVERACTIVE_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* get_ProgressViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_GET_PROGRESSVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_ProgressViewModel(::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYFEVERVIEWMODEL_SET_PROGRESSVIEWMODEL_OFFSET))(this, a1);
		}
	};
}
