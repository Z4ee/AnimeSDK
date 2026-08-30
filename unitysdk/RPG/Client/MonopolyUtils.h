#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyContentType.h"
#include "unitysdk/RPG/GameCore/MonopolyCellType.h"
#include "unitysdk/RPG/GameCore/MonopolyEventType.h"
#include "unitysdk/RPG/GameCore/MonopolyMapCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_102;
class Class_1_D33B7D6901AE39E9;
class Class_2_F3C4BC00835CFDCA;
class Class_2_FD51057495DB654F;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyAssetDataItem; }
namespace RPG::Client { class MonopolyEventDataItem; }
namespace RPG::Client { class MonopolyGameData; }
namespace RPG::Client { class MonopolyShopDataItem; }
namespace RPG::GameCore { class MonopolyDisplayCellRow; }
namespace RPG::GameCore { class MonopolyMapCell; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYUTILS_ADDTRIGGERIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x19604C90)
#define RPG_CLIENT_MONOPOLYUTILS_ADDUI3DVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x19604AA0)
#define RPG_CLIENT_MONOPOLYUTILS_ADDVISUALEFFECTTOPATH_OFFSET UNITYSDK_OFFSET(0x19604B90)
#define RPG_CLIENT_MONOPOLYUTILS_CREATEBARRIER_OFFSET UNITYSDK_OFFSET(0x19602860)
#define RPG_CLIENT_MONOPOLYUTILS_CREATECLICKITEMENTITY_OFFSET UNITYSDK_OFFSET(0x19602A70)
#define RPG_CLIENT_MONOPOLYUTILS_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x195FF860)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYBARRIERENTITY_OFFSET UNITYSDK_OFFSET(0x196014C0)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYCLICKITEMENTITY_OFFSET UNITYSDK_OFFSET(0x19602B00)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYMAP_OFFSET UNITYSDK_OFFSET(0x19600C30)
#define RPG_CLIENT_MONOPOLYUTILS_DOTOUCHBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x19603C30)
#define RPG_CLIENT_MONOPOLYUTILS_DOTOUCH_OFFSET UNITYSDK_OFFSET(0x19603520)
#define RPG_CLIENT_MONOPOLYUTILS_FETCHCURRENCYDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x195FD5A0)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILCONTRIBUTIONQUESTID_OFFSET UNITYSDK_OFFSET(0x19607960)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILPHASEREWARDID_OFFSET UNITYSDK_OFFSET(0x19607AC0)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILQUESTAREAID_OFFSET UNITYSDK_OFFSET(0x19606F00)
#define RPG_CLIENT_MONOPOLYUTILS_GETCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19601180)
#define RPG_CLIENT_MONOPOLYUTILS_GETCONTRIBUTIONQUESTIDS_OFFSET UNITYSDK_OFFSET(0x195F96D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETCOUNTEDEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x196065D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETDAILYSETTLEANIMDURATION_OFFSET UNITYSDK_OFFSET(0x19606C10)
#define RPG_CLIENT_MONOPOLYUTILS_GETEMPTYBUFFID_OFFSET UNITYSDK_OFFSET(0x196064D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETGACHAAMAXFILLNUM_OFFSET UNITYSDK_OFFSET(0x19606710)
#define RPG_CLIENT_MONOPOLYUTILS_GETGACHAQUESTIONRESOURCEID_OFFSET UNITYSDK_OFFSET(0x19606810)
#define RPG_CLIENT_MONOPOLYUTILS_GETGAMEBASERATIOVALUE_OFFSET UNITYSDK_OFFSET(0x19606A10)
#define RPG_CLIENT_MONOPOLYUTILS_GETGROUNDDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x19603DD0)
#define RPG_CLIENT_MONOPOLYUTILS_GETJACKPOTLEVELBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x195EBC00)
#define RPG_CLIENT_MONOPOLYUTILS_GETMAPCELLENTITY_OFFSET UNITYSDK_OFFSET(0x19603270)
#define RPG_CLIENT_MONOPOLYUTILS_GETMAXFRIENDLIKEREWARDVALUE_OFFSET UNITYSDK_OFFSET(0x19606B10)
#define RPG_CLIENT_MONOPOLYUTILS_GETMINIGAMEMAXRAISEVALUE_OFFSET UNITYSDK_OFFSET(0x19606910)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLERANDOMMAXNUM_OFFSET UNITYSDK_OFFSET(0x196063D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKCD_OFFSET UNITYSDK_OFFSET(0x196062D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKDURATION_OFFSET UNITYSDK_OFFSET(0x196061D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEID_OFFSET UNITYSDK_OFFSET(0x195E8410)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEITEMROW_OFFSET UNITYSDK_OFFSET(0x19605FC0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYID_OFFSET UNITYSDK_OFFSET(0x195E8080)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYITEMROW_OFFSET UNITYSDK_OFFSET(0x19605E60)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEID_OFFSET UNITYSDK_OFFSET(0x195E82F0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEITEMROW_OFFSET UNITYSDK_OFFSET(0x19605F10)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYMAINPAGENAME_OFFSET UNITYSDK_OFFSET(0x19606070)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYREROLLITEMID_OFFSET UNITYSDK_OFFSET(0x195E81A0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYSOCIALEVENTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x196060D0)
#define RPG_CLIENT_MONOPOLYUTILS_GETNUMBERLISTFROMLISTSTRING_OFFSET UNITYSDK_OFFSET(0x19607C20)
#define RPG_CLIENT_MONOPOLYUTILS_GETREMAINSTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x19608110)
#define RPG_CLIENT_MONOPOLYUTILS_GETVALUELISTFROMDICTSTRING_OFFSET UNITYSDK_OFFSET(0x19607D90)
#define RPG_CLIENT_MONOPOLYUTILS_GETVISUALEFFECTINTERVAL_OFFSET UNITYSDK_OFFSET(0x196066D0)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLECONTRIBUTIONREWARD_OFFSET UNITYSDK_OFFSET(0x196078F0)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEPROGRESSREWARD_OFFSET UNITYSDK_OFFSET(0x196075B0)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x19606E90)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLETICKETREWARD_OFFSET UNITYSDK_OFFSET(0x196071D0)
#define RPG_CLIENT_MONOPOLYUTILS_HASLIKEFRIENDTIMES_OFFSET UNITYSDK_OFFSET(0x19607B50)
#define RPG_CLIENT_MONOPOLYUTILS_HIDEPLAYERBUBBLE_OFFSET UNITYSDK_OFFSET(0x196080C0)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLCONTRIBUTIONREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x196079F0)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x19607650)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLQUESTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x19606F90)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLTICKETREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x196073D0)
#define RPG_CLIENT_MONOPOLYUTILS_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0x19608690)
#define RPG_CLIENT_MONOPOLYUTILS_ISCELLFINISHED_OFFSET UNITYSDK_OFFSET(0x19604270)
#define RPG_CLIENT_MONOPOLYUTILS_ISEFFECTGAINASSETTAX_OFFSET UNITYSDK_OFFSET(0x19608270)
#define RPG_CLIENT_MONOPOLYUTILS_ISEFFECTNEEDSELECTFRIEND_OFFSET UNITYSDK_OFFSET(0x196081F0)
#define RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x19606D10)
#define RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x19606DF0)
#define RPG_CLIENT_MONOPOLYUTILS_ISTODAYSEENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x19608550)
#define RPG_CLIENT_MONOPOLYUTILS_MARKMAPFORDELETE_OFFSET UNITYSDK_OFFSET(0x19600540)
#define RPG_CLIENT_MONOPOLYUTILS_PLAYCHARACTERSPINE_OFFSET UNITYSDK_OFFSET(0x196049C0)
#define RPG_CLIENT_MONOPOLYUTILS_PLAYCLICKITEMFINALANIM_OFFSET UNITYSDK_OFFSET(0x19602E50)
#define RPG_CLIENT_MONOPOLYUTILS_REMOVEEXTRACONTENTENTITY_OFFSET UNITYSDK_OFFSET(0x19601930)
#define RPG_CLIENT_MONOPOLYUTILS_SETMONOPOLYPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x19603F40)
#define RPG_CLIENT_MONOPOLYUTILS_SHOWPLAYERBUBBLE_OFFSET UNITYSDK_OFFSET(0x195F1620)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x19604D70)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGERGUIDECUSTOMSTR_OFFSET UNITYSDK_OFFSET(0x19607F70)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGERIMMEDIATELYEFFECT_OFFSET UNITYSDK_OFFSET(0x196082F0)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEEXTRACONTENT_OFFSET UNITYSDK_OFFSET(0x19600140)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x19603FD0)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPMATERIAL_OFFSET UNITYSDK_OFFSET(0x19604540)
#define RPG_CLIENT_MONOPOLYUTILS__ADDEXTRAENTITY_OFFSET UNITYSDK_OFFSET(0x19602260)
#define RPG_CLIENT_MONOPOLYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x196088C0)
#define RPG_CLIENT_MONOPOLYUTILS__CONVERTCELLTYPEENUM_OFFSET UNITYSDK_OFFSET(0x19603EF0)
#define RPG_CLIENT_MONOPOLYUTILS__FETCHCELL_OFFSET UNITYSDK_OFFSET(0x195FFC40)
#define RPG_CLIENT_MONOPOLYUTILS__GETCASTFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x19603630)
#define RPG_CLIENT_MONOPOLYUTILS__GETMAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x196047E0)
#define RPG_CLIENT_MONOPOLYUTILS__GETMONOPOLYCELLICON_OFFSET UNITYSDK_OFFSET(0x19600250)
#define RPG_CLIENT_MONOPOLYUTILS__HANDLERHITRESULT_OFFSET UNITYSDK_OFFSET(0x19603950)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWASSET_OFFSET UNITYSDK_OFFSET(0x19605410)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWFRIENDSELECT_OFFSET UNITYSDK_OFFSET(0x19605BB0)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWGAME_OFFSET UNITYSDK_OFFSET(0x196055F0)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONALGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x19605D70)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONEVENT_OFFSET UNITYSDK_OFFSET(0x19605210)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0x19605310)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMOPTIONEVENT_OFFSET UNITYSDK_OFFSET(0x19605C20)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWSHOP_OFFSET UNITYSDK_OFFSET(0x19605500)
#define RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x195FFF90)
#define RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLMATERIAL_OFFSET UNITYSDK_OFFSET(0x195FFDE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyUtils_TypeDefinitionIndex = 66317;

	class MonopolyUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__EmptyCastResult()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyUtils_TypeDefinitionIndex)->GetStaticField(0x1F9C0);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__MouseRayCastResult()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyUtils_TypeDefinitionIndex)->GetStaticField(0x1F9C8);
		}
		// static const ::System::String* _CellLoadTargetPath; // 0x0
		// static const ::System::String* _AssetIconPath; // 0x0
		// static const ::System::Single _VisualEffectInterval; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void CreateMap(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapConfig* a2, ::Class_2_F3C4BC00835CFDCA* a3)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapConfig*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATEMAP_OFFSET))(a1, a2, a3);
		}

		static ::Class_2_FD51057495DB654F* _FetchCell(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapCell* a2, ::RPG::GameCore::MonopolyMapConfig* a3)
		{
			return ((::Class_2_FD51057495DB654F*(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__FETCHCELL_OFFSET))(a1, a2, a3);
		}

		static ::System::String* _GetMonopolyCellIcon(::RPG::GameCore::MonopolyMapCell* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::MonopolyMapCell*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETMONOPOLYCELLICON_OFFSET))(a1);
		}

		static ::System::Void MarkMapForDelete(::Class_1_D33B7D6901AE39E9* a1)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_MARKMAPFORDELETE_OFFSET))(a1);
		}

		static ::System::Void DestroyMap(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_F3C4BC00835CFDCA* a2)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYMAP_OFFSET))(a1, a2);
		}

		static ::Class_2_FD51057495DB654F* GetCellEntity(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_D33B7D6901AE39E9* a3)
		{
			return ((::Class_2_FD51057495DB654F*(*)(::System::UInt32, ::System::UInt32, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETCELLENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DestroyBarrierEntity(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_D33B7D6901AE39E9* a3, ::Class_0_16E4307DCC419505_102* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_D33B7D6901AE39E9*, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYBARRIERENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void UpdateExtraContent(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapConfig* a2, ::Class_0_16E4307DCC419505_102* a3)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapConfig*, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEEXTRACONTENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveExtraContentEntity(::Class_1_D33B7D6901AE39E9* a1, ::Class_2_F3C4BC00835CFDCA* a2)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_REMOVEEXTRACONTENTENTITY_OFFSET))(a1, a2);
		}

		static ::System::Void _AddExtraEntity(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__ADDEXTRAENTITY_OFFSET))(a1, a2);
		}

		static ::System::Void CreateBarrier(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapCell* a2, ::RPG::GameCore::MonopolyMapConfig* a3)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATEBARRIER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateClickItemEntity(::Class_1_D33B7D6901AE39E9* a1, ::RPG::GameCore::MonopolyMapCell* a2, ::RPG::GameCore::MonopolyMapConfig* a3)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATECLICKITEMENTITY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DestroyClickItemEntity(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_D33B7D6901AE39E9* a3, ::Class_0_16E4307DCC419505_102* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_D33B7D6901AE39E9*, ::Class_0_16E4307DCC419505_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYCLICKITEMENTITY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PlayClickItemFinalAnim(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_D33B7D6901AE39E9* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_PLAYCLICKITEMFINALANIM_OFFSET))(a1, a2, a3);
		}

		static ::Class_2_FD51057495DB654F* GetMapCellEntity(::System::UInt32 a1, ::Class_1_D33B7D6901AE39E9* a2)
		{
			return ((::Class_2_FD51057495DB654F*(*)(::System::UInt32, ::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMAPCELLENTITY_OFFSET))(a1, a2);
		}

		static ::System::Void DoTouch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DOTOUCH_OFFSET))();
		}

		static ::System::Void DoTouchByVirtualCursor(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DOTOUCHBYVIRTUALCURSOR_OFFSET))(a1);
		}

		static ::System::Void _HandlerHitResult(::Il2CppArray<::UnityEngine::RaycastHit>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__HANDLERHITRESULT_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* _GetCastFromMouse(::UnityEngine::Camera* a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETCASTFROMMOUSE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::MonopolyDisplayCellRow* GetGroundDisplayRow(::System::UInt32 a1, ::RPG::GameCore::MonopolyMapCellType a2)
		{
			return ((::RPG::GameCore::MonopolyDisplayCellRow*(*)(::System::UInt32, ::RPG::GameCore::MonopolyMapCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETGROUNDDISPLAYROW_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::MonopolyCellType _ConvertCellTypeEnum(::RPG::GameCore::MonopolyMapCellType a1)
		{
			return ((::RPG::GameCore::MonopolyCellType(*)(::RPG::GameCore::MonopolyMapCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__CONVERTCELLTYPEENUM_OFFSET))(a1);
		}

		static ::System::Void SetMonopolyPauseState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_SETMONOPOLYPAUSESTATE_OFFSET))(a1);
		}

		static ::System::Void UpdateMapActiveState(::Class_1_D33B7D6901AE39E9* a1)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPACTIVESTATE_OFFSET))(a1);
		}

		static ::System::Void _UpdateSingleCellActiveState(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLACTIVESTATE_OFFSET))(a1);
		}

		static ::System::Void UpdateMapMaterial(::Class_1_D33B7D6901AE39E9* a1)
		{
			return ((::System::Void(*)(::Class_1_D33B7D6901AE39E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPMATERIAL_OFFSET))(a1);
		}

		static ::System::Void _UpdateSingleCellMaterial(::Class_2_FD51057495DB654F* a1)
		{
			return ((::System::Void(*)(::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Color _GetMapIconColor(::Class_2_FD51057495DB654F* a1)
		{
			return ((::UnityEngine::Color(*)(::Class_2_FD51057495DB654F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETMAPICONCOLOR_OFFSET))(a1);
		}

		static ::System::Void PlayCharacterSpine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_PLAYCHARACTERSPINE_OFFSET))(a1);
		}

		static ::System::Void AddUI3DVisualEffect(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDUI3DVISUALEFFECT_OFFSET))(a1, a2);
		}

		static ::System::Void AddVisualEffectToPath(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDVISUALEFFECTTOPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddTriggerImmediately(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDTRIGGERIMMEDIATELY_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LuaUIController* TriggerEvent(::System::UInt32 a1, ::RPG::Client::MonopolyContentType a2, ::System::Object* a3)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::UInt32, ::RPG::Client::MonopolyContentType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_TRIGGEREVENT_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::LuaUIController* _ShowRandomEvent(::RPG::Client::MonopolyEventDataItem* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMEVENT_OFFSET))(a1);
		}

		static ::RPG::Client::LuaUIController* _ShowOptionEvent(::RPG::Client::MonopolyEventDataItem* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONEVENT_OFFSET))(a1);
		}

		static ::RPG::Client::LuaUIController* _ShowAsset(::RPG::Client::MonopolyAssetDataItem* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyAssetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWASSET_OFFSET))(a1);
		}

		static ::RPG::Client::LuaUIController* _ShowShop(::RPG::Client::MonopolyShopDataItem* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyShopDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWSHOP_OFFSET))(a1);
		}

		static ::RPG::Client::LuaUIController* _ShowGame(::RPG::Client::MonopolyGameData* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWGAME_OFFSET))(a1);
		}

		static ::RPG::Client::LuaUIController* _ShowFriendSelect()
		{
			return ((::RPG::Client::LuaUIController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWFRIENDSELECT_OFFSET))();
		}

		static ::RPG::Client::LuaUIController* _ShowRandomOptionEvent(::RPG::Client::MonopolyEventDataItem* a1, ::System::Object* a2)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMOPTIONEVENT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LuaUIController* _ShowOptionalGroupEvent(::System::Object* a1)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONALGROUPEVENT_OFFSET))(a1);
		}

		static ::RPG::Client::ItemDisplayData* FetchCurrencyDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_FETCHCURRENCYDISPLAYDATA_OFFSET))(a1);
		}

		static ::System::UInt32 GetMonopolyCurrencyID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYID_OFFSET))();
		}

		static ::RPG::Client::ItemData* GetMonopolyCurrencyItemRow()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYITEMROW_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyDiceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEID_OFFSET))();
		}

		static ::RPG::Client::ItemData* GetMonopolyDiceItemRow()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEITEMROW_OFFSET))();
		}

		static ::RPG::Client::ItemData* GetMonopolyCheatDiceItemRow()
		{
			return ((::RPG::Client::ItemData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEITEMROW_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyCheatDiceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEID_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyReRollItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYREROLLITEMID_OFFSET))();
		}

		static ::System::String* GetMonopolyMainPageName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYMAINPAGENAME_OFFSET))();
		}

		static ::System::UInt32 GetMonopolySocialEventShowTime()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYSOCIALEVENTSHOWTIME_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyBingoBubbleTalkDuration()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKDURATION_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyBingoBubbleTalkCD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKCD_OFFSET))();
		}

		static ::System::UInt32 GetMonopolyBingoBubbleRandomMaxNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLERANDOMMAXNUM_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetContributionQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETCONTRIBUTIONQUESTIDS_OFFSET))();
		}

		static ::System::UInt32 GetEmptyBuffID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETEMPTYBUFFID_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyEventType GetCountedEventType()
		{
			return ((::RPG::GameCore::MonopolyEventType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETCOUNTEDEVENTTYPE_OFFSET))();
		}

		static ::System::Single GetVisualEffectInterval()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETVISUALEFFECTINTERVAL_OFFSET))();
		}

		static ::System::UInt32 GetJackpotLevelByProgress(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETJACKPOTLEVELBYPROGRESS_OFFSET))(a1);
		}

		static ::System::UInt32 GetGachaAMaxFillNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETGACHAAMAXFILLNUM_OFFSET))();
		}

		static ::System::UInt32 GetGachaQuestionResourceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETGACHAQUESTIONRESOURCEID_OFFSET))();
		}

		static ::System::UInt32 GetMiniGameMaxRaiseValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMINIGAMEMAXRAISEVALUE_OFFSET))();
		}

		static ::System::UInt32 GetGameBaseRatioValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETGAMEBASERATIOVALUE_OFFSET))();
		}

		static ::System::UInt32 GetMaxFriendLikeRewardValue()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMAXFRIENDLIKEREWARDVALUE_OFFSET))();
		}

		static ::System::UInt32 GetDailySettleAnimDuration()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETDAILYSETTLEANIMDURATION_OFFSET))();
		}

		static ::System::Boolean IsMBTIRewardAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDAVAILABLE_OFFSET))();
		}

		static ::System::Boolean IsMBTIRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasAvailableQuestReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEQUESTREWARD_OFFSET))();
		}

		static ::System::Boolean IsAllQuestRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISALLQUESTREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasAvailableTicketReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLETICKETREWARD_OFFSET))();
		}

		static ::System::Boolean IsAllTicketRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISALLTICKETREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasAvailableProgressReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEPROGRESSREWARD_OFFSET))();
		}

		static ::System::Boolean IsAllProgressRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISALLPROGRESSREWARDTAKEN_OFFSET))();
		}

		static ::System::Boolean HasAvailableContributionReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLECONTRIBUTIONREWARD_OFFSET))();
		}

		static ::System::Boolean IsAllContributionRewardTaken()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISALLCONTRIBUTIONREWARDTAKEN_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetAvailQuestAreaID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETAVAILQUESTAREAID_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetAvailContributionQuestID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETAVAILCONTRIBUTIONQUESTID_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt32>* GetAvailPhaseRewardID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETAVAILPHASEREWARDID_OFFSET))();
		}

		static ::System::Boolean HasLikeFriendTimes()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HASLIKEFRIENDTIMES_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNumberListFromListString(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETNUMBERLISTFROMLISTSTRING_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetValueListFromDictString(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETVALUELISTFROMDICTSTRING_OFFSET))(a1);
		}

		static ::System::Void TriggerGuideCustomStr(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_TRIGGERGUIDECUSTOMSTR_OFFSET))(a1);
		}

		static ::System::Void ShowPlayerBubble(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_SHOWPLAYERBUBBLE_OFFSET))(a1);
		}

		static ::System::Void HidePlayerBubble(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HIDEPLAYERBUBBLE_OFFSET))(a1);
		}

		static ::System::UInt32 GetRemainStepCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETREMAINSTEPCOUNT_OFFSET))();
		}

		static ::System::Boolean IsEffectNeedSelectFriend(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISEFFECTNEEDSELECTFRIEND_OFFSET))(a1);
		}

		static ::System::Boolean IsEffectGainAssetTax(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISEFFECTGAINASSETTAX_OFFSET))(a1);
		}

		static ::System::Boolean IsCellFinished(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISCELLFINISHED_OFFSET))(a1, a2);
		}

		static ::System::Boolean TriggerImmediatelyEffect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_TRIGGERIMMEDIATELYEFFECT_OFFSET))();
		}

		static ::System::Boolean IsTodaySeenFriendRank()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISTODAYSEENFRIENDRANK_OFFSET))();
		}

		static ::System::Boolean IsCanTakeDailyReward()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISCANTAKEDAILYREWARD_OFFSET))();
		}
	};
}
