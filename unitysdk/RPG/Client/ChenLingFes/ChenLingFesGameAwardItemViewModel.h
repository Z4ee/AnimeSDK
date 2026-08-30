#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesAwardTypeEnum.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::GameCore { class ChenLingFesAwardTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CC52EE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC53030)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_STATESTR_OFFSET UNITYSDK_OFFSET(0x1CC53080)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_SET_STATESTR_OFFSET UNITYSDK_OFFSET(0x1CC53090)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC52940)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameAwardItemViewModel_TypeDefinitionIndex = 80069;

	class ChenLingFesGameAwardItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::GameCore::ChenLingFesAwardTypeRow* _Row; // 0x20
		::System::String* _StateStr_k__BackingField; // 0x28
		::System::Int32 Count; // 0x30

		::System::Void _ctor(::RPG::GameCore::ChenLingFesAwardTypeEnum a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesAwardTypeEnum, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_DESC_OFFSET))(this);
		}

		::System::String* get_StateStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_GET_STATESTR_OFFSET))(this);
		}

		::System::Void set_StateStr(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEAWARDITEMVIEWMODEL_SET_STATESTR_OFFSET))(this, a1);
		}
	};
}
