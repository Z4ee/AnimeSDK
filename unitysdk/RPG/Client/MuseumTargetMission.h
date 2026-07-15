#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MuseumMissionType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_89;
class Class_1_A6623677AE360DE9;
namespace RPG::GameCore { class MuseumMissionRow; }

#define RPG_CLIENT_MUSEUMTARGETMISSION_CREATE_OFFSET UNITYSDK_OFFSET(0x190AEFC0)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ID_OFFSET UNITYSDK_OFFSET(0x190AFD30)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x190AFDB0)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x190AFD90)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_ROW_OFFSET UNITYSDK_OFFSET(0x190AFD50)
#define RPG_CLIENT_MUSEUMTARGETMISSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x190AFD70)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ID_OFFSET UNITYSDK_OFFSET(0x190AFD40)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x190AFDC0)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x190AFDA0)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_ROW_OFFSET UNITYSDK_OFFSET(0x190AFD60)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x190AFD80)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0x190AFC60)
#define RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x190AF8B0)
#define RPG_CLIENT_MUSEUMTARGETMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x190AFDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetMission_TypeDefinitionIndex = 63408;

	class MuseumTargetMission : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _Params_k__BackingField; // 0x10
		::RPG::GameCore::MuseumMissionRow* _Row_k__BackingField; // 0x18
		::System::Boolean _IsFinish_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::RPG::GameCore::MuseumMissionType _Type_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumMissionRow* get_Row()
		{
			return ((::RPG::GameCore::MuseumMissionRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::MuseumMissionRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumMissionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ROW_OFFSET))(this, a1);
		}

		::RPG::GameCore::MuseumMissionType get_Type()
		{
			return ((::RPG::GameCore::MuseumMissionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::MuseumMissionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumMissionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_TYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_Params()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_PARAMS_OFFSET))(this);
		}

		::System::Void set_Params(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_PARAMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SET_ISFINISH_OFFSET))(this, a1);
		}

		static ::RPG::Client::MuseumTargetMission* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MuseumTargetMission*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_CREATE_OFFSET))(a1);
		}

		::System::Void SyncData(::Class_1_21C7581DFE99F091_89* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_OFFSET))(this, a1);
		}

		::System::Void SyncData_1(::Class_1_A6623677AE360DE9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6623677AE360DE9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETMISSION_SYNCDATA_1_OFFSET))(this, a1);
		}
	};
}
