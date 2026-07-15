#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/DeployBoardState.h"

class Class_1_8CF94E0F14A91ED3_4;
class Class_1_AA6FF9C9B64B58C9;
class Class_1_DD6E273E77666B37;
class Class_1_E84B715B4BB2E65F;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::Client::Prop { class ConnectionInfo; }
namespace RPG::Client::Prop { class DeployPuzzleBasePoint; }
namespace RPG::Client::Prop { class DeployPuzzleHint; }
namespace RPG::Client::Prop { class DeployPuzzleStone; }
namespace RPG::Client::Prop { class HintConfigInfo; }
namespace RPG::Client::Prop { class StoneInfo; }
namespace RPG::Client::Prop { class StoneMoveAnimConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGELINERENDEREMISSION_OFFSET UNITYSDK_OFFSET(0x1900E8B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1900B570)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1900AF60)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETANSWERBASEPOINTPROPIDLIST_OFFSET UNITYSDK_OFFSET(0x19008E50)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETBASEPOINT_OFFSET UNITYSDK_OFFSET(0x1900CAB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETSTONE_OFFSET UNITYSDK_OFFSET(0x1900CB60)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTHOLDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0x1900F320)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTPICKUPBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0x1900F340)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYERHOLDINGSTONE_OFFSET UNITYSDK_OFFSET(0x19008BB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYINGSTONEMOVEANIM_OFFSET UNITYSDK_OFFSET(0x1900CC20)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_PUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0x1900F360)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GIVEBACKHOLDINGSTONE_OFFSET UNITYSDK_OFFSET(0x1900DA20)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x19009160)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x1900B520)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x1900E9C0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x1900CF20)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0x1900E450)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET UNITYSDK_OFFSET(0x1900B020)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_292F9610D63D1947_OFFSET UNITYSDK_OFFSET(0x1900DBF0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x1900A490)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x1900F790)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x19009AF0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3D18881BFBA2A416_OFFSET UNITYSDK_OFFSET(0x1900F2F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x1900C530)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_4F60CBE29BD2AB9A_OFFSET UNITYSDK_OFFSET(0x1900DE70)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_5C894234121A7CB4_OFFSET UNITYSDK_OFFSET(0x1900C0D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_740A14CA31FF6391_OFFSET UNITYSDK_OFFSET(0x1900B670)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8719F90BD885137A_OFFSET UNITYSDK_OFFSET(0x1900F420)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x1900B740)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0x1900DC80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_AB1A253BFABC50A9_OFFSET UNITYSDK_OFFSET(0x1900F0E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x1900A170)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_D2967792C8AA78E6_OFFSET UNITYSDK_OFFSET(0x1900E260)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_DA8915F72DE34BAE_OFFSET UNITYSDK_OFFSET(0x19009E00)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_F63565EA57F495CC_OFFSET UNITYSDK_OFFSET(0x1900AC50)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_FCFC6D239F675EAB_OFFSET UNITYSDK_OFFSET(0x1900C3F0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ONPUZZLEFINISHED_OFFSET UNITYSDK_OFFSET(0x1900D600)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PICKUPSTONE_OFFSET UNITYSDK_OFFSET(0x190087B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLACESTONE_OFFSET UNITYSDK_OFFSET(0x190085E0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYEREFFECTATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x1900F380)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYSTONEMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x1900CC80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x1900AB80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTHOLDSTONEPROPID_OFFSET UNITYSDK_OFFSET(0x1900F330)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTPICKUPBASEPOINTPROPID_OFFSET UNITYSDK_OFFSET(0x1900F350)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_PUZZLESOLVED_OFFSET UNITYSDK_OFFSET(0x1900F370)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x19009A90)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SWAPSTONE_OFFSET UNITYSDK_OFFSET(0x19008970)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x1900DDD0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERHINTLINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0x1900EE80)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONEFADEOUT_OFFSET UNITYSDK_OFFSET(0x1900EB30)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONELINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0x1900ECB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1900FBB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1900F850)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___SWITCHPLAYEREFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0x1900FC00)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBoard_TypeDefinitionIndex = 74572;

	class DeployPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet_Field_6_0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x2660);
		}
		static ::System::Int32* StaticGet_Field_6_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeployPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0xF50);
		}
		::System::UInt32 PuzzleGroupID; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* BasePointProps; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::Prop::StoneInfo*>* StoneProps; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ConnectionInfo*>* StoneConnections; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ConnectionInfo*>* PuzzleHintConnections; // 0x68
		::UnityEngine::Transform* DrawLinePrefab; // 0x70
		::System::Single LineWidth; // 0x78
		::UnityEngine::Transform* HintLinePrefab; // 0x80
		::System::Single HintLineWidth; // 0x88
		::RPG::Client::Prop::HintConfigInfo* HintConfig; // 0x90
		::UnityEngine::Collider* ValidArea; // 0x98
		::System::String* PlayerLinkPoint; // 0xA0
		::System::String* PlayerHoldEffectPath; // 0xA8
		::System::Single PlayerHoldEffectFadeoutSpeed; // 0xB0
		::System::Single PlayerHoldEffectPlaceFadeoutSpeed; // 0xB4
		::RPG::Client::Prop::StoneMoveAnimConfig* StoneAnimConfig; // 0xB8
		::System::UInt32 _CurrentHoldStonePropID_k__BackingField; // 0xC0
		::System::UInt32 _CurrentPickupBasePointPropID_k__BackingField; // 0xC4
		::System::Boolean _PuzzleSolved_k__BackingField; // 0xC8
		::UnityEngine::Transform* Field_6_21; // 0xD0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::DeployPuzzleStone*>* Field_6_22; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Prop::DeployPuzzleBasePoint*>* BasePointDatas; // 0xE0
		::System::Collections::Generic::List_1<::Class_1_8CF94E0F14A91ED3_4*>* Field_6_24; // 0xE8
		::RPG::Client::Prop::DeployPuzzleHint* Field_6_25; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* Field_6_26; // 0xF8
		::RPG::GameCore::DeployBoardState Field_6_27; // 0x100
		::System::Collections::Generic::Queue_1<::Class_1_AA6FF9C9B64B58C9*>* Field_6_28; // 0x108
		::System::Collections::Generic::List_1<::System::Single>* Field_6_29; // 0x110
		::System::Boolean Field_6_30; // 0x118
		::RPG::Client::MonoEffect* Field_6_31; // 0x120
		::System::Boolean Field_6_32; // 0x128
		::System::Collections::Generic::List_1<::Class_1_E84B715B4BB2E65F*>* Field_6_33; // 0x130
		::System::Collections::Generic::List_1<::Class_1_DD6E273E77666B37*>* Field_6_34; // 0x138
		::System::Int32 Field_6_35; // 0x140
		::System::Int32 Field_6_36; // 0x144
		::System::Int32 Field_6_37; // 0x148
		::RPG::Client::RuntimeGroupManager* Field_6_38; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::GameCore::DeployBoardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeployBoardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGESTATE_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_DA8915F72DE34BAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_DA8915F72DE34BAE_OFFSET))(this);
		}

		::System::Void Method_6_BBA49FAB086F388D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_BBA49FAB086F388D_OFFSET))(this);
		}

		::System::Void Method_6_8DC652D916C182B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8DC652D916C182B2_OFFSET))(this);
		}

		::System::Void Method_6_2CD6D17D088D5DB9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_2CD6D17D088D5DB9_OFFSET))(this);
		}

		::RPG::Client::Prop::DeployPuzzleBasePoint* GetBasePoint(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::DeployPuzzleBasePoint*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETBASEPOINT_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::DeployPuzzleStone* GetStone(::System::UInt32 a1)
		{
			return ((::RPG::Client::Prop::DeployPuzzleStone*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETSTONE_OFFSET))(this, a1);
		}

		::System::Void PlaceStone(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLACESTONE_OFFSET))(this, a1, a2);
		}

		::System::Void PickupStone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PICKUPSTONE_OFFSET))(this, a1, a2);
		}

		::System::Void SwapStone(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SWAPSTONE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void OnPuzzleFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_ONPUZZLEFINISHED_OFFSET))(this);
		}

		::System::Void GiveBackHoldingStone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GIVEBACKHOLDINGSTONE_OFFSET))(this);
		}

		::System::Void Method_6_229CEF33F0AF9039()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_229CEF33F0AF9039_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_FCFC6D239F675EAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_FCFC6D239F675EAB_OFFSET))(this);
		}

		::System::Void Method_6_489E0B827662C211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_489E0B827662C211_OFFSET))(this);
		}

		::System::Void Method_6_740A14CA31FF6391(::RPG::GameCore::DeployBoardState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DeployBoardState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_740A14CA31FF6391_OFFSET))(this, a1);
		}

		::System::Void Method_6_5C894234121A7CB4(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_5C894234121A7CB4_OFFSET))(this, a1, a2);
		}

		::System::Void ChangeLineRenderEmission(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_CHANGELINERENDEREMISSION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAnswerBasePointPropIDList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GETANSWERBASEPOINTPROPIDLIST_OFFSET))(this);
		}

		::System::Void Method_6_4F60CBE29BD2AB9A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_4F60CBE29BD2AB9A_OFFSET))(this, a1);
		}

		::System::Void Method_6_D2967792C8AA78E6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_D2967792C8AA78E6_OFFSET))(this, a1);
		}

		::System::Void Method_6_1AB9D4E0D4B0F708(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_1AB9D4E0D4B0F708_OFFSET))(this, a1);
		}

		::System::Void Method_6_97889423B3D78768()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_97889423B3D78768_OFFSET))(this);
		}

		::System::Void PlayStoneMoveAnimation(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYSTONEMOVEANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void TriggerStoneFadeout(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONEFADEOUT_OFFSET))(this, a1);
		}

		::System::Void TriggerStoneLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERSTONELINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerHintLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_TRIGGERHINTLINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AB1A253BFABC50A9(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_AB1A253BFABC50A9_OFFSET))(this, a1);
		}

		::System::Void Method_6_18982EFD3B740683()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_18982EFD3B740683_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_292F9610D63D1947()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_292F9610D63D1947_OFFSET))(this);
		}

		::System::UInt32 get_CurrentHoldStonePropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTHOLDSTONEPROPID_OFFSET))(this);
		}

		::System::Void set_CurrentHoldStonePropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTHOLDSTONEPROPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentPickupBasePointPropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_CURRENTPICKUPBASEPOINTPROPID_OFFSET))(this);
		}

		::System::Void set_CurrentPickupBasePointPropID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_CURRENTPICKUPBASEPOINTPROPID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayerHoldingStone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYERHOLDINGSTONE_OFFSET))(this);
		}

		::System::Boolean get_PuzzleSolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_PUZZLESOLVED_OFFSET))(this);
		}

		::System::Void set_PuzzleSolved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_SET_PUZZLESOLVED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPlayingStoneMoveAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_GET_ISPLAYINGSTONEMOVEANIM_OFFSET))(this);
		}

		::UnityEngine::Transform* PlayerEffectAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_PLAYEREFFECTATTACHPOINT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* Method_6_3D18881BFBA2A416()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3D18881BFBA2A416_OFFSET))(this);
		}

		::System::Void Method_6_8719F90BD885137A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_8719F90BD885137A_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_6_F63565EA57F495CC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_F63565EA57F495CC_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_6_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD_METHOD_6_37D0382D0C30A2DC_OFFSET))();
		}

		::System::Void __SwitchPlayerEffect_b__39_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEBOARD___SWITCHPLAYEREFFECT_B__39_0_OFFSET))(this, a1, a2);
		}
	};
}
