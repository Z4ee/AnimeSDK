#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockScreenHexPuzzle.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace RPG::Client::Prop { class CablePuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBEFBB0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDBEFAE0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0xDBF4170)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET UNITYSDK_OFFSET(0xDBF05E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDBF1850)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDBF1110)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDBEF830)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDBEFB60)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0xDBF30F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_2_OFFSET UNITYSDK_OFFSET(0xDBF40E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xDBF0D80)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_AEE7F196DE963C06_OFFSET UNITYSDK_OFFSET(0xDBEF5E0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_B8D56F983FF1867B_OFFSET UNITYSDK_OFFSET(0xDBF29F0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_C20A7E9DF3996211_OFFSET UNITYSDK_OFFSET(0xDBF0E10)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_EB5D3509EE8249D5_OFFSET UNITYSDK_OFFSET(0xDBF1E40)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_EBAFE4A8C3434D34_OFFSET UNITYSDK_OFFSET(0xDBF1F80)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xDBF3030)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F5B903EF64E6B73E_OFFSET UNITYSDK_OFFSET(0xDBF3180)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F714A8A870B4D9F4_OFFSET UNITYSDK_OFFSET(0xDBF2760)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xDBF02D0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xDBF0820)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET UNITYSDK_OFFSET(0xDBF2810)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDBF0890)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xDBF09B0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET UNITYSDK_OFFSET(0xDBF1B00)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET UNITYSDK_OFFSET(0xDBF2AB0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET UNITYSDK_OFFSET(0xDBF2F40)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDBEEDF0)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xDBF4580)
#define RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0xDBF4180)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CablePuzzleBoard_TypeDefinitionIndex = 78131;

	class CablePuzzleBoard : public ::RPG::Client::Prop::BlockScreenHexPuzzle
	{
	public:
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CablePuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x62D50);
		}
		::System::Single RotateSpeed; // 0xF0
		::System::String* ResetTriggerCustomString; // 0xF8
		::UnityEngine::Vector2Int ControllerModeInitHighlightPos; // 0x100
		::System::Single DelayResetTime; // 0x108
		::UnityEngine::AnimationCurve* RotationSpeedCurve; // 0x110
		::UnityEngine::AnimationCurve* InitAnimationCurve; // 0x118
		::UnityEngine::Vector2Int CenterCoord; // 0x120
		::System::Single InitAnimationDuration; // 0x128
		::System::Single CenterItemInitAnimationHeight; // 0x12C
		::System::Single CenterLightDelay; // 0x130
		::System::Single LightDelay; // 0x134
		::System::String* RotateSoundEvent; // 0x138
		::System::String* ConnectSoundEvent; // 0x140
		::System::String* FinishSoundEvent; // 0x148
		::System::Int32 StartTime; // 0x150
		::System::Boolean PIPLLENMLIM; // 0x154
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GIOGDLNKNLM; // 0x158
		::System::Int32 KBDCCKCPCHH; // 0x160
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* GCIKKMGIPIO; // 0x168
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* NKAKNMGMFGA; // 0x170
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* CIKDOOGLNDF; // 0x178
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* OINCGJJMAEF; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* KPDILHMLDBH; // 0x188
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* BPBJMKENIJH; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* HPFCNGBDEGD; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* NEOLGHBOLKB; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* BHKLPKOPFAE; // 0x1A8
		::System::Boolean GBAHDJFPPBC; // 0x1B0
		::System::Boolean PMMNGNJMOJP; // 0x1B1
		::RPG::Client::Prop::CablePuzzleItem* HOIMBOJIOPB; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void InitControllerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITCONTROLLERMODE_OFFSET))(this);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_9_C20A7E9DF3996211()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_C20A7E9DF3996211_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void RefreshItemsConnectionRelation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REFRESHITEMSCONNECTIONRELATION_OFFSET))(this);
		}

		::System::Void ReportStep(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_REPORTSTEP_OFFSET))(this, a1);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_ONFINISH_OFFSET))(this);
		}

		::System::Void Method_9_AEE7F196DE963C06(::RPG::Client::Prop::CablePuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_AEE7F196DE963C06_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Method_9_F5B903EF64E6B73E(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F5B903EF64E6B73E_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_9_EB5D3509EE8249D5(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a2, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a3, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a4, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_EB5D3509EE8249D5_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_9_EBAFE4A8C3434D34(::RPG::Client::Prop::CablePuzzleItem* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::CablePuzzleItem*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_EBAFE4A8C3434D34_OFFSET))(this, a1, a2);
		}

		::System::Void Method_9_B8D56F983FF1867B(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_B8D56F983FF1867B_OFFSET))(this, a1);
		}

		::System::Void Method_9_F714A8A870B4D9F4(::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::CablePuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F714A8A870B4D9F4_OFFSET))(this, a1);
		}

		::System::Void Method_9_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_9_627C7524E98F4AC5_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_METHOD_9_627C7524E98F4AC5_2_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CABLEPUZZLEBOARD_GET_ISFINISH_OFFSET))(this);
		}
	};
}
