#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Enum_3_250FDB97D78391EE.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/Enum_3_C3F47346D3138590.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_6CC2897B74C41026_4.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_297;
class Class_1_59FA03683847E03D;
class Class_2_208CC9941471731A_477;
class Class_3_C93CC3D2C2AC4067;
class Class_3_E54D0DE062FD8194;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Battle { class SimpleDropItemSubSystem_SimpleDropItem; }
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ALLOCATEITEM_OFFSET UNITYSDK_OFFSET(0x1779EF90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYACTIVE_OFFSET UNITYSDK_OFFSET(0x177A1420)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYFORCE_OFFSET UNITYSDK_OFFSET(0x177A2CC0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYPOSITION_OFFSET UNITYSDK_OFFSET(0x177A8200)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYVELOCITY_OFFSET UNITYSDK_OFFSET(0x177A2B00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CACHEITEMIDS_OFFSET UNITYSDK_OFFSET(0x1779C5B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET UNITYSDK_OFFSET(0x177A4980)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CHECKSHOULDSHOWTIP_OFFSET UNITYSDK_OFFSET(0x177A6E40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_COMPLETEPICKUPITEM_OFFSET UNITYSDK_OFFSET(0x177A5CF0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CREATEDROPITEM_OFFSET UNITYSDK_OFFSET(0x1779A240)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_DOAUTOROTATE_OFFSET UNITYSDK_OFFSET(0x1779D250)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENABLESHOWIDLEEFFECT_OFFSET UNITYSDK_OFFSET(0x177A3DB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENSUREITEMCACHECAPACITY_OFFSET UNITYSDK_OFFSET(0x1779F5D0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENTERDEADSTAGE_OFFSET UNITYSDK_OFFSET(0x177A63C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_EXECUTEJUMPINGANDFALLING_OFFSET UNITYSDK_OFFSET(0x1779EA80)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FINDDROPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x177A0830)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPEVENTS_OFFSET UNITYSDK_OFFSET(0x177A5DA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPLEVELITEMEVENT_OFFSET UNITYSDK_OFFSET(0x177A65B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_1_OFFSET UNITYSDK_OFFSET(0x177A68C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_OFFSET UNITYSDK_OFFSET(0x177A6010)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESERVERREWARDTIPS_OFFSET UNITYSDK_OFFSET(0x177A6A50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESURFITEMPICKUPEVENTS_OFFSET UNITYSDK_OFFSET(0x177A6740)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FLUSHREMOVECACHE_OFFSET UNITYSDK_OFFSET(0x1779DED0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETCURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779A040)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDEADEFFECTMUTEXDURATION_OFFSET UNITYSDK_OFFSET(0x177A80A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPEFFECT_OFFSET UNITYSDK_OFFSET(0x1779F050)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x177A0C70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x177A77A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETGRAVITY_OFFSET UNITYSDK_OFFSET(0x177A2E70)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMCOLLIDERRADIUS_OFFSET UNITYSDK_OFFSET(0x177A57E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSITION_OFFSET UNITYSDK_OFFSET(0x177A39B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_1_OFFSET UNITYSDK_OFFSET(0x177A73A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_OFFSET UNITYSDK_OFFSET(0x177A5460)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779AC40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERCOLLIDERRADIUS_OFFSET UNITYSDK_OFFSET(0x177A58A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERENTITY_OFFSET UNITYSDK_OFFSET(0x177A4E20)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_1_OFFSET UNITYSDK_OFFSET(0x177A6FB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_OFFSET UNITYSDK_OFFSET(0x177A53C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPRELOADMODELCOUNT_OFFSET UNITYSDK_OFFSET(0x177A0220)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETROTATION_OFFSET UNITYSDK_OFFSET(0x177A0440)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_CURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x17799FB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_ISONLYPICKSHOW_OFFSET UNITYSDK_OFFSET(0x17799F90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GROUNDCHECK_OFFSET UNITYSDK_OFFSET(0x177A2FB0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_HITWALLCHECK_OFFSET UNITYSDK_OFFSET(0x177A3520)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITDROPPARAM_OFFSET UNITYSDK_OFFSET(0x177A1200)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITEXTRAITEMTRAITS_OFFSET UNITYSDK_OFFSET(0x1779F0A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITPICKUPPARAM_OFFSET UNITYSDK_OFFSET(0x1779F2D0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITRANDOMSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1779B670)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSIMULATEMOTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x177A1E00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSURFITEMDATA_OFFSET UNITYSDK_OFFSET(0x177A1770)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALCREATEDROPITEM_OFFSET UNITYSDK_OFFSET(0x1779A470)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETCURRENTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779A0D0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779AD40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_1_OFFSET UNITYSDK_OFFSET(0x177A84B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x1779B230)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALRESETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779B000)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETDROPITEMACTIVE_OFFSET UNITYSDK_OFFSET(0x1779B310)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779AE90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSTARTPICKUP_OFFSET UNITYSDK_OFFSET(0x1779B4C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ISDROPITEMSKIPIDLESTATE_OFFSET UNITYSDK_OFFSET(0x177A4010)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_JUMP_OFFSET UNITYSDK_OFFSET(0x177A2580)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1779B600)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1779B870)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1779DFD0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONGROUND_OFFSET UNITYSDK_OFFSET(0x177A1810)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0x1779F8C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1779BF30)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPANDREMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x177A02F0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPCHECK_OFFSET UNITYSDK_OFFSET(0x177A54C0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPITEM_OFFSET UNITYSDK_OFFSET(0x177A5750)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYBORNEFFECT_OFFSET UNITYSDK_OFFSET(0x177A1090)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYDEADEFFECT_OFFSET UNITYSDK_OFFSET(0x177A7CE0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYIDLEEFFECT_OFFSET UNITYSDK_OFFSET(0x177A3C50)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYWORLDEFFECT_OFFSET UNITYSDK_OFFSET(0x177A79B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PRELOADDROPITEM_OFFSET UNITYSDK_OFFSET(0x1779AAD0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x177A16B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RELEASEITEM_OFFSET UNITYSDK_OFFSET(0x1779BC00)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEDROPITEM_OFFSET UNITYSDK_OFFSET(0x1779B170)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x177A3E10)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_1_OFFSET UNITYSDK_OFFSET(0x1779B080)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779AF20)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETDROPITEMACTIVE_OFFSET UNITYSDK_OFFSET(0x1779B280)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETITEMPOSITION_OFFSET UNITYSDK_OFFSET(0x177A34A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779ADE0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETONGROUND_OFFSET UNITYSDK_OFFSET(0x177A2830)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETRENDERERS_OFFSET UNITYSDK_OFFSET(0x177A3A30)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SET_ISONLYPICKSHOW_OFFSET UNITYSDK_OFFSET(0x17799FA0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMULATEDROPMOTION_OFFSET UNITYSDK_OFFSET(0x1779E380)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_1_OFFSET UNITYSDK_OFFSET(0x177A4510)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_OFFSET UNITYSDK_OFFSET(0x1779B440)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SYNCPOSITIONFROMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x177A0560)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRIMTOMAXITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1779F680)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRYINITTARGETYOFFSET_OFFSET UNITYSDK_OFFSET(0x177A7180)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEBORNEFFECT_OFFSET UNITYSDK_OFFSET(0x1779C740)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATECUSTOMIZEDPICKUP_OFFSET UNITYSDK_OFFSET(0x177A44A0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEONLYPICKSHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x1779C7E0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKFLYING_OFFSET UNITYSDK_OFFSET(0x1779CB90)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKUPCHECK_OFFSET UNITYSDK_OFFSET(0x1779D100)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPROXIMITYPICKUP_OFFSET UNITYSDK_OFFSET(0x177A4080)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1779C990)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177A8600)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x177A8920)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177A89B0)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x177A8A40)
#define MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x177A8AE0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SimpleDropItemSubSystem_TypeDefinitionIndex = 76808;

	class SimpleDropItemSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::Battle::SimpleDropItemSubSystem*>
	{
	public:
		static ::System::Boolean* StaticGet__IsOnlyPickShow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SimpleDropItemSubSystem_TypeDefinitionIndex)->GetStaticField(0xE7F0);
		}
		// static const ::System::Int32 ScatterAngleCount = 0x12; // 0x0
		// static const ::System::Single AirborneThreshold; // 0x0
		// static const ::System::Single SpherecastRadius; // 0x0
		::System::Collections::Generic::List_1<::System::Int32>* _updateCache; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _removeCache; // 0x18
		::Il2CppArray<::UnityEngine::RaycastHit>* _dropHits; // 0x20
		::System::Collections::Generic::Stack_1<::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*>* _itemPool; // 0x28
		::Il2CppArray<::System::Int32>* _scatterAngleRandomSequence; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* _deadEffectNextPlayableTimeByItemID; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _maxItemCountByItemID; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*>* _items; // 0x48
		::System::Int32 _nextHandleId; // 0x50
		::System::Int32 _scatterAngleId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsOnlyPickShow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_ISONLYPICKSHOW_OFFSET))();
		}

		static ::System::Void set_IsOnlyPickShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SET_ISONLYPICKSHOW_OFFSET))(value);
		}

		static ::System::Int32 get_CurrentItemCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GET_CURRENTITEMCOUNT_OFFSET))();
		}

		static ::System::Int32 GetCurrentItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETCURRENTITEMCOUNT_OFFSET))(itemID);
		}

		static ::Struct_2_6CC2897B74C41026_4 CreateDropItem(::System::Int32 itemID, ::System::Int32 count, ::UnityEngine::Vector3 velocity, ::Enum_3_337A0D7142819EB2 dropItemSource, ::UnityEngine::Vector3 pos, ::System::Single faceAngle, ::System::Boolean defaultActive, ::System::Int32 overridePickType, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> serverIndex, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* extraItemTraits, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>* onCreated)
		{
			return ((::Struct_2_6CC2897B74C41026_4(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CREATEDROPITEM_OFFSET))(itemID, count, velocity, dropItemSource, pos, faceAngle, defaultActive, overridePickType, serverIndex, extraItemTraits, onCreated);
		}

		static ::System::Void PreloadDropItem(::System::Int32 itemID, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PRELOADDROPITEM_OFFSET))(itemID, count);
		}

		static ::System::Int32 GetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETMAXITEMCOUNT_OFFSET))(itemID);
		}

		static ::System::Void SetMaxItemCount(::System::Int32 itemID, ::System::Int32 maxItemCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETMAXITEMCOUNT_OFFSET))(itemID, maxItemCount);
		}

		static ::System::Void ResetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_OFFSET))(itemID);
		}

		static ::System::Void ResetMaxItemCount_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RESETMAXITEMCOUNT_1_OFFSET))();
		}

		static ::System::Void RemoveDropItem(::Struct_2_6CC2897B74C41026_4 handle)
		{
			return ((::System::Void(*)(::Struct_2_6CC2897B74C41026_4))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEDROPITEM_OFFSET))(handle);
		}

		static ::System::Void SetDropItemActive(::Struct_2_6CC2897B74C41026_4 handle, ::System::Boolean value)
		{
			return ((::System::Void(*)(::Struct_2_6CC2897B74C41026_4, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETDROPITEMACTIVE_OFFSET))(handle, value);
		}

		static ::System::Void StartPickUp(::Struct_2_6CC2897B74C41026_4 handle)
		{
			return ((::System::Void(*)(::Struct_2_6CC2897B74C41026_4))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_OFFSET))(handle);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void CacheItemIds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CACHEITEMIDS_OFFSET))(this);
		}

		::Struct_2_6CC2897B74C41026_4 InternalCreateDropItem(::System::Int32 itemID, ::System::Int32 count, ::UnityEngine::Vector3 velocity, ::Enum_3_337A0D7142819EB2 dropItemSource, ::UnityEngine::Vector3 pos, ::System::Single faceAngle, ::System::Boolean defaultActive, ::System::Int32 overridePickType, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> serverIndex, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* extraItemTraits, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>* onCreated)
		{
			return ((::Struct_2_6CC2897B74C41026_4(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALCREATEDROPITEM_OFFSET))(this, itemID, count, velocity, dropItemSource, pos, faceAngle, defaultActive, overridePickType, serverIndex, extraItemTraits, onCreated);
		}

		static ::System::Int32 GetPreloadModelCount(::Class_2_208CC9941471731A_477* itemTemplateData, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::Class_2_208CC9941471731A_477*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPRELOADMODELCOUNT_OFFSET))(itemTemplateData, count);
		}

		::System::Int32 InternalGetCurrentItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETCURRENTITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Int32 InternalGetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALGETMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void InternalSetMaxItemCount(::System::Int32 itemID, ::System::Int32 maxItemCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETMAXITEMCOUNT_OFFSET))(this, itemID, maxItemCount);
		}

		::System::Void InternalResetMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALRESETMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void TrimToMaxItemCount(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRIMTOMAXITEMCOUNT_OFFSET))(this, itemID);
		}

		::System::Void OnModelLoaded(::System::Int32 handleId, ::Foundation::AssetPath path, ::UnityEngine::GameObject* go, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>* onCreated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Action_1<::Struct_2_6CC2897B74C41026_4>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONMODELLOADED_OFFSET))(this, handleId, path, go, onCreated);
		}

		static ::UnityEngine::Collider* FindDropCollider(::UnityEngine::GameObject* go, ::MoleMole::Config::ItemDropEffectSetting* setting)
		{
			return ((::UnityEngine::Collider*(*)(::UnityEngine::GameObject*, ::MoleMole::Config::ItemDropEffectSetting*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FINDDROPCOLLIDER_OFFSET))(go, setting);
		}

		static ::UnityEngine::Transform* GetDropItemAttachPoint(::UnityEngine::GameObject* go, ::System::String* attachPointName)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMATTACHPOINT_OFFSET))(go, attachPointName);
		}

		static ::UnityEngine::Quaternion GetRotation(::UnityEngine::Vector3 forward)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETROTATION_OFFSET))(forward);
		}

		::System::Void InitRandomSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITRANDOMSEQUENCE_OFFSET))(this);
		}

		::System::Void EnsureItemCacheCapacity(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENSUREITEMCACHECAPACITY_OFFSET))(this, capacity);
		}

		static ::Enum_3_250FDB97D78391EE GetDropEffect(::Enum_3_337A0D7142819EB2 dropItemSource)
		{
			return ((::Enum_3_250FDB97D78391EE(*)(::Enum_3_337A0D7142819EB2))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPEFFECT_OFFSET))(dropItemSource);
		}

		static ::System::Void InitPickUpParam(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITPICKUPPARAM_OFFSET))(item);
		}

		static ::System::Void InitExtraItemTraits(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* extraItemTraits)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITEXTRAITEMTRAITS_OFFSET))(item, extraItemTraits);
		}

		static ::System::Void InitSurfItemData(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::Class_1_59FA03683847E03D* surfTrait)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::Class_1_59FA03683847E03D*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSURFITEMDATA_OFFSET))(item, surfTrait);
		}

		static ::System::Single RandomRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RANDOMRANGE_OFFSET))(min, max);
		}

		::System::Void InitDropParam(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITDROPPARAM_OFFSET))(this, item);
		}

		static ::System::Boolean Jump(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_JUMP_OFFSET))(item);
		}

		::System::Void InitSimulateMotionParams(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INITSIMULATEMOTIONPARAMS_OFFSET))(this, item);
		}

		::System::Void ExecuteJumpingAndFalling(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_EXECUTEJUMPINGANDFALLING_OFFSET))(this, deltaTime, item);
		}

		static ::System::Void GroundCheck(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GROUNDCHECK_OFFSET))(item);
		}

		::System::Void HitWallCheck(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_HITWALLCHECK_OFFSET))(this, deltaTime, item);
		}

		static ::System::Void SimulateDropMotion(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SIMULATEDROPMOTION_OFFSET))(deltaTime, item);
		}

		static ::UnityEngine::Vector3 GetGravity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETGRAVITY_OFFSET))(item);
		}

		static ::System::Void OnGround(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean isPosYAlmostOnGround)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ONGROUND_OFFSET))(item, isPosYAlmostOnGround);
		}

		static ::System::Void UpdateBornEffect(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEBORNEFFECT_OFFSET))(deltaTime, item);
		}

		static ::System::Void UpdateStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATESTAGE_OFFSET))(item, deltaTime);
		}

		static ::System::Void UpdateOnlyPickShowStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEONLYPICKSHOWSTAGE_OFFSET))(item, deltaTime);
		}

		static ::System::Void UpdateCustomizedPickUp(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATECUSTOMIZEDPICKUP_OFFSET))(item);
		}

		static ::System::Boolean CanPickUpSummerSurfDropItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CANPICKUPSUMMERSURFDROPITEM_OFFSET))(item);
		}

		static ::System::Void UpdateProximityPickUp(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPROXIMITYPICKUP_OFFSET))(item);
		}

		static ::System::Void StartPickUp_1(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_STARTPICKUP_1_OFFSET))(item);
		}

		::System::Void InternalStartPickUp(::System::Int32 handleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSTARTPICKUP_OFFSET))(this, handleId);
		}

		static ::System::Void UpdatePickFlying(::System::Single deltaTime, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::System::Single, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKFLYING_OFFSET))(deltaTime, item);
		}

		::System::Void UpdatePickUpCheck(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_UPDATEPICKUPCHECK_OFFSET))(this, item);
		}

		static ::System::Boolean PickUpCheck(::UnityEngine::Vector3 itemPosToTargetPos, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPCHECK_OFFSET))(itemPosToTargetPos, item);
		}

		::System::Void PickUpItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPITEM_OFFSET))(this, item);
		}

		::System::Boolean CompletePickUpItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean enterDeadStage)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_COMPLETEPICKUPITEM_OFFSET))(this, item, enterDeadStage);
		}

		static ::System::Void FirePickUpEvents(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPEVENTS_OFFSET))(item);
		}

		static ::System::Void FirePickUpLevelItemEvent(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREPICKUPLEVELITEMEVENT_OFFSET))(item);
		}

		static ::System::Void FireSurfItemPickUpEvents(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESURFITEMPICKUPEVENTS_OFFSET))(item);
		}

		static ::System::Void FireRewardTip(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_OFFSET))(item);
		}

		static ::System::Void FireRewardTip_1(::System::Int32 itemTemplateId, ::System::Int32 itemCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIREREWARDTIP_1_OFFSET))(itemTemplateId, itemCount);
		}

		static ::System::Void FireServerRewardTips(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>* serverRewardDropItems, ::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C serverIndex, ::System::Int32 itemTemplateID, ::System::Int32 modelIndex, ::System::Int32 modelCount)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_3_E54D0DE062FD8194*>*, ::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FIRESERVERREWARDTIPS_OFFSET))(serverRewardDropItems, serverIndex, itemTemplateID, modelIndex, modelCount);
		}

		static ::System::Boolean CheckShouldShowTip(::System::Int32 cfgId, ::Class_2_208CC9941471731A_477*& item)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Class_2_208CC9941471731A_477*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_CHECKSHOULDSHOWTIP_OFFSET))(cfgId, item);
		}

		static ::MoleMole::EntityHandle GetPickerEntity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::MoleMole::EntityHandle(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERENTITY_OFFSET))(item);
		}

		static ::UnityEngine::Vector3 GetPickerPosition(::MoleMole::EntityHandle pickerEntity, ::Class_3_C93CC3D2C2AC4067* pickerModelComponent, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_OFFSET))(pickerEntity, pickerModelComponent, item);
		}

		static ::UnityEngine::Vector3 GetPickerPosition_1(::MoleMole::EntityHandle pickerEntity, ::Class_3_C93CC3D2C2AC4067* pickerModelComponent, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean& useConfigPosition)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::EntityHandle, ::Class_3_C93CC3D2C2AC4067*, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERPOSITION_1_OFFSET))(pickerEntity, pickerModelComponent, item, useConfigPosition);
		}

		static ::System::Void TryInitTargetYOffset(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_TRYINITTARGETYOFFSET_OFFSET))(item);
		}

		static ::System::Boolean GetItemPosToTargetPos(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3& itemPosToTargetPos)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_OFFSET))(item, itemPosToTargetPos);
		}

		static ::System::Boolean GetItemPosToTargetPos_1(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3& itemPosToTargetPos, ::System::Boolean& useConfigPosition)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSTOTARGETPOS_1_OFFSET))(item, itemPosToTargetPos, useConfigPosition);
		}

		static ::System::Single GetItemColliderRadius(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Single(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMCOLLIDERRADIUS_OFFSET))(item);
		}

		static ::System::Single GetPickerColliderRadius(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Single(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETPICKERCOLLIDERRADIUS_OFFSET))(item);
		}

		static ::System::Void PlayBornEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYBORNEFFECT_OFFSET))(item);
		}

		static ::System::Void PlayIdleEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYIDLEEFFECT_OFFSET))(item);
		}

		::System::Void PlayDeadEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYDEADEFFECT_OFFSET))(this, item);
		}

		::System::Single GetDeadEffectMutexDuration(::System::Int32 itemID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDEADEFFECTMUTEXDURATION_OFFSET))(this, itemID);
		}

		::System::Void EnterDeadStage(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENTERDEADSTAGE_OFFSET))(this, item);
		}

		static ::System::Void PlayWorldEffect(::System::String* effectName, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 forward, ::System::Action_1<::MoleMole::Battle::Entity*>* onCreated, ::UnityEngine::Transform* attachTransform)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::MoleMole::Battle::Entity*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PLAYWORLDEFFECT_OFFSET))(effectName, position, forward, onCreated, attachTransform);
		}

		static ::System::String* GetDropItemEffectName(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::Enum_3_C3F47346D3138590 phase)
		{
			return ((::System::String*(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::Enum_3_C3F47346D3138590))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETDROPITEMEFFECTNAME_OFFSET))(item, phase);
		}

		static ::System::Boolean IsDropItemSkipIdleState(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ISDROPITEMSKIPIDLESTATE_OFFSET))(item);
		}

		static ::System::Boolean EnableShowIdleEffect(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Boolean(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ENABLESHOWIDLEEFFECT_OFFSET))(item);
		}

		static ::System::Void DoAutoRotate(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_DOAUTOROTATE_OFFSET))(item);
		}

		::System::Void InternalSetDropItemActive(::System::Int32 handleId, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALSETDROPITEMACTIVE_OFFSET))(this, handleId, value);
		}

		static ::System::Void ApplyActive(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYACTIVE_OFFSET))(item);
		}

		static ::System::Void ApplyPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYPOSITION_OFFSET))(item);
		}

		static ::UnityEngine::Vector3 GetItemPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_GETITEMPOSITION_OFFSET))(item);
		}

		static ::System::Void SetItemPosition(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETITEMPOSITION_OFFSET))(item, position);
		}

		static ::System::Void SyncPositionFromTransform(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SYNCPOSITIONFROMTRANSFORM_OFFSET))(item);
		}

		static ::System::Void SetOnGround(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean value)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETONGROUND_OFFSET))(item, value);
		}

		static ::System::Void ApplyVelocity(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYVELOCITY_OFFSET))(item, velocity);
		}

		static ::System::Void ApplyForce(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::UnityEngine::Vector3 force)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_APPLYFORCE_OFFSET))(item, force);
		}

		static ::System::Void SetRenderers(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item, ::System::Boolean value)
		{
			return ((::System::Void(*)(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_SETRENDERERS_OFFSET))(item, value);
		}

		::System::Void InternalRemoveDropItem(::System::Int32 handleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_OFFSET))(this, handleId);
		}

		::System::Void InternalRemoveDropItem_1(::System::Int32 handleId, ::System::Boolean enterDeadStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_INTERNALREMOVEDROPITEM_1_OFFSET))(this, handleId, enterDeadStage);
		}

		::System::Void PickUpAndRemoveDropItem(::System::Int32 handleId, ::System::Boolean enterDeadStage)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_PICKUPANDREMOVEDROPITEM_OFFSET))(this, handleId, enterDeadStage);
		}

		::System::Void FlushRemoveCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_FLUSHREMOVECACHE_OFFSET))(this);
		}

		::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* AllocateItem()
		{
			return ((::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_ALLOCATEITEM_OFFSET))(this);
		}

		::System::Void ReleaseItem(::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::SimpleDropItemSubSystem_SimpleDropItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_RELEASEITEM_OFFSET))(this, item);
		}

		static ::System::Void RemoveEffect(::MoleMole::EntityHandle& effectHandle)
		{
			return ((::System::Void(*)(::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM_REMOVEEFFECT_OFFSET))(effectHandle);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_SIMPLEDROPITEMSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
