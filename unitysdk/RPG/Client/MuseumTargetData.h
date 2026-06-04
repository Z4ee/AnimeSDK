#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_4;
class Class_1_A6623677AE360DE9;
class Class_1_D17272E82AE804C2_659;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumTarget; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET UNITYSDK_OFFSET(0xC21C0F0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET UNITYSDK_OFFSET(0xC21C0D0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0xC21C0B0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xC21C0A0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET UNITYSDK_OFFSET(0xC21C0E0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0xC21C0C0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0xC2167C0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET UNITYSDK_OFFSET(0xC216930)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xC20AA00)
#define RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC209470)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetData_TypeDefinitionIndex = 62041;

	class MuseumTargetData : public ::System::Object
	{
	public:
		// static const ::System::String* _MuseumTargetCheckTurnKey; // 0x0
		::RPG::Client::MuseumTarget* _CurTarget_k__BackingField; // 0x10
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x18
		::System::Boolean _HaveTarget_k__BackingField; // 0x20
		::System::UInt32 _CheckTurn_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_HaveTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET))(this);
		}

		::System::Void set_HaveTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTarget* get_CurTarget()
		{
			return ((::RPG::Client::MuseumTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET))(this);
		}

		::System::Void set_CurTarget(::RPG::Client::MuseumTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_CheckTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_070964BB68D18B9F_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET))(this, a1);
		}

		::System::Void SyncData_1(::Class_1_D17272E82AE804C2_659* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_659*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET))(this, a1);
		}

		::System::Void SyncData_2(::Class_1_A6623677AE360DE9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET))(this, a1);
		}
	};
}
