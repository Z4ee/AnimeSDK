#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_12BF61475A53914B_1;
class Class_1_4CF8088A158DCE25_62;
namespace RPG::GameCore { class MuseumMissionRow; }

#define RPG_CLIENT_MUSEUMTARGETMISSION_CREATE_OFFSET UNITYSDK_OFFSET(0x9DC7520)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DC8210)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9DC8290)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x9DC8270)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9DC8230)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DC8250)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DC8220)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9DC82A0)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x9DC8280)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ROW_OFFSET UNITYSDK_OFFSET(0x9DC8240)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DC8260)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0x9DC8140)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x9DC7DF0)
#define RPG_CLIENT_MUSEUMTARGETMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC82B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetMission_TypeDefinitionIndex = 53974;

	class MuseumTargetMission : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumMissionRow* _Row_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _Params_k__BackingField; // 0x18
		::RPG::GameCore::MuseumMissionType _Type_k__BackingField; // 0x20
		::System::Boolean _IsFinish_k__BackingField; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumMissionRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumMissionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MuseumMissionRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumMissionType get_Type()
		{
			return ((::RPG::GameCore::MuseumMissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::MuseumMissionType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_TYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_Params()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_PARAMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ISFINISH_OFFSET))(this, value);
		}

		static ::RPG::Client::MuseumTargetMission* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MuseumTargetMission*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_CREATE_OFFSET))(id);
		}

		::System::Void SyncData(::Class_1_4CF8088A158DCE25_62* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_62*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_OFFSET))(this, proto);
		}

		::System::Void SyncData_1(::Class_1_12BF61475A53914B_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12BF61475A53914B_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_1_OFFSET))(this, proto);
		}
	};
}
