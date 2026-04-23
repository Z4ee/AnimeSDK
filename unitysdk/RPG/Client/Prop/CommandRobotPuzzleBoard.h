#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_125B67C2F2D7C6EE;
class Class_1_892D0C453642AC9C;
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

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADEDDB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET UNITYSDK_OFFSET(0xADEED00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xADEFDB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEE4C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xADEE5D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xADEF6B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0xADEF060)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_0ED51BEF22C2FF5B_OFFSET UNITYSDK_OFFSET(0xADEE2F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xADF02D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1F1ADF943D5169FC_OFFSET UNITYSDK_OFFSET(0xADF0BE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xADF00F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xADF04B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET UNITYSDK_OFFSET(0xADEF530)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET UNITYSDK_OFFSET(0xADEF5F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xADF0A90)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_364E91940C737CC9_OFFSET UNITYSDK_OFFSET(0xADF0630)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xADEE140)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xADF0B60)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_1_OFFSET UNITYSDK_OFFSET(0xADEF2A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xADF1470)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET UNITYSDK_OFFSET(0xADEF700)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0xADF1020)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xADEF230)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9157C88C9D83A994_OFFSET UNITYSDK_OFFSET(0xADF0000)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xADEEC80)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0xADEFED0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0xADF1290)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xADF0450)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C2964BCE35522351_OFFSET UNITYSDK_OFFSET(0xADF14D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xADEFE30)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xADEE060)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0xADEFBB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xADF01A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xADF0FA0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0xADEF300)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEF750)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEE940)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADEF400)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xADF17D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xADF1720)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xADF1810)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xADF1820)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xADF1990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xADF1A30)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xADF18C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD___IFIXBASEPROXY_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xADF1920)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard_TypeDefinitionIndex = 72008;

	class CommandRobotPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x6580);
		}
		static ::System::UInt32* StaticGet_Field_7_16()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x3050);
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
		::Class_1_892D0C453642AC9C* Field_7_21; // 0xB8
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

		::System::Void Method_7_364E91940C737CC9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_364E91940C737CC9_OFFSET))(this);
		}

		::System::Void Method_7_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET))(this);
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

		::System::Void Method_7_7C3BCB023B0D3F9C(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7C3BCB023B0D3F9C_OFFSET))(this, a1);
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

		::System::Void Method_7_1F1ADF943D5169FC(::System::UInt32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1F1ADF943D5169FC_OFFSET))(this, a1, a2, a3);
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
