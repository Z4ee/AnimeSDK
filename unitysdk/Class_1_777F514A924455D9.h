#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace System { class String; }

#define CLASS_1_777F514A924455D9_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0x982B050)
#define CLASS_1_777F514A924455D9_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x982AFC0)
#define CLASS_1_777F514A924455D9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x982AFE0)
#define CLASS_1_777F514A924455D9_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x982B000)
#define CLASS_1_777F514A924455D9_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x982B030)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_1_OFFSET UNITYSDK_OFFSET(0x982B1B0)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_2_OFFSET UNITYSDK_OFFSET(0x982B1D0)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_OFFSET UNITYSDK_OFFSET(0x982B190)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x982B0B0)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x982B110)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x982B130)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x982B090)
#define CLASS_1_777F514A924455D9_METHOD_1_5BDD9073B55BA3C3_OFFSET UNITYSDK_OFFSET(0x982B0F0)
#define CLASS_1_777F514A924455D9_METHOD_1_6C89BC60F0ADFA67_OFFSET UNITYSDK_OFFSET(0x982B150)
#define CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x982B1F0)
#define CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x982B170)
#define CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_1_OFFSET UNITYSDK_OFFSET(0x982B0D0)
#define CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_OFFSET UNITYSDK_OFFSET(0x982B070)
#define CLASS_1_777F514A924455D9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x982B210)
#define CLASS_1_777F514A924455D9_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0x982B060)
#define CLASS_1_777F514A924455D9_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x982AFD0)
#define CLASS_1_777F514A924455D9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x982AFF0)
#define CLASS_1_777F514A924455D9_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x982B020)
#define CLASS_1_777F514A924455D9_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x982B040)
#define CLASS_1_777F514A924455D9__CTOR_OFFSET UNITYSDK_OFFSET(0x982B230)

inline static constexpr unsigned int Class_1_777F514A924455D9_TypeDefinitionIndex = 57271;

class Class_1_777F514A924455D9 : public ::System::Object
{
public:
	::RPG::GameCore::LevelBattleAreaInfo* _BattleAreaInfo_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x18
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x1C
	::System::UInt32 _GroupInstanceID_k__BackingField; // 0x2C
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x30

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::GameCore::LevelBattleAreaInfo* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 get_GroupInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_GROUPINSTANCEID_OFFSET))(this);
	}

	::System::Void set_GroupInstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_GROUPINSTANCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_INSTANCEID_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_POSITION_OFFSET))(this, value);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_ROTATION_OFFSET))(this, value);
	}

	::RPG::GameCore::LevelBattleAreaInfo* get_BattleAreaInfo()
	{
		return ((::RPG::GameCore::LevelBattleAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_BATTLEAREAINFO_OFFSET))(this);
	}

	::System::Void set_BattleAreaInfo(::RPG::GameCore::LevelBattleAreaInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_BATTLEAREAINFO_OFFSET))(this, value);
	}

	::Il2CppArray<::System::String*>* Method_1_E9F96114DE456040()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_E9F96114DE456040_1()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_1_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_1_5BDD9073B55BA3C3()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_5BDD9073B55BA3C3_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_2_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_3_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* Method_1_6C89BC60F0ADFA67()
	{
		return ((::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_6C89BC60F0ADFA67_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F_1()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_1_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_1088DB2C3685103F_2()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}
};
