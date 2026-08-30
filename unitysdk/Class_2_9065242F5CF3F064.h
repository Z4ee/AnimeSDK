#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BC1F0DE405AE0D4.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_483ED67B5E0A21FB;
class Class_1_4F54BF4C6B55D9A9;
class Class_1_B87B48EBDCE76E87;
class Class_1_E7D4F1B8FC35E82D;
class Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackGroupCollectionConfig; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_9065242F5CF3F064_GET_ALLOWMEMBERPLAY_OFFSET UNITYSDK_OFFSET(0x178570E0)
#define CLASS_2_9065242F5CF3F064_GET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x17857040)
#define CLASS_2_9065242F5CF3F064_GET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x17856FE0)
#define CLASS_2_9065242F5CF3F064_GET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x178570F0)
#define CLASS_2_9065242F5CF3F064_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x17856FD0)
#define CLASS_2_9065242F5CF3F064_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x17857000)
#define CLASS_2_9065242F5CF3F064_GET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x17857020)
#define CLASS_2_9065242F5CF3F064_GET_WORLDINVERSEROTATION_OFFSET UNITYSDK_OFFSET(0x178570C0)
#define CLASS_2_9065242F5CF3F064_GET_WORLDROTATION_OFFSET UNITYSDK_OFFSET(0x178570B0)
#define CLASS_2_9065242F5CF3F064_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0x17857090)
#define CLASS_2_9065242F5CF3F064_METHOD_2_054B8F7AF60506D5_OFFSET UNITYSDK_OFFSET(0x1785B350)
#define CLASS_2_9065242F5CF3F064_METHOD_2_0BCFDDA89BDEFC91_OFFSET UNITYSDK_OFFSET(0x1785BB70)
#define CLASS_2_9065242F5CF3F064_METHOD_2_2C3F2DB2A4AACF8D_OFFSET UNITYSDK_OFFSET(0x1785B000)
#define CLASS_2_9065242F5CF3F064_METHOD_2_2F64259250993203_OFFSET UNITYSDK_OFFSET(0x1785A630)
#define CLASS_2_9065242F5CF3F064_METHOD_2_32EAD77529B340A8_OFFSET UNITYSDK_OFFSET(0x17859C70)
#define CLASS_2_9065242F5CF3F064_METHOD_2_38F1172394594711_OFFSET UNITYSDK_OFFSET(0x1785BF60)
#define CLASS_2_9065242F5CF3F064_METHOD_2_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x17859190)
#define CLASS_2_9065242F5CF3F064_METHOD_2_4A7A3E7B070218A0_OFFSET UNITYSDK_OFFSET(0x1785B4F0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x17859BC0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x178592D0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_6046D908E8281AF6_OFFSET UNITYSDK_OFFSET(0x1785ADD0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_63B9BBBA908A65B9_OFFSET UNITYSDK_OFFSET(0x17859470)
#define CLASS_2_9065242F5CF3F064_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x17858990)
#define CLASS_2_9065242F5CF3F064_METHOD_2_69232C0FA13F1FBA_OFFSET UNITYSDK_OFFSET(0x1785C1A0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_718C533A69423C28_OFFSET UNITYSDK_OFFSET(0x17858F20)
#define CLASS_2_9065242F5CF3F064_METHOD_2_7DEB5A46E3246246_OFFSET UNITYSDK_OFFSET(0x17859DA0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1785A5A0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_9C331001414329EA_OFFSET UNITYSDK_OFFSET(0x17858400)
#define CLASS_2_9065242F5CF3F064_METHOD_2_9D16F90644F98754_OFFSET UNITYSDK_OFFSET(0x1785C0E0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_9D44CA0820FE38B7_OFFSET UNITYSDK_OFFSET(0x1785C470)
#define CLASS_2_9065242F5CF3F064_METHOD_2_A00EAD174EF85E42_OFFSET UNITYSDK_OFFSET(0x1785B9A0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_B5BD32B0C4CFDB0D_OFFSET UNITYSDK_OFFSET(0x17859780)
#define CLASS_2_9065242F5CF3F064_METHOD_2_C2022A7619B3D99E_OFFSET UNITYSDK_OFFSET(0x17858E00)
#define CLASS_2_9065242F5CF3F064_METHOD_2_C3C9BF311C318908_OFFSET UNITYSDK_OFFSET(0x17857140)
#define CLASS_2_9065242F5CF3F064_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x1785C610)
#define CLASS_2_9065242F5CF3F064_METHOD_2_C82201EC8526688C_OFFSET UNITYSDK_OFFSET(0x1785BA00)
#define CLASS_2_9065242F5CF3F064_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1785C5C0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x17858900)
#define CLASS_2_9065242F5CF3F064_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0x178581B0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_E146CE61ABF70C1C_OFFSET UNITYSDK_OFFSET(0x1785C3C0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_E9EDCA6940F85BC7_OFFSET UNITYSDK_OFFSET(0x1785BE90)
#define CLASS_2_9065242F5CF3F064_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x178570D0)
#define CLASS_2_9065242F5CF3F064_METHOD_2_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x17857110)
#define CLASS_2_9065242F5CF3F064_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x17857060)
#define CLASS_2_9065242F5CF3F064_METHOD_2_FC83C4F2B5E11F96_OFFSET UNITYSDK_OFFSET(0x1785BD60)
#define CLASS_2_9065242F5CF3F064_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x17858710)
#define CLASS_2_9065242F5CF3F064_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x17859400)
#define CLASS_2_9065242F5CF3F064_SET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0x17857050)
#define CLASS_2_9065242F5CF3F064_SET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0x17856FF0)
#define CLASS_2_9065242F5CF3F064_SET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0x17857100)
#define CLASS_2_9065242F5CF3F064_SET_STAGE_OFFSET UNITYSDK_OFFSET(0x17857010)
#define CLASS_2_9065242F5CF3F064_SET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0x17857030)
#define CLASS_2_9065242F5CF3F064__CTOR_OFFSET UNITYSDK_OFFSET(0x17857150)

inline static constexpr unsigned int Class_2_9065242F5CF3F064_TypeDefinitionIndex = 69275;

class Class_2_9065242F5CF3F064 : public ::Class_1_2BC1F0DE405AE0D4
{
public:
	// static const ::System::Single CNAHIJPJIEI; // 0x0
	// static const ::System::Single JEPNLDLBCNN; // 0x0
	// static const ::System::Single HOAKNDHKAOI; // 0x0
	// static const ::System::Single GBOIMCNKLAI; // 0x0
	::RPG::Client::Stage* _Stage_k__BackingField; // 0x80
	::System::Collections::Generic::List_1<::Class_1_B87B48EBDCE76E87*>* FHPFKPGCCBA; // 0x88
	::Class_1_4F54BF4C6B55D9A9* _TriggerHandler_k__BackingField; // 0x90
	::Il2CppArray<::Struct_2_085541A9CFF64383>* KFAMJKJOIDF; // 0x98
	::System::Collections::Generic::List_1<::System::Int32>* AFHHGOBEBFN; // 0xA0
	::Il2CppArray<::Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D*>* _DropInfos_k__BackingField; // 0xA8
	::Il2CppArray<::UnityEngine::Plane>* NLGMHFDMCIE; // 0xB0
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* _IntersectionInfo_k__BackingField; // 0xB8
	::System::Collections::Generic::Dictionary_2<::Class_1_B87B48EBDCE76E87*, ::System::Int32>* HDOCPOKEFLM; // 0xC0
	::Il2CppArray<::UnityEngine::Vector3>* _Slots_k__BackingField; // 0xC8
	::System::Collections::Generic::List_1<::System::Int32>* PIIKENFNAKA; // 0xD0
	::System::Collections::Generic::List_1<::Class_1_E7D4F1B8FC35E82D*>* GFGBFKPKDDL; // 0xD8
	::System::Collections::Generic::Dictionary_2<::Class_1_E7D4F1B8FC35E82D*, ::System::Int32>* JBLPBAHALAD; // 0xE0
	::Il2CppArray<::Struct_2_085541A9CFF64383>* LBNAKGHEAOP; // 0xE8
	::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig* NLLCKGHLHBP; // 0xF0
	::UnityEngine::Quaternion _WorldRotation_k__BackingField; // 0xF8
	::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0x108
	::System::Boolean _IsPlayerEntry_k__BackingField; // 0x114
	::System::Boolean _AllowMemberPlay_k__BackingField; // 0x115
	::System::Single HALDDNCJIIK; // 0x118
	::UnityEngine::Vector3 EAOEILGMPPD; // 0x11C
	::UnityEngine::Vector3 IMPMLMGENKL; // 0x128
	::UnityEngine::Quaternion _WorldInverseRotation_k__BackingField; // 0x134

	::System::Void _ctor(::Class_1_483ED67B5E0A21FB* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_483ED67B5E0A21FB*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Il2CppArray<::UnityEngine::Vector3>* get_Slots()
	{
		return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_SLOTS_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* get_IntersectionInfo()
	{
		return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_INTERSECTIONINFO_OFFSET))(this);
	}

	::System::Void set_IntersectionInfo(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_SET_INTERSECTIONINFO_OFFSET))(this, a1);
	}

	::RPG::Client::Stage* get_Stage()
	{
		return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_STAGE_OFFSET))(this);
	}

	::System::Void set_Stage(::RPG::Client::Stage* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_SET_STAGE_OFFSET))(this, a1);
	}

	::Class_1_4F54BF4C6B55D9A9* get_TriggerHandler()
	{
		return ((::Class_1_4F54BF4C6B55D9A9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_TRIGGERHANDLER_OFFSET))(this);
	}

	::System::Void set_TriggerHandler(::Class_1_4F54BF4C6B55D9A9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4F54BF4C6B55D9A9*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_SET_TRIGGERHANDLER_OFFSET))(this, a1);
	}

	::Il2CppArray<::Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D*>* get_DropInfos()
	{
		return ((::Il2CppArray<::Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_DROPINFOS_OFFSET))(this);
	}

	::System::Void set_DropInfos(::Il2CppArray<::Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D*>*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_SET_DROPINFOS_OFFSET))(this, a1);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_WorldUp()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_WORLDUP_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_WorldRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_WORLDROTATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_WorldInverseRotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_WORLDINVERSEROTATION_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean get_AllowMemberPlay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_ALLOWMEMBERPLAY_OFFSET))(this);
	}

	::System::Boolean get_IsPlayerEntry()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_GET_ISPLAYERENTRY_OFFSET))(this);
	}

	::System::Void set_IsPlayerEntry(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_SET_ISPLAYERENTRY_OFFSET))(this, a1);
	}

	::System::Single Method_2_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::RPG::Client::EPedestrianV2MotionState Method_2_C3C9BF311C318908()
	{
		return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_C3C9BF311C318908_OFFSET))(this);
	}

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2022A7619B3D99E(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_C2022A7619B3D99E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_718C533A69423C28(::Class_1_B87B48EBDCE76E87* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_718C533A69423C28_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_42073E1316C51A78(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_42073E1316C51A78_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F0036ED5CF109B4(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::Struct_2_085541A9CFF64383 Method_2_63B9BBBA908A65B9(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_63B9BBBA908A65B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B5BD32B0C4CFDB0D(::Class_1_B87B48EBDCE76E87* a1, ::Struct_2_085541A9CFF64383& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*, ::Struct_2_085541A9CFF64383&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_B5BD32B0C4CFDB0D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::Class_1_B87B48EBDCE76E87* Method_2_7DEB5A46E3246246(::System::Single a1)
	{
		return ((::Class_1_B87B48EBDCE76E87*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_7DEB5A46E3246246_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2F64259250993203()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_2F64259250993203_OFFSET))(this);
	}

	::System::Boolean Method_2_2C3F2DB2A4AACF8D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_2C3F2DB2A4AACF8D_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* Method_2_6046D908E8281AF6()
	{
		return ((::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_6046D908E8281AF6_OFFSET))(this);
	}

	::System::Void Method_2_054B8F7AF60506D5(::Class_1_E7D4F1B8FC35E82D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E7D4F1B8FC35E82D*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_054B8F7AF60506D5_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4A7A3E7B070218A0(::Class_1_E7D4F1B8FC35E82D* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Collections::Generic::HashSet_1<::System::Int32>* a4, ::System::Int32& a5, ::UnityEngine::Vector3& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E7D4F1B8FC35E82D*, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_4A7A3E7B070218A0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_C82201EC8526688C(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_C82201EC8526688C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_0BCFDDA89BDEFC91(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32& a3, ::System::Int32& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_0BCFDDA89BDEFC91_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_FC83C4F2B5E11F96(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_FC83C4F2B5E11F96_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_38F1172394594711(::System::Int32& a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_38F1172394594711_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E9EDCA6940F85BC7(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_E9EDCA6940F85BC7_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_9D16F90644F98754(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_9D16F90644F98754_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_69232C0FA13F1FBA(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_69232C0FA13F1FBA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A00EAD174EF85E42(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_A00EAD174EF85E42_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Boolean Method_2_9C331001414329EA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_9C331001414329EA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E146CE61ABF70C1C(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_E146CE61ABF70C1C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9D44CA0820FE38B7(::Class_1_B87B48EBDCE76E87* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B87B48EBDCE76E87*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_9D44CA0820FE38B7_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_32EAD77529B340A8()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_32EAD77529B340A8_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_METHOD_2_FEA241CA014F8043_OFFSET))(this, a1);
	}
};
