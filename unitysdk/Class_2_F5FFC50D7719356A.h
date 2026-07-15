#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_A73E0FAF46E3085E;
class Class_1_B87B48EBDCE76E87;
class Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F5FFC50D7719356A_GET_ALLOWMEMBERPLAY_OFFSET UNITYSDK_OFFSET(0x16F15A00)
#define CLASS_2_F5FFC50D7719356A_GET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x16F15960)
#define CLASS_2_F5FFC50D7719356A_GET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x16F15900)
#define CLASS_2_F5FFC50D7719356A_GET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x16F15A10)
#define CLASS_2_F5FFC50D7719356A_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x16F158F0)
#define CLASS_2_F5FFC50D7719356A_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x16F15920)
#define CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x16F15940)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDINVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x16F159E0)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDROTATION_OFFSET UNITYSDK_OFFSET(0x16F159D0)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x16F159B0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x16F18980)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x16F17950)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_6212B41AAE2779E5_OFFSET UNITYSDK_OFFSET(0x16F188B0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_63B9BBBA908A65B9_OFFSET UNITYSDK_OFFSET(0x16F17AF0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x16F17110)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET UNITYSDK_OFFSET(0x16F17570)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_8E47676A7A416868_OFFSET UNITYSDK_OFFSET(0x16F177E0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET UNITYSDK_OFFSET(0x16F16B80)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16F18240)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_B5BD32B0C4CFDB0D_OFFSET UNITYSDK_OFFSET(0x16F17E00)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET UNITYSDK_OFFSET(0x16F17450)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x16F15A60)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x16F18A60)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F18A10)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x16F17080)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x16F16930)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_EF1541348077F14A_OFFSET UNITYSDK_OFFSET(0x16F182E0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16F159F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x16F15A30)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x16F15980)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x16F16E90)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16F17A80)
#define CLASS_2_F5FFC50D7719356A_SET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x16F15970)
#define CLASS_2_F5FFC50D7719356A_SET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x16F15910)
#define CLASS_2_F5FFC50D7719356A_SET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x16F15A20)
#define CLASS_2_F5FFC50D7719356A_SET_STAGE_OFFSET UNITYSDK_OFFSET(0x16F15930)
#define CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x16F15950)
#define CLASS_2_F5FFC50D7719356A__CTOR_OFFSET UNITYSDK_OFFSET(0x16F15A70)

inline static constexpr unsigned int Class_2_F5FFC50D7719356A_TypeDefinitionIndex = 66215;

class Class_2_F5FFC50D7719356A : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* Field_2_1; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_2; // 0x88
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* _IntersectionInfo_k__BackingField; // 0x90
	::Class_1_A73E0FAF46E3085E* _TriggerHandler_k__BackingField; // 0x98
	::System::Collections::Generic::Dictionary_2<::Class_1_B87B48EBDCE76E87*, ::System::Int32>* Field_2_5; // 0xA0
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_6; // 0xA8
	::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>* _DropInfos_k__BackingField; // 0xB0
	::RPG::Client::Stage* _Stage_k__BackingField; // 0xB8
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_9; // 0xC0
	::Il2CppArray<::UnityEngine::Vector3>* _Slots_k__BackingField; // 0xC8
	::System::Single Field_2_11; // 0xD0
	::UnityEngine::Quaternion _WorldInverseRotation_k__BackingField; // 0xD4
	::UnityEngine::Quaternion _WorldRotation_k__BackingField; // 0xE4
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0xF4
	::System::Boolean _AllowMemberPlay_k__BackingField; // 0x100
	::System::Boolean _IsPlayerEntry_k__BackingField; // 0x101

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_Slots()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_SLOTS_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* get_IntersectionInfo()
	{
		return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_INTERSECTIONINFO_OFFSET))(this);
	}

	::System::Void set_IntersectionInfo(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_INTERSECTIONINFO_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* get_Stage()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_STAGE_OFFSET))(this);
	}

	::System::Void set_Stage(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_STAGE_OFFSET))(this, a1);
	}

	::Class_1_A73E0FAF46E3085E* get_TriggerHandler()
	{
		return ((::Class_1_A73E0FAF46E3085E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET))(this);
	}

	::System::Void set_TriggerHandler(::Class_1_A73E0FAF46E3085E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A73E0FAF46E3085E*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>* get_DropInfos()
	{
		return ((::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_DROPINFOS_OFFSET))(this);
	}

	::System::Void set_DropInfos(::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_DROPINFOS_OFFSET))(this, a1);
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

	::System::Void set_IsPlayerEntry(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_ISPLAYERENTRY_OFFSET))(this, a1);
	}

	::System::Single Method_2_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2022A7619B3D99E(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_718C533A69423C28(::Class_1_B87B48EBDCE76E87* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_8E47676A7A416868(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_8E47676A7A416868_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F0036ED5CF109B4(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Struct_2_085541A9CFF64383 Method_2_63B9BBBA908A65B9(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_63B9BBBA908A65B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B5BD32B0C4CFDB0D(::Class_1_B87B48EBDCE76E87* a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_B5BD32B0C4CFDB0D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::Class_1_B87B48EBDCE76E87* Method_2_EF1541348077F14A(::System::Single a1)
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_EF1541348077F14A_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_9C331001414329EA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6212B41AAE2779E5(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_6212B41AAE2779E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
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
};
