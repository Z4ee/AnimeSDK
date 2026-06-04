#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_ICONCHECKPATH_OFFSET UNITYSDK_OFFSET(0xB0DF470)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB0DF450)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB0DF420)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB0DF400)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0DF230)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenOutfitTypeData_TypeDefinitionIndex = 70379;

	class ActivityHipplenOutfitTypeData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHipplenOutfitTypeRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::HipplenOutfitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::HipplenOutfitType get_Type()
		{
			return ((::RPG::GameCore::HipplenOutfitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconCheckPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENOUTFITTYPEDATA_GET_ICONCHECKPATH_OFFSET))(this);
		}
	};
}
