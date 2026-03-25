#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockScreenHexPuzzle.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/Struct_2_D1A6E9473F023498.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_D27BF54F25500E5F;
class Class_3_CD04D3296DF4C842_12;
namespace RPG::Client::Prop { class InsertionPuzzleItem; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0A2590)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_EXIT_OFFSET UNITYSDK_OFFSET(0xA0A7510)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0xA0A0410)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xA0A0C60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xA0A0690)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A00A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA0A2540)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0xA0A8710)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_361C06486F56B4E7_OFFSET UNITYSDK_OFFSET(0xA0A1CC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_409AB7E23F0CC56E_OFFSET UNITYSDK_OFFSET(0xA0A2B00)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA0A8690)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xA0A3E70)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_6A69F0902812676B_OFFSET UNITYSDK_OFFSET(0xA0A7C30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_6CD10D704E24693D_OFFSET UNITYSDK_OFFSET(0xA0A6DC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_75C57EF4A698E5ED_OFFSET UNITYSDK_OFFSET(0xA0A4A00)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_7BD7E21BE8F1540A_OFFSET UNITYSDK_OFFSET(0xA0A61D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_7BF376E930E7E67F_OFFSET UNITYSDK_OFFSET(0xA0A6100)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_8B57DFC12205A632_OFFSET UNITYSDK_OFFSET(0xA0A6F90)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA0A8860)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_B3F3E96454A48B65_1_OFFSET UNITYSDK_OFFSET(0xA0A84D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_B3F3E96454A48B65_OFFSET UNITYSDK_OFFSET(0xA0A8310)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_C20C792E2EAE589E_OFFSET UNITYSDK_OFFSET(0xA0A7B60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_C6BFBDE36B40189B_OFFSET UNITYSDK_OFFSET(0xA0A6260)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0A71B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CD2062A6438764C3_OFFSET UNITYSDK_OFFSET(0xA0A66F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xA0A8F80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xA0A1F30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_D7FB88C66856998D_OFFSET UNITYSDK_OFFSET(0xA0A97B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_EBC8158E718F14FC_OFFSET UNITYSDK_OFFSET(0xA0A96E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0xA0A8D70)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_F79BD3CFD27B1BD3_OFFSET UNITYSDK_OFFSET(0xA0A8900)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_FD3B916300F77FDA_OFFSET UNITYSDK_OFFSET(0xA0A1BF0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xA0A42D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA0A4810)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xA0A4510)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xA0A7610)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xA0A76B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATEANTICLOCKWISE_OFFSET UNITYSDK_OFFSET(0xA0A7980)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATECLOCKWISE_OFFSET UNITYSDK_OFFSET(0xA0A7A30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET UNITYSDK_OFFSET(0xA0A78F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xA0A7AE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERRESTART_OFFSET UNITYSDK_OFFSET(0xA0A2210)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERROTATEAROUNDCENTER_OFFSET UNITYSDK_OFFSET(0xA0A3570)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERSELECTAROUNDCENTER_OFFSET UNITYSDK_OFFSET(0xA0A43A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHCURSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xA0A5620)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHINSERTIONMATCHSTATE_OFFSET UNITYSDK_OFFSET(0xA0A7FD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHTRANSFERITEMMATERIALS_OFFSET UNITYSDK_OFFSET(0xA0A0F20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A21A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RETREAT_OFFSET UNITYSDK_OFFSET(0xA0A70B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A1710)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_TRANSFERCURRENTINSERTIONITEM_OFFSET UNITYSDK_OFFSET(0xA0A6B10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0A2D80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0A9AF0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xA0A9880)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__PLAYERRESTART_B__16_0_OFFSET UNITYSDK_OFFSET(0xA0A9B30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0AA0B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A9F40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xA0AA010)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xA0AA170)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xA0AA1C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A9FB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A9F50)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0AA100)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard_TypeDefinitionIndex = 64073;

	class InsertionPuzzleBoard : public ::RPG::Client::Prop::BlockScreenHexPuzzle
	{
	public:
		static ::System::String** StaticGet_Field_9_46()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(InsertionPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x48300);
		}
		::UnityEngine::Transform* BoardRoot; // 0xF0
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xF8
		::UnityEngine::AnimationCurve* RevertSpeedCurve; // 0x100
		::UnityEngine::GameObject* TransferEffectPrefab; // 0x108
		::System::Single RotateDuration; // 0x110
		::System::Single RevertDuration; // 0x114
		::System::Single StartPuzzleScaleDuration; // 0x118
		::System::Single FinishPerformDuration; // 0x11C
		::System::Single Field_9_8; // 0x120
		::System::String* OnInsertionPuzzleResetCustomEventString; // 0x128
		::System::String* SuccessEffect; // 0x130
		::System::String* EvInsertionSuccess; // 0x138
		::System::String* EvInsertionMove; // 0x140
		::System::String* EvInsertionMatch; // 0x148
		::System::String* EvInsertionBlock; // 0x150
		::System::String* EvInsertionMissMatch; // 0x158
		::System::String* EvInsertionTeleport; // 0x160
		::System::String* EvInsertionClick; // 0x168
		::System::Boolean IsGameStarted; // 0x170
		::System::Boolean Field_9_19; // 0x171
		::System::Int32 Field_9_20; // 0x174
		::System::Int32 Field_9_21; // 0x178
		::System::Single Field_9_22; // 0x17C
		::RPG::GameCore::PropComponent* Field_9_23; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* Field_9_24; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllSortedTargets; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllInsertions; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllObstacles; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllBoards; // 0x1A8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllTransfers; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* Field_9_30; // 0x1B8
		::RPG::Client::Prop::InsertionPuzzleItem* Field_9_31; // 0x1C0
		::RPG::Client::Prop::InsertionPuzzleItem* Field_9_32; // 0x1C8
		::RPG::Client::Prop::InsertionPuzzleItem* Field_9_33; // 0x1D0
		::Struct_2_2F8FC043285F98CD Field_9_34; // 0x1D8
		::UnityEngine::Vector2 Field_9_35; // 0x1E0
		::Il2CppArray<::Struct_2_2F8FC043285F98CD>* Field_9_36; // 0x1E8
		::System::Collections::Generic::Stack_1<::Struct_2_D1A6E9473F023498>* Field_9_37; // 0x1F0
		::Struct_2_D1A6E9473F023498 Field_9_38; // 0x1F8
		::System::Single Field_9_39; // 0x218
		::Class_1_D27BF54F25500E5F* Field_9_40; // 0x220
		::System::Int32 Field_9_41; // 0x228
		::System::Boolean Field_9_42; // 0x22C
		::System::Int32 Field_9_43; // 0x230
		::System::Boolean Field_9_44; // 0x234
		::System::Int32 Field_9_45; // 0x238

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITBOARD_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::Void PlayerSelectAroundCenter(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERSELECTAROUNDCENTER_OFFSET))(this, a1);
		}

		::System::Void PlayerRotateAroundCenter(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERROTATEAROUNDCENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TransferCurrentInsertionItem(::RPG::Client::Prop::InsertionPuzzleItem* a1, ::Class_3_CD04D3296DF4C842_12* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*, ::Class_3_CD04D3296DF4C842_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_TRANSFERCURRENTINSERTIONITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Retreat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RETREAT_OFFSET))(this);
		}

		::System::Void PlayerRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERRESTART_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_EXIT_OFFSET))(this);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickUndo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickRotateAntiClockwise(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATEANTICLOCKWISE_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickRotateClockwise(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATECLOCKWISE_OFFSET))(this, a1);
		}

		::System::Void OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void Method_9_FD3B916300F77FDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_FD3B916300F77FDA_OFFSET))(this);
		}

		::System::Void RefreshCurSelectState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHCURSELECTSTATE_OFFSET))(this, a1);
		}

		::System::Void RefreshTransferItemMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHTRANSFERITEMMATERIALS_OFFSET))(this);
		}

		::System::Void RefreshInsertionMatchState(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHINSERTIONMATCHSTATE_OFFSET))(this, a1);
		}

		::System::Void Method_9_361C06486F56B4E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_361C06486F56B4E7_OFFSET))(this);
		}

		::System::Void Method_9_D7852DE078ACC1F1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_D7852DE078ACC1F1_OFFSET))(this);
		}

		::System::Void Method_9_CD2062A6438764C3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CD2062A6438764C3_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_9_409AB7E23F0CC56E(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_409AB7E23F0CC56E_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_9_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_9_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_9_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_9_F79BD3CFD27B1BD3(::RPG::Client::Prop::InsertionPuzzleItem* a1, ::Class_3_CD04D3296DF4C842_12* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*, ::Class_3_CD04D3296DF4C842_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_F79BD3CFD27B1BD3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_9_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_9_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_EC2B405D0723571D_OFFSET))(this);
		}

		::System::Void Method_9_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_CD9F3CEFB366C27A_OFFSET))(this);
		}

		::System::Boolean Method_9_B3F3E96454A48B65(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_B3F3E96454A48B65_OFFSET))(this, a1);
		}

		::System::Boolean Method_9_B3F3E96454A48B65_1(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_B3F3E96454A48B65_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_9_2A887DFC7A5BB2CB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_2A887DFC7A5BB2CB_OFFSET))(this);
		}

		::System::Boolean Method_9_C6BFBDE36B40189B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_C6BFBDE36B40189B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_9_75C57EF4A698E5ED(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_75C57EF4A698E5ED_OFFSET))(this, a1, a2, a3, a4);
		}

		::Struct_2_2F8FC043285F98CD Method_9_7BF376E930E7E67F(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2, ::System::Boolean a3)
		{
			return ((::Struct_2_2F8FC043285F98CD(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_7BF376E930E7E67F_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* Method_9_6CD10D704E24693D(::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_6CD10D704E24693D_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* Method_9_C20C792E2EAE589E(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_C20C792E2EAE589E_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* Method_9_6A69F0902812676B(::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_6A69F0902812676B_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_9_EBC8158E718F14FC(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_EBC8158E718F14FC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Method_9_D7FB88C66856998D(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_D7FB88C66856998D_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_9_7BD7E21BE8F1540A(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_7BD7E21BE8F1540A_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* Method_9_8B57DFC12205A632(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_METHOD_9_8B57DFC12205A632_OFFSET))(this, a1);
		}

		::System::Void _PlayerRestart_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__PLAYERRESTART_B__16_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD___IFIXBASEPROXY_ONHOVERITEM_OFFSET))(this, P0, P1);
		}
	};
}
