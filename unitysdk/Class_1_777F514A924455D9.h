#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace System { class String; }

#define CLASS_1_777F514A924455D9_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xAF8CE10)
#define CLASS_1_777F514A924455D9_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xAF8CD80)
#define CLASS_1_777F514A924455D9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xAF8CDA0)
#define CLASS_1_777F514A924455D9_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xAF8CDC0)
#define CLASS_1_777F514A924455D9_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xAF8CDF0)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_1_OFFSET UNITYSDK_OFFSET(0xAF8CF70)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_2_OFFSET UNITYSDK_OFFSET(0xAF8CF90)
#define CLASS_1_777F514A924455D9_METHOD_1_1088DB2C3685103F_OFFSET UNITYSDK_OFFSET(0xAF8CF50)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xAF8CE70)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0xAF8CED0)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0xAF8CEF0)
#define CLASS_1_777F514A924455D9_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAF8CE50)
#define CLASS_1_777F514A924455D9_METHOD_1_5BDD9073B55BA3C3_OFFSET UNITYSDK_OFFSET(0xAF8CEB0)
#define CLASS_1_777F514A924455D9_METHOD_1_6C89BC60F0ADFA67_OFFSET UNITYSDK_OFFSET(0xAF8CF10)
#define CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xAF8CFB0)
#define CLASS_1_777F514A924455D9_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xAF8CF30)
#define CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_1_OFFSET UNITYSDK_OFFSET(0xAF8CE90)
#define CLASS_1_777F514A924455D9_METHOD_1_E9F96114DE456040_OFFSET UNITYSDK_OFFSET(0xAF8CE30)
#define CLASS_1_777F514A924455D9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xAF8CFD0)
#define CLASS_1_777F514A924455D9_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xAF8CE20)
#define CLASS_1_777F514A924455D9_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xAF8CD90)
#define CLASS_1_777F514A924455D9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xAF8CDB0)
#define CLASS_1_777F514A924455D9_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xAF8CDE0)
#define CLASS_1_777F514A924455D9_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xAF8CE00)
#define CLASS_1_777F514A924455D9__CTOR_OFFSET UNITYSDK_OFFSET(0xAF8CFF0)

inline static constexpr unsigned int Class_1_777F514A924455D9_TypeDefinitionIndex = 58061;

class Class_1_777F514A924455D9 : public ::System::Object
{
public:
	::RPG::GameCore::LevelBattleAreaInfo* _BattleAreaInfo_k__BackingField; // 0x10
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x24
	::System::UInt32 _GroupInstanceID_k__BackingField; // 0x34
	::System::UInt32 _InstanceID_k__BackingField; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::RPG::GameCore::LevelBattleAreaInfo* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 get_GroupInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_GROUPINSTANCEID_OFFSET))(this);
	}

	::System::Void set_GroupInstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_GROUPINSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_POSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_ROTATION_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelBattleAreaInfo* get_BattleAreaInfo()
	{
		return ((::RPG::GameCore::LevelBattleAreaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_GET_BATTLEAREAINFO_OFFSET))(this);
	}

	::System::Void set_BattleAreaInfo(::RPG::GameCore::LevelBattleAreaInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleAreaInfo*))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_SET_BATTLEAREAINFO_OFFSET))(this, a1);
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
