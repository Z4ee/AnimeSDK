#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_125B67C2F2D7C6EE;
class Class_1_7F4048AB74B0A21D;
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

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x190046E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET UNITYSDK_OFFSET(0x19005650)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x19006740)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x19004E10)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0x19004F20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x19006060)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_0584B4481E699952_OFFSET UNITYSDK_OFFSET(0x19006990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x19006FC0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x19006C60)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1BD8B8D0762B0F0F_OFFSET UNITYSDK_OFFSET(0x190075A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x19006DE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x19006A80)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_1_OFFSET UNITYSDK_OFFSET(0x19005F00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_285439556D776CA2_OFFSET UNITYSDK_OFFSET(0x19005FB0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19007430)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_34928CCE7A86FADF_OFFSET UNITYSDK_OFFSET(0x19007960)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_34A27F2552E42C8A_OFFSET UNITYSDK_OFFSET(0x19007E70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x19005C00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x19007520)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x19006E40)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_1_OFFSET UNITYSDK_OFFSET(0x19005C70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0x19007E10)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_635445A7258F7A25_OFFSET UNITYSDK_OFFSET(0x190067C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET UNITYSDK_OFFSET(0x190060B0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x190055C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x19006860)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x19007BC0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_1_OFFSET UNITYSDK_OFFSET(0x19004BD0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x190059C0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x19004A20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x19004940)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0x19006540)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x19006B30)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x190078E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x19005CD0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x19006100)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x19005270)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x19005DD0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19008160)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x190080B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard_TypeDefinitionIndex = 74555;

	class CommandRobotPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2400);
		}
		static ::System::UInt32* StaticGet_Field_7_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xEA0);
		}
		// static const ::System::String* Field_7_2; // 0x0
		// static const ::System::Single Field_7_3; // 0x0
		::System::UInt32 MaxStep; // 0x68
		::System::Single BlockTime; // 0x6C
		::System::UInt32 Field_7_6; // 0x70
		::System::UInt32 Field_7_7; // 0x74
		::System::UInt32 Field_7_8; // 0x78
		::System::UInt32 Field_7_9; // 0x7C
		::System::UInt32 Field_7_10; // 0x80
		::System::UInt32 Field_7_11; // 0x84
		::System::UInt32 Field_7_12; // 0x88
		::System::UInt32 Field_7_13; // 0x8C
		::System::UInt32 Field_7_14; // 0x90
		::System::UInt32 NPCGroupID; // 0x94
		::System::UInt32 NPCEntityID; // 0x98
		::System::Int32 Field_7_17; // 0x9C
		::System::Int32 Field_7_18; // 0xA0
		::System::UInt32 Field_7_19; // 0xA4
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* Field_7_20; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::CommandRobotPuzzleBlock*>* Field_7_21; // 0xB0
		::Class_1_7F4048AB74B0A21D* Field_7_22; // 0xB8
		::System::UInt32 Field_7_23; // 0xC0
		::RPG::GameCore::GameEntity* Field_7_24; // 0xC8
		::System::Int32 Field_7_25; // 0xD0
		::UnityEngine::Vector2Int Field_7_26; // 0xD4
		::UnityEngine::Quaternion Field_7_27; // 0xDC
		::RPG::Client::Prop::CommandRobotPuzzleState Field_7_28; // 0xEC
		::UnityEngine::Vector2Int Field_7_29; // 0xF0
		::Class_1_125B67C2F2D7C6EE* Field_7_30; // 0xF8
		::System::Boolean Field_7_31; // 0x100
		::UnityEngine::Coroutine* Field_7_32; // 0x108
		::UnityEngine::Coroutine* Field_7_33; // 0x110
		::UnityEngine::Vector3 Field_7_34; // 0x118
		::RPG::Client::Billboard::BillboardNotifyParam* Field_7_35; // 0x128
		::RPG::GameCore::PlayNPCBubbleTalk* Field_7_36; // 0x130
		::System::Boolean Field_7_37; // 0x138
		::System::Boolean Field_7_38; // 0x139
		::System::UInt32 Field_7_39; // 0x13C
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

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_7_A239DF324AF4215D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_A239DF324AF4215D_1_OFFSET))(this);
		}

		::System::Void Method_7_37D641371E4C8F58(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_37D641371E4C8F58_OFFSET))(this, a1);
		}

		::System::Void Method_7_7A272934369463F2(::RPG::Client::Prop::CommandRobotPuzzleState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_7A272934369463F2_OFFSET))(this, a1);
		}

		::System::Void Method_7_635445A7258F7A25(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_635445A7258F7A25_OFFSET))(this, a1);
		}

		::System::Void Method_7_96BDC4B57CCFE000(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_96BDC4B57CCFE000_OFFSET))(this, a1);
		}

		::System::Void Method_7_0584B4481E699952(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_0584B4481E699952_OFFSET))(this, a1);
		}

		::System::Void Method_7_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_7_BBA49FAB086F388D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_BBA49FAB086F388D_OFFSET))(this);
		}

		::System::Void Method_7_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_7_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_7_08BBACE844405300()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_08BBACE844405300_OFFSET))(this);
		}

		::System::Void Method_7_458DAEAB6170C584()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_458DAEAB6170C584_OFFSET))(this);
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

		::System::Void Method_7_57D5ED2C4C06D908()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_7_57D5ED2C4C06D908_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_57D5ED2C4C06D908_1_OFFSET))(this);
		}

		::System::Void Method_7_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void Method_7_1BD8B8D0762B0F0F(::System::UInt32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_1BD8B8D0762B0F0F_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* Method_7_34A27F2552E42C8A(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_METHOD_7_34A27F2552E42C8A_OFFSET))(this, a1);
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
	};
}
