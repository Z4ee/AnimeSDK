#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_53763D498DB8321D_5;
class Class_1_D17272E82AE804C2_646;
class Class_1_FB4A4ADDA7338C08_3;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumTarget; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET UNITYSDK_OFFSET(0xAB0F7E0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET UNITYSDK_OFFSET(0xAB0F7C0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0xAB0F7A0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0xAB0F790)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET UNITYSDK_OFFSET(0xAB0F7D0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0xAB0F7B0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0xAB0F930)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET UNITYSDK_OFFSET(0xAB0F9B0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xAB0F890)
#define RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAB0F7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetData_TypeDefinitionIndex = 61117;

	class MuseumTargetData : public ::System::Object
	{
	public:
		// static const ::System::String* _MuseumTargetCheckTurnKey; // 0x0
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x10
		::RPG::Client::MuseumTarget* _CurTarget_k__BackingField; // 0x18
		::System::Boolean _HaveTarget_k__BackingField; // 0x20
		::System::UInt32 _CheckTurn_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::MuseumData* ownerMuseum)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA__CTOR_OFFSET))(this, ownerMuseum);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_HaveTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET))(this);
		}

		::System::Void set_HaveTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET))(this, value);
		}

		::RPG::Client::MuseumTarget* get_CurTarget()
		{
			return ((::RPG::Client::MuseumTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET))(this);
		}

		::System::Void set_CurTarget(::RPG::Client::MuseumTarget* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET))(this, value);
		}

		::System::UInt32 get_CheckTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_53763D498DB8321D_5* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_53763D498DB8321D_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET))(this, proto);
		}

		::System::Void SyncData_1(::Class_1_D17272E82AE804C2_646* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_646*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET))(this, proto);
		}

		::System::Void SyncData_2(::Class_1_FB4A4ADDA7338C08_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB4A4ADDA7338C08_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET))(this, proto);
		}
	};
}
