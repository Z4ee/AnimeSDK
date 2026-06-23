#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_3.h"
#include "unitysdk/Enum_3_4C7CE452CFA7A879.h"
#include "unitysdk/Enum_3_91B42685BFC9BFDB.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/NPCCrowd/CrowdPhysics/DitherState.h"
#include "unitysdk/Struct_2_F0DFD9050ADF2EDC.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_281;
class Class_1_3B91E8B5FF29338A;
class Class_1_9DF8A96088853ABF;
class Class_2_22627E64BE21FF1E;
class Class_2_A49223FCF7A3C1CF;
class Class_2_BCB29D9ECCEF0E00;
class Class_3_621E396E538604DB_Class_0_16E7307DCC43CB2C_66;
class Class_3_CD04D3296DF4C842_2;
namespace MoleMole { class FeaturePoint; }
namespace MoleMole { class InteractionPoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole { class MonoInteractionPoint; }
namespace MoleMole { class MonoNpcLookIKParameter; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define CLASS_3_621E396E538604DB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1795E170)
#define CLASS_3_621E396E538604DB_GET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x1795DF50)
#define CLASS_3_621E396E538604DB_GET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x1795DF30)
#define CLASS_3_621E396E538604DB_GET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x1795DF10)
#define CLASS_3_621E396E538604DB_GET_CURINTERACTID_OFFSET UNITYSDK_OFFSET(0x1795DFF0)
#define CLASS_3_621E396E538604DB_GET_INTERACTADVANCE_OFFSET UNITYSDK_OFFSET(0x1795DFD0)
#define CLASS_3_621E396E538604DB_GET_INTERACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1795E010)
#define CLASS_3_621E396E538604DB_GET_ISINTERACTING_OFFSET UNITYSDK_OFFSET(0x1795E0F0)
#define CLASS_3_621E396E538604DB_GET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x1795DEF0)
#define CLASS_3_621E396E538604DB_GET_MONOINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1795DCC0)
#define CLASS_3_621E396E538604DB_GET_NAVFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1795DC90)
#define CLASS_3_621E396E538604DB_GET_NAVFLAGS_OFFSET UNITYSDK_OFFSET(0x1795DDF0)
#define CLASS_3_621E396E538604DB_GET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1795DD10)
#define CLASS_3_621E396E538604DB_GET_NAVLOCK_OFFSET UNITYSDK_OFFSET(0x1795DCB0)
#define CLASS_3_621E396E538604DB_GET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x1795DE00)
#define CLASS_3_621E396E538604DB_GET_NAVPLAYERMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1795DDD0)
#define CLASS_3_621E396E538604DB_GET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x1795DF90)
#define CLASS_3_621E396E538604DB_GET_NEEDRESETROTATE_OFFSET UNITYSDK_OFFSET(0x1795E090)
#define CLASS_3_621E396E538604DB_GET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x1795DED0)
#define CLASS_3_621E396E538604DB_GET_ORIFORWARD_OFFSET UNITYSDK_OFFSET(0x1795E0B0)
#define CLASS_3_621E396E538604DB_GET_ORIGINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1795E130)
#define CLASS_3_621E396E538604DB_GET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x1795DC70)
#define CLASS_3_621E396E538604DB_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x1795DCE0)
#define CLASS_3_621E396E538604DB_GET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET UNITYSDK_OFFSET(0x1795E110)
#define CLASS_3_621E396E538604DB_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1795DFB0)
#define CLASS_3_621E396E538604DB_GET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x1795DCF0)
#define CLASS_3_621E396E538604DB_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x1795DEC0)
#define CLASS_3_621E396E538604DB_HANDLEPLAYERNAVIGATEDONE_OFFSET UNITYSDK_OFFSET(0x1795DE20)
#define CLASS_3_621E396E538604DB_METHOD_3_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1795EA50)
#define CLASS_3_621E396E538604DB_METHOD_3_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1795E8F0)
#define CLASS_3_621E396E538604DB_METHOD_3_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x1795D9A0)
#define CLASS_3_621E396E538604DB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1795E9C0)
#define CLASS_3_621E396E538604DB_METHOD_3_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1795E900)
#define CLASS_3_621E396E538604DB_METHOD_3_AA8656BCDBBD4870_1_OFFSET UNITYSDK_OFFSET(0x1795E960)
#define CLASS_3_621E396E538604DB_METHOD_3_AA8656BCDBBD4870_OFFSET UNITYSDK_OFFSET(0x1795E890)
#define CLASS_3_621E396E538604DB_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x1795EBB0)
#define CLASS_3_621E396E538604DB_METHOD_3_DCEC38F05597CB7D_OFFSET UNITYSDK_OFFSET(0x1795EC30)
#define CLASS_3_621E396E538604DB_METHOD_3_E97AC7B8F06B8C3E_1_OFFSET UNITYSDK_OFFSET(0x1795EAF0)
#define CLASS_3_621E396E538604DB_METHOD_3_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x1795E7D0)
#define CLASS_3_621E396E538604DB_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1795EAA0)
#define CLASS_3_621E396E538604DB_METHOD_3_F371EFF05B4317BA_OFFSET UNITYSDK_OFFSET(0x1795E700)
#define CLASS_3_621E396E538604DB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1795D4C0)
#define CLASS_3_621E396E538604DB_SET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0x1795DF70)
#define CLASS_3_621E396E538604DB_SET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0x1795DF40)
#define CLASS_3_621E396E538604DB_SET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0x1795DF20)
#define CLASS_3_621E396E538604DB_SET_CURINTERACTID_OFFSET UNITYSDK_OFFSET(0x1795E000)
#define CLASS_3_621E396E538604DB_SET_INTERACTADVANCE_OFFSET UNITYSDK_OFFSET(0x1795DFE0)
#define CLASS_3_621E396E538604DB_SET_INTERACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x1795E020)
#define CLASS_3_621E396E538604DB_SET_ISINTERACTING_OFFSET UNITYSDK_OFFSET(0x1795E100)
#define CLASS_3_621E396E538604DB_SET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0x1795DF00)
#define CLASS_3_621E396E538604DB_SET_MONOINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1795DCD0)
#define CLASS_3_621E396E538604DB_SET_NAVFINISHEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1795DCA0)
#define CLASS_3_621E396E538604DB_SET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0x1795DD20)
#define CLASS_3_621E396E538604DB_SET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0x1795DE10)
#define CLASS_3_621E396E538604DB_SET_NAVPLAYERMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1795DDE0)
#define CLASS_3_621E396E538604DB_SET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0x1795DFA0)
#define CLASS_3_621E396E538604DB_SET_NEEDRESETROTATE_OFFSET UNITYSDK_OFFSET(0x1795E0A0)
#define CLASS_3_621E396E538604DB_SET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0x1795DEE0)
#define CLASS_3_621E396E538604DB_SET_ORIFORWARD_OFFSET UNITYSDK_OFFSET(0x1795E0D0)
#define CLASS_3_621E396E538604DB_SET_ORIGINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1795E150)
#define CLASS_3_621E396E538604DB_SET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0x1795DC80)
#define CLASS_3_621E396E538604DB_SET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET UNITYSDK_OFFSET(0x1795E120)
#define CLASS_3_621E396E538604DB_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x1795DFC0)
#define CLASS_3_621E396E538604DB_SET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0x1795DD00)
#define CLASS_3_621E396E538604DB_TRIGGERINTERACTDIRECTLY_OFFSET UNITYSDK_OFFSET(0x1795E030)
#define CLASS_3_621E396E538604DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1795E1C0)
#define CLASS_3_621E396E538604DB__CTOR_OFFSET UNITYSDK_OFFSET(0x1795E260)

inline static constexpr unsigned int Class_3_621E396E538604DB_TypeDefinitionIndex = 71368;

class Class_3_621E396E538604DB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_3_21()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_621E396E538604DB_TypeDefinitionIndex)->GetStaticField(0x440F0);
	}
	// static const ::System::Int32 Field_3_20 = 0x1; // 0x0
	// static const ::System::Int32 Field_3_62 = 0x60; // 0x0
	::System::Action* Field_3_34; // 0x48
	::MoleMole::MonoInteractionPoint* Field_3_18; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_30; // 0x58
	::MoleMole::Battle::Entity* Field_3_17; // 0x60
	::MoleMole::MonoNpcLookIKParameter* Field_3_2; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_3_42; // 0x70
	::Class_3_CD04D3296DF4C842_2* Field_3_3; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_3_39; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_3_49; // 0x88
	::MoleMole::FeaturePoint* Field_3_22; // 0x90
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_9; // 0x98
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* Field_3_40; // 0xA0
	::Class_2_A49223FCF7A3C1CF* Field_3_10; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_3_8; // 0xB0
	::Class_1_3B91E8B5FF29338A* Field_3_12; // 0xB8
	::Class_1_9DF8A96088853ABF* Field_3_35; // 0xC0
	::System::String* Field_3_11; // 0xC8
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Boolean>* Field_3_48; // 0xD0
	::MoleMole::MonoFeaturePoint* Field_3_19; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* Field_3_50; // 0xE0
	::MoleMole::InteractionPoint* Field_3_31; // 0xE8
	::System::Collections::Generic::List_1<::System::String*>* Field_3_45; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_621E396E538604DB_Class_0_16E7307DCC43CB2C_66*>* Field_3_7; // 0xF8
	::System::Boolean Field_3_37; // 0x100
	::System::Boolean Field_3_15; // 0x101
	::System::Boolean Field_3_24; // 0x102
	::System::Boolean Field_3_53; // 0x103
	::UnityEngine::Vector3 Field_3_60; // 0x104
	::System::Single Field_3_51; // 0x110
	::System::Boolean Field_3_47; // 0x114
	::System::Boolean Field_3_1; // 0x115
	::System::Boolean Field_3_56; // 0x116
	::System::Boolean Field_3_61; // 0x117
	::Foundation::Coroutine::CoroutineHandle Field_3_38; // 0x118
	::Enum_3_91B42685BFC9BFDB Field_3_27; // 0x11C
	::System::Single Field_3_44; // 0x120
	::System::Boolean Field_3_43; // 0x124
	::System::Boolean Field_3_6; // 0x125
	::System::Boolean Field_3_14; // 0x126
	::System::Boolean Field_3_25; // 0x127
	::System::Int32 Field_3_29; // 0x128
	::System::Int32 Field_3_52; // 0x12C
	::NPCCrowd::CrowdPhysics::DitherState Field_3_54; // 0x130
	::Struct_2_F0DFD9050ADF2EDC Field_3_33; // 0x13C
	::System::Boolean Field_3_13; // 0x13D
	::System::Boolean Field_3_28; // 0x13E
	::System::Boolean Field_3_16; // 0x13F
	::System::UInt64 Field_3_5; // 0x140
	::System::Single Field_3_46; // 0x148
	::UnityEngine::Vector3 Field_3_41; // 0x14C
	::UnityEngine::Vector2 Field_3_55; // 0x158
	::System::UInt32 Field_3_4; // 0x160
	::System::Single Field_3_58; // 0x164
	::Enum_3_4C7CE452CFA7A879 Field_3_32; // 0x168
	::System::Single Field_3_59; // 0x16C
	::System::Single Field_3_0; // 0x170
	::System::Single Field_3_57; // 0x174
	::UnityEngine::Vector3 Field_3_36; // 0x178
	::System::Int32 Field_3_23; // 0x184
	::System::Single Field_3_26; // 0x188

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_ONCLEAN_OFFSET))(this);
	}

	::System::Single get_OverrideRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_OVERRIDERADIUS_OFFSET))(this);
	}

	::System::Void set_OverrideRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_OVERRIDERADIUS_OFFSET))(this, a1);
	}

	::System::Action* get_NavFinishedCallback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVFINISHEDCALLBACK_OFFSET))(this);
	}

	::System::Void set_NavFinishedCallback(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NAVFINISHEDCALLBACK_OFFSET))(this, a1);
	}

	::Struct_2_F0DFD9050ADF2EDC& get_NavLock()
	{
		return ((::Struct_2_F0DFD9050ADF2EDC&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVLOCK_OFFSET))(this);
	}

	::MoleMole::MonoInteractionPoint* get_MonoInteractionPoint()
	{
		return ((::MoleMole::MonoInteractionPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_MONOINTERACTIONPOINT_OFFSET))(this);
	}

	::System::Void set_MonoInteractionPoint(::MoleMole::MonoInteractionPoint* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoInteractionPoint*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_MONOINTERACTIONPOINT_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* get_OwnerEntity()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_OWNERENTITY_OFFSET))(this);
	}

	::UnityEngine::Vector2 get_SavedSpeedRatio()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_SAVEDSPEEDRATIO_OFFSET))(this);
	}

	::System::Void set_SavedSpeedRatio(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_SAVEDSPEEDRATIO_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_281* get_NavInteractionPoint()
	{
		return ((::Class_0_16E4307DCC419505_281*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVINTERACTIONPOINT_OFFSET))(this);
	}

	::System::Void set_NavInteractionPoint(::Class_0_16E4307DCC419505_281* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_281*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NAVINTERACTIONPOINT_OFFSET))(this, a1);
	}

	::System::Int32 get_NavPlayerMoveIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVPLAYERMOVEINDEX_OFFSET))(this);
	}

	::System::Void set_NavPlayerMoveIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NAVPLAYERMOVEINDEX_OFFSET))(this, a1);
	}

	::Enum_3_4C7CE452CFA7A879& get_NavFlags()
	{
		return ((::Enum_3_4C7CE452CFA7A879&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVFLAGS_OFFSET))(this);
	}

	::Class_1_9DF8A96088853ABF* get_NavPathFollow()
	{
		return ((::Class_1_9DF8A96088853ABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NAVPATHFOLLOW_OFFSET))(this);
	}

	::System::Void set_NavPathFollow(::Class_1_9DF8A96088853ABF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9DF8A96088853ABF*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NAVPATHFOLLOW_OFFSET))(this, a1);
	}

	::System::Void HandlePlayerNavigateDone(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_HANDLEPLAYERNAVIGATEDONE_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_UseNavMesh()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_USENAVMESH_OFFSET))(this);
	}

	::System::Boolean get_NoTurnAnim()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NOTURNANIM_OFFSET))(this);
	}

	::System::Void set_NoTurnAnim(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NOTURNANIM_OFFSET))(this, a1);
	}

	::System::Single get_MaxWaitIdleTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_MAXWAITIDLETIME_OFFSET))(this);
	}

	::System::Void set_MaxWaitIdleTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_MAXWAITIDLETIME_OFFSET))(this, a1);
	}

	::System::Single get_CheckStandTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_CHECKSTANDTIME_OFFSET))(this);
	}

	::System::Void set_CheckStandTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_CHECKSTANDTIME_OFFSET))(this, a1);
	}

	::System::Single get_CheckStandTimer()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_CHECKSTANDTIMER_OFFSET))(this);
	}

	::System::Void set_CheckStandTimer(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_CHECKSTANDTIMER_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_CheckStandPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_CHECKSTANDPOS_OFFSET))(this);
	}

	::System::Void set_CheckStandPos(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_CHECKSTANDPOS_OFFSET))(this, a1);
	}

	::System::Boolean get_NeedDetour()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NEEDDETOUR_OFFSET))(this);
	}

	::System::Void set_NeedDetour(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NEEDDETOUR_OFFSET))(this, a1);
	}

	::System::Int32 get_SavedMuteAnimatorMoveIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this);
	}

	::System::Void set_SavedMuteAnimatorMoveIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this, a1);
	}

	::System::Boolean get_InteractAdvance()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_INTERACTADVANCE_OFFSET))(this);
	}

	::System::Void set_InteractAdvance(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_INTERACTADVANCE_OFFSET))(this, a1);
	}

	::System::Int32 get_CurInteractID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_CURINTERACTID_OFFSET))(this);
	}

	::System::Void set_CurInteractID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_CURINTERACTID_OFFSET))(this, a1);
	}

	::Enum_3_91B42685BFC9BFDB get_InteractiveState()
	{
		return ((::Enum_3_91B42685BFC9BFDB(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_INTERACTIVESTATE_OFFSET))(this);
	}

	::System::Void set_InteractiveState(::Enum_3_91B42685BFC9BFDB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_91B42685BFC9BFDB))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_INTERACTIVESTATE_OFFSET))(this, a1);
	}

	::System::Void TriggerInteractDirectly(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_TRIGGERINTERACTDIRECTLY_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_NeedResetRotate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_NEEDRESETROTATE_OFFSET))(this);
	}

	::System::Void set_NeedResetRotate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_NEEDRESETROTATE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_OriForward()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_ORIFORWARD_OFFSET))(this);
	}

	::System::Void set_OriForward(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_ORIFORWARD_OFFSET))(this, a1);
	}

	::System::Boolean get_IsInteracting()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_ISINTERACTING_OFFSET))(this);
	}

	::System::Void set_IsInteracting(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_ISINTERACTING_OFFSET))(this, a1);
	}

	::System::Boolean get_rotateToOrignalDirectionWhenExitInteract()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET))(this);
	}

	::System::Void set_rotateToOrignalDirectionWhenExitInteract(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_ROTATETOORIGNALDIRECTIONWHENEXITINTERACT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_OriginalDirection()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GET_ORIGINALDIRECTION_OFFSET))(this);
	}

	::System::Void set_OriginalDirection(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_SET_ORIGINALDIRECTION_OFFSET))(this, a1);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_F371EFF05B4317BA(::Class_1_3B91E8B5FF29338A* a1, ::Class_2_A49223FCF7A3C1CF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B91E8B5FF29338A*, ::Class_2_A49223FCF7A3C1CF*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_F371EFF05B4317BA_OFFSET))(this, a1, a2);
	}

	::Class_2_22627E64BE21FF1E* Method_3_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_22627E64BE21FF1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::System::Void Method_3_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_3_AA8656BCDBBD4870(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_AA8656BCDBBD4870_OFFSET))(this, a1);
	}

	::Class_1_3B91E8B5FF29338A* Method_3_24748FC20F375725()
	{
		return ((::Class_1_3B91E8B5FF29338A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_24748FC20F375725_OFFSET))(this);
	}

	::System::UInt32 Method_3_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Void Method_3_AA8656BCDBBD4870_1(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_AA8656BCDBBD4870_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_205A14011EEBDE57(::Enum_3_0A3761FE34514D6C_3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_3))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_3B91E8B5FF29338A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B91E8B5FF29338A*))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_2_BCB29D9ECCEF0E00* Method_3_E97AC7B8F06B8C3E_1()
	{
		return ((::Class_2_BCB29D9ECCEF0E00*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_E97AC7B8F06B8C3E_1_OFFSET))(this);
	}

	static ::Class_3_621E396E538604DB* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_621E396E538604DB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::Class_2_A49223FCF7A3C1CF* Method_3_DCEC38F05597CB7D()
	{
		return ((::Class_2_A49223FCF7A3C1CF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_621E396E538604DB_METHOD_3_DCEC38F05597CB7D_OFFSET))(this);
	}
};
