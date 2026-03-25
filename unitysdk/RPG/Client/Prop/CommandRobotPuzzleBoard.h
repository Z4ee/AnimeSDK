#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_125B67C2F2D7C6EE;
class Class_1_BA87A9A27051A21E;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA06F4F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET UNITYSDK_OFFSET(0xA0703E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xA071470)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA06FBA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xA06FCB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA070DA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0xA070750)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0xA06F9D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA071990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xA0717B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xA071B70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET UNITYSDK_OFFSET(0xA070C20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET UNITYSDK_OFFSET(0xA070CE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xA072120)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_34928CCE7A86FADF_OFFSET UNITYSDK_OFFSET(0xA072680)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0xA071CF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xA06F820)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_1_OFFSET UNITYSDK_OFFSET(0xA070990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xA072A90)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET UNITYSDK_OFFSET(0xA070DF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xA070920)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9157C88C9D83A994_OFFSET UNITYSDK_OFFSET(0xA0716C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA070360)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xA071590)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xA0728B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9FDD2BE5F0EE8C45_OFFSET UNITYSDK_OFFSET(0xA072270)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xA071B10)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C2964BCE35522351_OFFSET UNITYSDK_OFFSET(0xA072AF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xA0714F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xA0721F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA06F740)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0xA071270)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xA071860)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xA072600)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0xA0709F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA070E40)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA070020)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA070AF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA072E00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA072D50)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA072E40)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA072E50)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA072FC0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA073060)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA072EF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xA072F50)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard_TypeDefinitionIndex = 63961;

	class CommandRobotPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x47FB0);
		}
		static ::System::UInt32* StaticGet_Field_7_16()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x12C30);
		}
		// static const ::System::String* Field_7_18; // 0x0
		// static const ::System::Single Field_7_39; // 0x0
		::System::UInt32 MaxStep; // 0x68
		::System::Single BlockTime; // 0x6C
		::System::UInt32 Field_7_2; // 0x70
		::System::UInt32 Field_7_3; // 0x74
		::System::UInt32 Field_7_4; // 0x78
		::System::UInt32 Field_7_5; // 0x7C
		::System::UInt32 Field_7_6; // 0x80
		::System::UInt32 Field_7_7; // 0x84
		::System::UInt32 Field_7_8; // 0x88
		::System::UInt32 Field_7_9; // 0x8C
		::System::UInt32 Field_7_10; // 0x90
		::System::UInt32 NPCGroupID; // 0x94
		::System::UInt32 NPCEntityID; // 0x98
		::System::Int32 Field_7_14; // 0x9C
		::System::Int32 Field_7_15; // 0xA0
		::System::UInt32 Field_7_17; // 0xA4
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* Field_7_19; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::CommandRobotPuzzleBlock*>* Field_7_20; // 0xB0
		::Class_1_BA87A9A27051A21E* Field_7_21; // 0xB8
		::System::UInt32 Field_7_22; // 0xC0
		::RPG::GameCore::GameEntity* Field_7_23; // 0xC8
		::System::Int32 Field_7_24; // 0xD0
		::UnityEngine::Vector2Int Field_7_25; // 0xD4
		::UnityEngine::Quaternion Field_7_26; // 0xDC
		::RPG::Client::Prop::CommandRobotPuzzleState Field_7_27; // 0xEC
		::UnityEngine::Vector2Int Field_7_28; // 0xF0
		::Class_1_125B67C2F2D7C6EE* Field_7_29; // 0xF8
		::System::Boolean Field_7_30; // 0x100
		::UnityEngine::Coroutine* Field_7_31; // 0x108
		::UnityEngine::Coroutine* Field_7_32; // 0x110
		::UnityEngine::Vector3 Field_7_33; // 0x118
		::RPG::Client::Billboard::BillboardNotifyParam* Field_7_34; // 0x128
		::RPG::GameCore::PlayNPCBubbleTalk* Field_7_35; // 0x130
		::System::Boolean Field_7_36; // 0x138
		::System::Boolean Field_7_37; // 0x139
		::System::UInt32 Field_7_38; // 0x13C
		::UnityEngine::GameObject* Field_7_40; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET))(this);
		}

		::System::Void GetNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void Method_7_019FAF8DF887E9D8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_019FAF8DF887E9D8_OFFSET))(this);
		}

		::System::Void Method_7_0ED51BEF22C2FF5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_0ED51BEF22C2FF5B_OFFSET))(this);
		}

		::System::Void Method_7_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_7_7A272934369463F2(::RPG::Client::Prop::CommandRobotPuzzleState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET))(this, a1);
		}

		::System::Void Method_7_C450A961450309C9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C450A961450309C9_OFFSET))(this, a1);
		}

		::System::Void Method_7_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_7_9157C88C9D83A994(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9157C88C9D83A994_OFFSET))(this, a1);
		}

		::System::Void Method_7_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_7_3B7145E79424FB75()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_3B7145E79424FB75_OFFSET))(this);
		}

		::System::Void Method_7_283DA224BE06DA9F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_283DA224BE06DA9F_OFFSET))(this);
		}

		::System::Void Method_7_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_7_394F35BBA0EE596A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_394F35BBA0EE596A_OFFSET))(this);
		}

		::System::Void Method_7_CD8EB704BDED69B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_CD8EB704BDED69B6_OFFSET))(this);
		}

		::System::Void Method_7_285439556D776CA2(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET))(this, a1);
		}

		::System::Void Method_7_285439556D776CA2_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET))(this, a1);
		}

		::System::Void Method_7_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_7_F37CDBD6D46274D2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET))(this, a1);
		}

		::System::Void Method_7_34928CCE7A86FADF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_34928CCE7A86FADF_OFFSET))(this, a1);
		}

		::System::Void Method_7_974A70E8019154E7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET))(this, a1);
		}

		::System::Void Method_7_749948B663FCCCEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_749948B663FCCCEF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_1_OFFSET))(this);
		}

		::System::Void Method_7_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Void Method_7_9FDD2BE5F0EE8C45(::System::UInt32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9FDD2BE5F0EE8C45_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* Method_7_C2964BCE35522351(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C2964BCE35522351_OFFSET))(this, a1);
		}

		::System::Void Method_7_F624506052E4790C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET))(this, a1);
		}

		::System::Void Method_7_EFF275E2C18C04F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET))(this);
		}

		::System::Void Method_7_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_7_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_TickPuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET))(this, P0);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}
	};
}
