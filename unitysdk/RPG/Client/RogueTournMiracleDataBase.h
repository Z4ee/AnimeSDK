#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_CDB239B5BA2266D7;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0x1C3372B0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C337220)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C337330)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1C3374A0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x1C337390)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0x1C3373F0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3373D0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3373B0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x1C337310)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x1C337370)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1C337350)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C337340)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1C3374B0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0x1C3373A0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3373E0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1C3373C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0x1C337320)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0x1C337380)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x1C337360)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C337260)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32AAB0)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C32AC80)
#define RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0x1C32A6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleDataBase_TypeDefinitionIndex = 67680;

	class RogueTournMiracleDataBase : public ::System::Object
	{
	public:
		::System::String* _MiracleIconPath_k__BackingField; // 0x10
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _DisplayRow_k__BackingField; // 0x18
		::System::String* _MiracleFigureIconPath_k__BackingField; // 0x20
		::Class_1_CDB239B5BA2266D7* _MiracleDesc; // 0x28
		::RPG::GameCore::RogueTournMode _TournMode_k__BackingField; // 0x30
		::RPG::Client::TextID _MiracleBGDesc_k__BackingField; // 0x38
		::System::UInt32 _MiracleID_k__BackingField; // 0x48
		::RPG::GameCore::RogueMiracleCategory _Category_k__BackingField; // 0x4C
		::RPG::Client::TextID _MiracleName_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__CTOR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean _InitFromExcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMEXCEL_OFFSET))(this);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::RogueMiracleCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMiracleCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_CATEGORY_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_TOURNMODE_OFFSET))(this);
		}

		::System::Void set_TournMode(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_TOURNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLENAME_OFFSET))(this);
		}

		::System::Void set_MiracleName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLENAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::Void set_MiracleBGDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEBGDESC_OFFSET))(this, a1);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::Void set_MiracleIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::System::Void set_MiracleFigureIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_MIRACLEFIGUREICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_MIRACLEDESC_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Void set_DisplayRow(::RPG::Client::IRogueMiracleLegacyDisplayRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueMiracleLegacyDisplayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEDATABASE_SET_DISPLAYROW_OFFSET))(this, a1);
		}
	};
}
