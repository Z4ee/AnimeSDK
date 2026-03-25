#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_838558A14E485175.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_B91D144796FC50A3;
class Class_1_D09F4FAB9C64FEFA;
class Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F5FFC50D7719356A_GET_ALLOWMEMBERPLAY_OFFSET UNITYSDK_OFFSET(0xCB4F300)
#define CLASS_2_F5FFC50D7719356A_GET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0xCB4F260)
#define CLASS_2_F5FFC50D7719356A_GET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0xCB4F200)
#define CLASS_2_F5FFC50D7719356A_GET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0xCB4F310)
#define CLASS_2_F5FFC50D7719356A_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xCB4F1F0)
#define CLASS_2_F5FFC50D7719356A_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xCB4F220)
#define CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0xCB4F240)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDINVERSEROTATION_OFFSET UNITYSDK_OFFSET(0xCB4F2E0)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDROTATION_OFFSET UNITYSDK_OFFSET(0xCB4F2D0)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0xCB4F2B0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_011527D8FB36A26F_OFFSET UNITYSDK_OFFSET(0xCB51600)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0xCB526F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xCB52910)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0xCB517C0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_63B9BBBA908A65B9_OFFSET UNITYSDK_OFFSET(0xCB51950)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_669256140B61F98F_OFFSET UNITYSDK_OFFSET(0xCB52790)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET UNITYSDK_OFFSET(0xCB51390)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_7EFCA0110EC7145F_OFFSET UNITYSDK_OFFSET(0xCB521F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET UNITYSDK_OFFSET(0xCB50A20)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xCB52150)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_B5BD32B0C4CFDB0D_OFFSET UNITYSDK_OFFSET(0xCB51CD0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xCB50FC0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET UNITYSDK_OFFSET(0xCB51250)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0xCB4F360)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xCB52850)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCB52800)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xCB50F30)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0xCB507D0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xCB4F2F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0xCB4F330)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0xCB4F280)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0xCB50D40)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xCB518E0)
#define CLASS_2_F5FFC50D7719356A_SET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0xCB4F270)
#define CLASS_2_F5FFC50D7719356A_SET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0xCB4F210)
#define CLASS_2_F5FFC50D7719356A_SET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0xCB4F320)
#define CLASS_2_F5FFC50D7719356A_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xCB4F230)
#define CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0xCB4F250)
#define CLASS_2_F5FFC50D7719356A__CTOR_OFFSET UNITYSDK_OFFSET(0xCB4F370)

inline static constexpr unsigned int Class_2_F5FFC50D7719356A_TypeDefinitionIndex = 56649;

class Class_2_F5FFC50D7719356A : public ::Class_1_838558A14E485175
{
public:
	// static const ::System::Single Field_2_16; // 0x0
	::RPG::Client::Stage* _Stage_k__BackingField; // 0x80
	::System::Collections::Generic::List_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_2_12; // 0x88
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_14; // 0x90
	::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA*>* _DropInfos_k__BackingField; // 0x98
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_2_10; // 0xA0
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* _IntersectionInfo_k__BackingField; // 0xA8
	::Il2CppArray<::UnityEngine::Vector3>* _Slots_k__BackingField; // 0xB0
	::Class_1_D09F4FAB9C64FEFA* _TriggerHandler_k__BackingField; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_11; // 0xC0
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_15; // 0xC8
	::UnityEngine::Quaternion _WorldRotation_k__BackingField; // 0xD0
	::System::Boolean _IsPlayerEntry_k__BackingField; // 0xE0
	::System::Boolean _AllowMemberPlay_k__BackingField; // 0xE1
	::System::Single Field_2_13; // 0xE4
	::UnityEngine::Quaternion _WorldInverseRotation_k__BackingField; // 0xE8
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0xF8

	::System::Void _ctor(::Class_1_B91D144796FC50A3* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B91D144796FC50A3*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_Slots()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_SLOTS_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* get_IntersectionInfo()
	{
		return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_INTERSECTIONINFO_OFFSET))(this);
	}

	::System::Void set_IntersectionInfo(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_INTERSECTIONINFO_OFFSET))(this, value);
	}

	::RPG::Client::Stage* get_Stage()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_STAGE_OFFSET))(this);
	}

	::System::Void set_Stage(::RPG::Client::Stage* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_STAGE_OFFSET))(this, value);
	}

	::Class_1_D09F4FAB9C64FEFA* get_TriggerHandler()
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET))(this);
	}

	::System::Void set_TriggerHandler(::Class_1_D09F4FAB9C64FEFA* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D09F4FAB9C64FEFA*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET))(this, value);
	}

	::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA*>* get_DropInfos()
	{
		return ((::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_DROPINFOS_OFFSET))(this);
	}

	::System::Void set_DropInfos(::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA*>*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_DROPINFOS_OFFSET))(this, value);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_WorldUp()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_WORLDUP_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_WorldRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_WORLDROTATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_WorldInverseRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_WORLDINVERSEROTATION_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_AllowMemberPlay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_ALLOWMEMBERPLAY_OFFSET))(this);
	}

	::System::Boolean get_IsPlayerEntry()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_ISPLAYERENTRY_OFFSET))(this);
	}

	::System::Void set_IsPlayerEntry(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_ISPLAYERENTRY_OFFSET))(this, value);
	}

	::System::Single Method_2_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_BE4EBC8FF4054312_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2022A7619B3D99E(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_718C533A69423C28(::Class_1_9AAC3BB4FD7CE6FE* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_011527D8FB36A26F(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_011527D8FB36A26F_OFFSET))(this, a1);
	}

	::System::Void Method_2_62D75ADFFEE4BD8B(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Struct_2_085541A9CFF64383 Method_2_63B9BBBA908A65B9(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_63B9BBBA908A65B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B5BD32B0C4CFDB0D(::Class_1_9AAC3BB4FD7CE6FE* a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_B5BD32B0C4CFDB0D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_1_9AAC3BB4FD7CE6FE* Method_2_7EFCA0110EC7145F(::System::Single a1)
	{
		return ((::Class_1_9AAC3BB4FD7CE6FE*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_7EFCA0110EC7145F_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_9C331001414329EA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Void Method_2_669256140B61F98F(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_669256140B61F98F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
