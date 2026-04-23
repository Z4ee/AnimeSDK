#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_2CC11CDCB897D481_2;
class Class_1_F63851AF12025ED2;
namespace RPG::Client { class IRogueMiracleLegacyDisplayRow; }
namespace RPG::Client { class IRogueMiracleRowWrap; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB06EFB0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB06E950)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB06E8D0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB06E840)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB06EE60)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB06E9D0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET UNITYSDK_OFFSET(0xB06F530)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET UNITYSDK_OFFSET(0xB06F760)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0xB06F6B0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET UNITYSDK_OFFSET(0xB06F600)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xB06F440)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET UNITYSDK_OFFSET(0xB06F460)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB06F970)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xB06F950)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB06F2E0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET UNITYSDK_OFFSET(0xB06F350)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0xB06EA50)
#define RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0xB06EB20)
#define RPG_CLIENT_ROGUEMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xB06F100)
#define RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET UNITYSDK_OFFSET(0xB06E7E0)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET UNITYSDK_OFFSET(0xB06F090)
#define RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xB06F020)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET UNITYSDK_OFFSET(0xB06F450)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xB06F980)
#define RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xB06F960)
#define RPG_CLIENT_ROGUEMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB06EEA0)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET UNITYSDK_OFFSET(0xB06F160)
#define RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB06E8C0)
#define RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0xB06EC10)
#define RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB06F990)
#define RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB06F9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleData_TypeDefinitionIndex = 61976;

	class RogueMiracleData : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracleRowWrap* _Row; // 0x10
		::RPG::Client::IRogueMiracleLegacyDisplayRow* _LegacyDisplayRowWrap; // 0x18
		::System::UInt32 _UseCount_k__BackingField; // 0x20
		::System::UInt32 _TotalCount_k__BackingField; // 0x24
		::System::UInt32 _MiracleID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 miracleID, ::System::UInt32 useCount, ::System::UInt32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CTOR_OFFSET))(this, miracleID, useCount, totalCount);
		}

		static ::System::Boolean IsMiracleExists(::System::UInt32 miracleID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_ISMIRACLEEXISTS_OFFSET))(miracleID);
		}

		static ::RPG::Client::RogueMiracleData* Create(::Class_1_F63851AF12025ED2* proto)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_F63851AF12025ED2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMiracleData* Create_1(::Class_1_2CC11CDCB897D481_2* proto)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATE_1_OFFSET))(proto);
		}

		static ::RPG::Client::RogueMiracleData* CreateDisplayData(::System::UInt32 miracleID, ::System::Boolean isBroken)
		{
			return ((::RPG::Client::RogueMiracleData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CREATEDISPLAYDATA_OFFSET))(miracleID, isBroken);
		}

		::RPG::Client::IRogueMiracleLegacyDisplayRow* get_DisplayRow()
		{
			return ((::RPG::Client::IRogueMiracleLegacyDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Void Refresh(::Class_1_F63851AF12025ED2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F63851AF12025ED2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_OFFSET))(this, proto);
		}

		::System::Void Refresh_1(::Class_1_2CC11CDCB897D481_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CC11CDCB897D481_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_REFRESH_1_OFFSET))(this, proto);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::Void _Refresh(::System::UInt32 miracleID, ::System::UInt32 useCount, ::System::UInt32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__REFRESH_OFFSET))(this, miracleID, useCount, totalCount);
		}

		static ::RPG::Client::IRogueMiracleRowWrap* _CreateRowWrap(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::IRogueMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA__CREATEROWWRAP_OFFSET))(miracleID);
		}

		::System::UInt32 get_MiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEID_OFFSET))(this);
		}

		::System::Void set_MiracleID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_MIRACLEID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MiracleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLENAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_MiracleBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEBGDESC_OFFSET))(this);
		}

		::System::String* get_MiracleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_MiracleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_MIRACLEDESC_OFFSET))(this);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get__MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEDISPLAYID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleDisplayRow* get__DisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__DISPLAYROW_OFFSET))(this);
		}

		::System::UInt32 get__MiracleEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__MIRACLEEFFECTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleEffectRow* get__EffectDisplayRow()
		{
			return ((::RPG::GameCore::RogueMiracleEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA_GET__EFFECTDISPLAYROW_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLEDATA___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
