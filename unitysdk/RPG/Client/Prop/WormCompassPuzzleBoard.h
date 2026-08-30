#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::Prop { class WormCompassBlockGridData; }
namespace RPG::Client::Prop { class WormCompassFinishRoute; }
namespace RPG::Client::Prop { class WormCompassItemGridData; }
namespace RPG::Client::Prop { class WormCompassPuzzleBlock; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace RPG::Client::Prop { class WormCompassPuzzleItemBase; }
namespace RPG::Client::Prop { class WormCompassPuzzleRingController; }
namespace RPG::Client::Prop { class WormCompassPuzzleTreasureBox; }
namespace RPG::Client::Prop { class WormCompassPuzzleWormAvatar; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET UNITYSDK_OFFSET(0x17B3CD70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B38F30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0x17B34420)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET UNITYSDK_OFFSET(0x17B3C030)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0x17B3BB10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET UNITYSDK_OFFSET(0x17B3BDB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET UNITYSDK_OFFSET(0x17B3BC60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET UNITYSDK_OFFSET(0x17B3BFE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x17B336B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET UNITYSDK_OFFSET(0x17B39D30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET UNITYSDK_OFFSET(0x17B38A70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x17B33710)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x17B3BF00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x17B3A400)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET UNITYSDK_OFFSET(0x17B39C50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_0076C796B2045359_OFFSET UNITYSDK_OFFSET(0x17B385E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x17B3BAC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x17B3C1F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_37D641371E4C8F58_OFFSET UNITYSDK_OFFSET(0x17B3DBC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x17B3C880)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x17B36A10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x17B33E50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_88AA25DE39CF5532_OFFSET UNITYSDK_OFFSET(0x17B3C080)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_8DCD1FEC09DA5176_OFFSET UNITYSDK_OFFSET(0x17B34840)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_9501A7230F36162B_OFFSET UNITYSDK_OFFSET(0x17B3D100)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_A56385E6706FA723_OFFSET UNITYSDK_OFFSET(0x17B37CB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x17B39140)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x17B3DF70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_DFF92D0A13F44C53_OFFSET UNITYSDK_OFFSET(0x17B38840)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_FDF9B21BA16000B3_OFFSET UNITYSDK_OFFSET(0x17B36B40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x17B3DA30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x17B3CC10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17B3DC30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET UNITYSDK_OFFSET(0x17B3C250)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET UNITYSDK_OFFSET(0x17B3C480)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET UNITYSDK_OFFSET(0x17B3C6B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET UNITYSDK_OFFSET(0x17B3D980)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x17B3C760)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET UNITYSDK_OFFSET(0x17B3C810)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0x17B3A300)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET UNITYSDK_OFFSET(0x17B3B4C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET UNITYSDK_OFFSET(0x17B3D7A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x17B36AF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x17B3A450)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B3E2F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CTOR_OFFSET UNITYSDK_OFFSET(0x17B3E170)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET UNITYSDK_OFFSET(0x17B3E4E0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard_TypeDefinitionIndex = 78454;

	class WormCompassPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::String** StaticGet__PuzzleFinishSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x653F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FIIICPCKMGM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x653F8);
		}
		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65400);
		}
		static ::System::String** StaticGet__RouteStartSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65408);
		}
		static ::RPG::Client::Prop::WormCompassPuzzleWormAvatar** StaticGet_GlobalAvatar()
		{
			return (::RPG::Client::Prop::WormCompassPuzzleWormAvatar**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65410);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__SelectRingSoundEvent()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65418);
		}
		static ::System::String** StaticGet__RouteStopSoundEvent()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x65420);
		}
		static ::System::Int32* StaticGet_HBOJKDNBMOI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14F20);
		}
		static ::System::UInt32* StaticGet_ACHIEVEMENT_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14F24);
		}
		static ::System::Int32* StaticGet_ECNGBAKAFAD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14F28);
		}
		static ::System::Int32* StaticGet_AKOMNBHHEHK()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14F2C);
		}
		static ::System::Int32* StaticGet_LHAGNEKFEFD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleBoard_TypeDefinitionIndex)->GetStaticField(0x14F30);
		}
		::System::Int32 Row; // 0x48
		::System::Int32 Col; // 0x4C
		::UnityEngine::GameObject* ItemPrefab; // 0x50
		::UnityEngine::GameObject* BlockPrefab; // 0x58
		::UnityEngine::GameObject* RingPrefab; // 0x60
		::UnityEngine::GameObject* AvatarPrefab; // 0x68
		::UnityEngine::GameObject* TreasureBoxPrefab; // 0x70
		::UnityEngine::GameObject* ConfirmButton; // 0x78
		::RPG::Client::Prop::WormCompassItemGridData* Items; // 0x80
		::RPG::Client::Prop::WormCompassBlockGridData* Blocks; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassFinishRoute*>* FinishRoutes; // 0x90
		::System::String* SavedGroupPropertyName; // 0x98
		::System::String* StartScanEffectPath; // 0xA0
		::RPG::Client::TriggerEffectParams* BLIHEJNLKCE; // 0xA8
		::System::String* SelectingEffectPath; // 0xB0
		::System::String* NightSelectingEffectPath; // 0xB8
		::RPG::Client::TriggerEffectParams* OCFPGMMCNEL; // 0xC0
		::RPG::Client::MonoEffect* PLEJLCBFGPK; // 0xC8
		::System::Boolean IsDayPuzzle; // 0xD0
		::System::Single ItemDelayShowAfterScan; // 0xD4
		::RPG::GameCore::DynamicString* RouteReadyEvent; // 0xD8
		::System::Single RouteFinishDelay; // 0xE0
		::System::Single FadeOutDelay; // 0xE4
		::System::Single JDFOMKLAHHH; // 0xE8
		::System::Boolean BCJOKIAACGL; // 0xEC
		::System::Boolean PEBIGEKMOIO; // 0xED
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleRingController*>* MMMACKMEMOM; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* LDBLEDBFCIP; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleBlock*>* FBGDOJMIFAA; // 0x100
		::RPG::Client::Prop::WormCompassPuzzleWormAvatar* MLFLPFMLKNF; // 0x108
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleTreasureBox*>* LILKJIOAGND; // 0x110
		::System::Int32 JBNMNBCIFEP; // 0x118
		::System::Boolean GNELNOEHDOJ; // 0x11C
		::System::Boolean APBGMHOKGFP; // 0x11D
		::System::Boolean AGOJGCEPLCB; // 0x11E
		::System::Boolean MHLHNOLKFNE; // 0x11F
		::System::Boolean EBKJLMIMDNF; // 0x120
		::RPG::Client::Prop::WormCompassFinishRoute* FFHFMJDCKFE; // 0x128
		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GFJELPEPEBC; // 0x130
		::UnityEngine::UI::Image* IGHDBONJEEP; // 0x138
		::RPG::Client::Prop::WormCompassPuzzleItem* StartPoint; // 0x140
		::RPG::Client::Prop::WormCompassPuzzleItem* EndPoint; // 0x148
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* LMFPAPJFGJL; // 0x150
		::System::Int32 AAEOFPCBKBI; // 0x158
		::System::Int32 EIMFHKCHCGE; // 0x15C
		::System::Int32 NNCAJLGKKAK; // 0x160
		::System::String* FJOFBMCPCLM; // 0x168
		::System::Int32 ABDINKCBNJM; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__CCTOR_OFFSET))();
		}

		::System::String* GetSelectEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_763B70E1B527E566()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_763B70E1B527E566_OFFSET))(this);
		}

		::System::Void Method_6_8DCD1FEC09DA5176()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_8DCD1FEC09DA5176_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Method_6_FDF9B21BA16000B3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_FDF9B21BA16000B3_OFFSET))(this, a1);
		}

		::System::Void Method_6_DFF92D0A13F44C53(::RPG::Client::Prop::WormCompassPuzzleItemBase* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItemBase*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_DFF92D0A13F44C53_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideAllShowItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_6_A56385E6706FA723()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_A56385E6706FA723_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void RotateRing(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_1C6AD2DA62FB6EB1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1C6AD2DA62FB6EB1_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetOriItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleBlock* GetOriBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleBlock*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassFinishRoute* GetRouteFinish()
		{
			return ((::RPG::Client::Prop::WormCompassFinishRoute*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetFinishTreasureBox()
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* Method_6_88AA25DE39CF5532(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_88AA25DE39CF5532_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TriggerEffectParams* GetEffectParams(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::UnityEngine::Transform* a5, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a6)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Transform*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void OnDirectionLeft(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET))(this, a1);
		}

		::System::Void OnDirectionRight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET))(this, a1);
		}

		::System::Void OnLeftRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnRightRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnStartBtn(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Void Method_6_45AA2F5085C2C40D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_45AA2F5085C2C40D_OFFSET))(this);
		}

		::System::Void Method_6_9501A7230F36162B(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_9501A7230F36162B_OFFSET))(this, a1);
		}

		::System::Void Method_6_6D93101E4CE10A96()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_6D93101E4CE10A96_OFFSET))(this);
		}

		::System::Void OnResetClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET))(this, a1);
		}

		::System::Void OnCancelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET))(this);
		}

		::System::Void Method_6_37D641371E4C8F58(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_37D641371E4C8F58_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void SelectEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET))(this, a1);
		}

		::System::Void CancelSelectEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET))(this);
		}

		::System::Void Method_6_0076C796B2045359()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_0076C796B2045359_OFFSET))(this);
		}

		::System::Void Method_6_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_METHOD_6_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__47_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET))(this, a1, a2);
		}
	};
}
