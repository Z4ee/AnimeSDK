#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_9AAC3BB4FD7CE6FE;
class Class_1_D09F4FAB9C64FEFA;
class Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F5FFC50D7719356A_GET_ALLOWMEMBERPLAY_OFFSET UNITYSDK_OFFSET(0x144FD490)
#define CLASS_2_F5FFC50D7719356A_GET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x144FD3F0)
#define CLASS_2_F5FFC50D7719356A_GET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x144FD390)
#define CLASS_2_F5FFC50D7719356A_GET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x144FD4A0)
#define CLASS_2_F5FFC50D7719356A_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x144FD380)
#define CLASS_2_F5FFC50D7719356A_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x144FD3B0)
#define CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x144FD3D0)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDINVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x144FD470)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDROTATION_OFFSET UNITYSDK_OFFSET(0x144FD460)
#define CLASS_2_F5FFC50D7719356A_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x144FD440)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x145006B0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x144FF530)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_63B9BBBA908A65B9_OFFSET UNITYSDK_OFFSET(0x144FF6D0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x144FED20)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_669256140B61F98F_OFFSET UNITYSDK_OFFSET(0x14500530)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET UNITYSDK_OFFSET(0x144FF110)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_83ABEDAA83837786_OFFSET UNITYSDK_OFFSET(0x144FF380)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET UNITYSDK_OFFSET(0x144FE790)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x144FFE20)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_B5BD32B0C4CFDB0D_OFFSET UNITYSDK_OFFSET(0x144FF9E0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET UNITYSDK_OFFSET(0x144FEFF0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x144FD4F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x145005F0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x145005A0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x144FEC90)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x144FE540)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x14500480)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_EF1541348077F14A_OFFSET UNITYSDK_OFFSET(0x144FFEC0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x144FD480)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x144FD4C0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x144FD410)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x144FEAA0)
#define CLASS_2_F5FFC50D7719356A_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x144FF660)
#define CLASS_2_F5FFC50D7719356A_SET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x144FD400)
#define CLASS_2_F5FFC50D7719356A_SET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x144FD3A0)
#define CLASS_2_F5FFC50D7719356A_SET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x144FD4B0)
#define CLASS_2_F5FFC50D7719356A_SET_STAGE_OFFSET UNITYSDK_OFFSET(0x144FD3C0)
#define CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x144FD3E0)
#define CLASS_2_F5FFC50D7719356A__CTOR_OFFSET UNITYSDK_OFFSET(0x144FD500)

inline static constexpr unsigned int Class_2_F5FFC50D7719356A_TypeDefinitionIndex = 64814;

class Class_2_F5FFC50D7719356A : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	// static const ::System::Single Field_2_0; // 0x0
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_1; // 0x80
	::Class_1_D09F4FAB9C64FEFA* _TriggerHandler_k__BackingField; // 0x88
	::System::Collections::Generic::Dictionary_2<::Class_1_9AAC3BB4FD7CE6FE*, ::System::Int32>* Field_2_3; // 0x90
	::Il2CppArray<::Class_2_F5FFC50D7719356A_Class_1_D0C621D710A7915D*>* _DropInfos_k__BackingField; // 0x98
	::Il2CppArray<::UnityEngine::Vector3>* _Slots_k__BackingField; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_9AAC3BB4FD7CE6FE*>* Field_2_6; // 0xA8
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* _IntersectionInfo_k__BackingField; // 0xB0
	::RPG::Client::Stage* _Stage_k__BackingField; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_9; // 0xC0
	::Il2CppArray<::Struct_2_085541A9CFF64383>* Field_2_10; // 0xC8
	::System::Boolean _IsPlayerEntry_k__BackingField; // 0xD0
	::System::Boolean _AllowMemberPlay_k__BackingField; // 0xD1
	::UnityEngine::Quaternion _WorldRotation_k__BackingField; // 0xD4
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0xE4
	::UnityEngine::Quaternion _WorldInverseRotation_k__BackingField; // 0xF0
	::System::Single Field_2_16; // 0x100

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

	::Class_1_D09F4FAB9C64FEFA* get_TriggerHandler()
	{
		return ((::Class_1_D09F4FAB9C64FEFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_GET_TRIGGERHANDLER_OFFSET))(this);
	}

	::System::Void set_TriggerHandler(::Class_1_D09F4FAB9C64FEFA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D09F4FAB9C64FEFA*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_SET_TRIGGERHANDLER_OFFSET))(this, a1);
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

	::UnityEngine::Vector3 Method_2_C2022A7619B3D99E(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_C2022A7619B3D99E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_718C533A69423C28(::Class_1_9AAC3BB4FD7CE6FE* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_718C533A69423C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_83ABEDAA83837786(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_83ABEDAA83837786_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F0036ED5CF109B4(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_5F0036ED5CF109B4_OFFSET))(this, a1);
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

	::Class_1_9AAC3BB4FD7CE6FE* Method_2_EF1541348077F14A(::System::Single a1)
	{
		return ((::Class_1_9AAC3BB4FD7CE6FE*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_EF1541348077F14A_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_9C331001414329EA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_9C331001414329EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E146CE61ABF70C1C(::Class_1_9AAC3BB4FD7CE6FE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9AAC3BB4FD7CE6FE*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_METHOD_2_E146CE61ABF70C1C_OFFSET))(this, a1);
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
