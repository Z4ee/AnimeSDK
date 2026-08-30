#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class AudioStateConfig; }
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace RPG::GameCore { class LevelBattleAreaInfo; }
namespace System { class String; }

#define CLASS_1_777F514A924455D9_GET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xC3E4830)
#define CLASS_1_777F514A924455D9_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E47A0)
#define CLASS_1_777F514A924455D9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E47C0)
#define CLASS_1_777F514A924455D9_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3E47E0)
#define CLASS_1_777F514A924455D9_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC3E4810)
#define CLASS_1_777F514A924455D9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xC3E4CA0)
#define CLASS_1_777F514A924455D9_METHOD_1_249C49102CB9825D_OFFSET UNITYSDK_OFFSET(0xC3E4AA0)
#define CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_1_OFFSET UNITYSDK_OFFSET(0xC3E4B90)
#define CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_2_OFFSET UNITYSDK_OFFSET(0xC3E4BF0)
#define CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_OFFSET UNITYSDK_OFFSET(0xC3E4B40)
#define CLASS_1_777F514A924455D9_METHOD_1_6D3D16E745D4D56A_1_OFFSET UNITYSDK_OFFSET(0xC3E4940)
#define CLASS_1_777F514A924455D9_METHOD_1_6D3D16E745D4D56A_OFFSET UNITYSDK_OFFSET(0xC3E4850)
#define CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xC3E48F0)
#define CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xC3E49E0)
#define CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_3_OFFSET UNITYSDK_OFFSET(0xC3E4A40)
#define CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xC3E48A0)
#define CLASS_1_777F514A924455D9_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xC3E4C50)
#define CLASS_1_777F514A924455D9_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xC3E4AF0)
#define CLASS_1_777F514A924455D9_METHOD_1_D02648B42B389F49_OFFSET UNITYSDK_OFFSET(0xC3E4990)
#define CLASS_1_777F514A924455D9_SET_BATTLEAREAINFO_OFFSET UNITYSDK_OFFSET(0xC3E4840)
#define CLASS_1_777F514A924455D9_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E47B0)
#define CLASS_1_777F514A924455D9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E47D0)
#define CLASS_1_777F514A924455D9_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3E4800)
#define CLASS_1_777F514A924455D9_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xC3E4820)
#define CLASS_1_777F514A924455D9__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E4D00)

inline static constexpr unsigned int Class_1_777F514A924455D9_TypeDefinitionIndex = 62162;

class Class_1_777F514A924455D9 : public ::System::Object
{
public:
	::RPG::GameCore::LevelBattleAreaInfo* _BattleAreaInfo_k__BackingField; // 0x10
	::System::UInt32 _GroupInstanceID_k__BackingField; // 0x18
	::System::UInt32 _InstanceID_k__BackingField; // 0x1C
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x20
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x30

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

	::Il2CppArray<::System::String*>* Method_1_6D3D16E745D4D56A()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_6D3D16E745D4D56A_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_1_OFFSET))(this);
	}

	::Il2CppArray<::System::String*>* Method_1_6D3D16E745D4D56A_1()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_6D3D16E745D4D56A_1_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::AudioStateConfig*>* Method_1_D02648B42B389F49()
	{
		return ((::Il2CppArray<::RPG::GameCore::AudioStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_D02648B42B389F49_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_2_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_88B60F3B95FAA4F1_3_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>* Method_1_249C49102CB9825D()
	{
		return ((::Il2CppArray<::RPG::GameCore::DistrictAudioRTPCConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_249C49102CB9825D_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655_1()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_1_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* Method_1_4D24AF6D3F0D4655_2()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_4D24AF6D3F0D4655_2_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_777F514A924455D9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
