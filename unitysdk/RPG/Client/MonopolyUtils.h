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

class Class_0_16E4307DCC419505_84;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
class Class_2_F3C4BC00835CFDCA;
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

#define RPG_CLIENT_MONOPOLYUTILS_ADDTRIGGERIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x9D7E5E0)
#define RPG_CLIENT_MONOPOLYUTILS_ADDUI3DVISUALEFFECT_OFFSET UNITYSDK_OFFSET(0x9D7E3F0)
#define RPG_CLIENT_MONOPOLYUTILS_ADDVISUALEFFECTTOPATH_OFFSET UNITYSDK_OFFSET(0x9D7E4E0)
#define RPG_CLIENT_MONOPOLYUTILS_CREATEBARRIER_OFFSET UNITYSDK_OFFSET(0x9D7C310)
#define RPG_CLIENT_MONOPOLYUTILS_CREATECLICKITEMENTITY_OFFSET UNITYSDK_OFFSET(0x9D7C520)
#define RPG_CLIENT_MONOPOLYUTILS_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x9D796C0)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYBARRIERENTITY_OFFSET UNITYSDK_OFFSET(0x9D7B160)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYCLICKITEMENTITY_OFFSET UNITYSDK_OFFSET(0x9D7C5B0)
#define RPG_CLIENT_MONOPOLYUTILS_DESTROYMAP_OFFSET UNITYSDK_OFFSET(0x9D7A9D0)
#define RPG_CLIENT_MONOPOLYUTILS_DOTOUCHBYVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x9D7D600)
#define RPG_CLIENT_MONOPOLYUTILS_DOTOUCH_OFFSET UNITYSDK_OFFSET(0x9D7CF70)
#define RPG_CLIENT_MONOPOLYUTILS_FETCHCURRENCYDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x9D777B0)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILCONTRIBUTIONQUESTID_OFFSET UNITYSDK_OFFSET(0x9D815F0)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILPHASEREWARDID_OFFSET UNITYSDK_OFFSET(0x9D81750)
#define RPG_CLIENT_MONOPOLYUTILS_GETAVAILQUESTAREAID_OFFSET UNITYSDK_OFFSET(0x9D80C10)
#define RPG_CLIENT_MONOPOLYUTILS_GETCELLENTITY_OFFSET UNITYSDK_OFFSET(0x9D7AE40)
#define RPG_CLIENT_MONOPOLYUTILS_GETCONTRIBUTIONQUESTIDS_OFFSET UNITYSDK_OFFSET(0x9D73A20)
#define RPG_CLIENT_MONOPOLYUTILS_GETCOUNTEDEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9D80310)
#define RPG_CLIENT_MONOPOLYUTILS_GETDAILYSETTLEANIMDURATION_OFFSET UNITYSDK_OFFSET(0x9D80950)
#define RPG_CLIENT_MONOPOLYUTILS_GETEMPTYBUFFID_OFFSET UNITYSDK_OFFSET(0x9D80210)
#define RPG_CLIENT_MONOPOLYUTILS_GETGACHAAMAXFILLNUM_OFFSET UNITYSDK_OFFSET(0x9D80450)
#define RPG_CLIENT_MONOPOLYUTILS_GETGACHAQUESTIONRESOURCEID_OFFSET UNITYSDK_OFFSET(0x9D80550)
#define RPG_CLIENT_MONOPOLYUTILS_GETGAMEBASERATIOVALUE_OFFSET UNITYSDK_OFFSET(0x9D80750)
#define RPG_CLIENT_MONOPOLYUTILS_GETGROUNDDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x9D7D7A0)
#define RPG_CLIENT_MONOPOLYUTILS_GETJACKPOTLEVELBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x9D684B0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMAPCELLENTITY_OFFSET UNITYSDK_OFFSET(0x9D7CCE0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMAXFRIENDLIKEREWARDVALUE_OFFSET UNITYSDK_OFFSET(0x9D80850)
#define RPG_CLIENT_MONOPOLYUTILS_GETMINIGAMEMAXRAISEVALUE_OFFSET UNITYSDK_OFFSET(0x9D80650)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLERANDOMMAXNUM_OFFSET UNITYSDK_OFFSET(0x9D80110)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKCD_OFFSET UNITYSDK_OFFSET(0x9D80010)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYBINGOBUBBLETALKDURATION_OFFSET UNITYSDK_OFFSET(0x9D7FF10)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEID_OFFSET UNITYSDK_OFFSET(0x9D7FBE0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCHEATDICEITEMROW_OFFSET UNITYSDK_OFFSET(0x9D7FB30)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYID_OFFSET UNITYSDK_OFFSET(0x9D7F830)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYCURRENCYITEMROW_OFFSET UNITYSDK_OFFSET(0x9D7F900)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEID_OFFSET UNITYSDK_OFFSET(0x9D7F9B0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYDICEITEMROW_OFFSET UNITYSDK_OFFSET(0x9D7FA80)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYMAINPAGENAME_OFFSET UNITYSDK_OFFSET(0x9D7FDB0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYREROLLITEMID_OFFSET UNITYSDK_OFFSET(0x9D7FCB0)
#define RPG_CLIENT_MONOPOLYUTILS_GETMONOPOLYSOCIALEVENTSHOWTIME_OFFSET UNITYSDK_OFFSET(0x9D7FE10)
#define RPG_CLIENT_MONOPOLYUTILS_GETNUMBERLISTFROMLISTSTRING_OFFSET UNITYSDK_OFFSET(0x9D818B0)
#define RPG_CLIENT_MONOPOLYUTILS_GETREMAINSTEPCOUNT_OFFSET UNITYSDK_OFFSET(0x9D81D90)
#define RPG_CLIENT_MONOPOLYUTILS_GETVALUELISTFROMDICTSTRING_OFFSET UNITYSDK_OFFSET(0x9D81A10)
#define RPG_CLIENT_MONOPOLYUTILS_GETVISUALEFFECTINTERVAL_OFFSET UNITYSDK_OFFSET(0x9D80410)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLECONTRIBUTIONREWARD_OFFSET UNITYSDK_OFFSET(0x9D81580)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEPROGRESSREWARD_OFFSET UNITYSDK_OFFSET(0x9D81290)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLEQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x9D80BA0)
#define RPG_CLIENT_MONOPOLYUTILS_HASAVAILABLETICKETREWARD_OFFSET UNITYSDK_OFFSET(0x9D80EC0)
#define RPG_CLIENT_MONOPOLYUTILS_HASLIKEFRIENDTIMES_OFFSET UNITYSDK_OFFSET(0x9D817E0)
#define RPG_CLIENT_MONOPOLYUTILS_HIDEPLAYERBUBBLE_OFFSET UNITYSDK_OFFSET(0x9D81D40)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLCONTRIBUTIONREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D81680)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLPROGRESSREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D81330)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLQUESTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D80CA0)
#define RPG_CLIENT_MONOPOLYUTILS_ISALLTICKETREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D810B0)
#define RPG_CLIENT_MONOPOLYUTILS_ISCANTAKEDAILYREWARD_OFFSET UNITYSDK_OFFSET(0x9D82210)
#define RPG_CLIENT_MONOPOLYUTILS_ISCELLFINISHED_OFFSET UNITYSDK_OFFSET(0x9D7DCE0)
#define RPG_CLIENT_MONOPOLYUTILS_ISEFFECTGAINASSETTAX_OFFSET UNITYSDK_OFFSET(0x9D81EF0)
#define RPG_CLIENT_MONOPOLYUTILS_ISEFFECTNEEDSELECTFRIEND_OFFSET UNITYSDK_OFFSET(0x9D81E70)
#define RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9D80A50)
#define RPG_CLIENT_MONOPOLYUTILS_ISMBTIREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9D80B00)
#define RPG_CLIENT_MONOPOLYUTILS_ISTODAYSEENFRIENDRANK_OFFSET UNITYSDK_OFFSET(0x9D82170)
#define RPG_CLIENT_MONOPOLYUTILS_MARKMAPFORDELETE_OFFSET UNITYSDK_OFFSET(0x9D7A340)
#define RPG_CLIENT_MONOPOLYUTILS_PLAYCHARACTERSPINE_OFFSET UNITYSDK_OFFSET(0x9D7E310)
#define RPG_CLIENT_MONOPOLYUTILS_PLAYCLICKITEMFINALANIM_OFFSET UNITYSDK_OFFSET(0x9D7C8D0)
#define RPG_CLIENT_MONOPOLYUTILS_REMOVEEXTRACONTENTENTITY_OFFSET UNITYSDK_OFFSET(0x9D7B550)
#define RPG_CLIENT_MONOPOLYUTILS_SETMONOPOLYPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x9D7D910)
#define RPG_CLIENT_MONOPOLYUTILS_SHOWPLAYERBUBBLE_OFFSET UNITYSDK_OFFSET(0x9D6C5A0)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x9D7E6C0)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGERGUIDECUSTOMSTR_OFFSET UNITYSDK_OFFSET(0x9D81BF0)
#define RPG_CLIENT_MONOPOLYUTILS_TRIGGERIMMEDIATELYEFFECT_OFFSET UNITYSDK_OFFSET(0x9D81F70)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEEXTRACONTENT_OFFSET UNITYSDK_OFFSET(0x9D79FE0)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x9D7DA70)
#define RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPMATERIAL_OFFSET UNITYSDK_OFFSET(0x9D7DEC0)
#define RPG_CLIENT_MONOPOLYUTILS__ADDEXTRAENTITY_OFFSET UNITYSDK_OFFSET(0x9D7BD80)
#define RPG_CLIENT_MONOPOLYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D82310)
#define RPG_CLIENT_MONOPOLYUTILS__CONVERTCELLTYPEENUM_OFFSET UNITYSDK_OFFSET(0x9D7D8C0)
#define RPG_CLIENT_MONOPOLYUTILS__FETCHCELL_OFFSET UNITYSDK_OFFSET(0x9D79AD0)
#define RPG_CLIENT_MONOPOLYUTILS__GETCASTFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x9D7D070)
#define RPG_CLIENT_MONOPOLYUTILS__GETMAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9D7E130)
#define RPG_CLIENT_MONOPOLYUTILS__GETMONOPOLYCELLICON_OFFSET UNITYSDK_OFFSET(0x9D7A0D0)
#define RPG_CLIENT_MONOPOLYUTILS__HANDLERHITRESULT_OFFSET UNITYSDK_OFFSET(0x9D7D390)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWASSET_OFFSET UNITYSDK_OFFSET(0x9D7ED00)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWFRIENDSELECT_OFFSET UNITYSDK_OFFSET(0x9D7F530)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWGAME_OFFSET UNITYSDK_OFFSET(0x9D7EF00)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONALGROUPEVENT_OFFSET UNITYSDK_OFFSET(0x9D7F730)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONEVENT_OFFSET UNITYSDK_OFFSET(0x9D7EAE0)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0x9D7EBF0)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMOPTIONEVENT_OFFSET UNITYSDK_OFFSET(0x9D7F5A0)
#define RPG_CLIENT_MONOPOLYUTILS__SHOWSHOP_OFFSET UNITYSDK_OFFSET(0x9D7EE00)
#define RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x9D79E20)
#define RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLMATERIAL_OFFSET UNITYSDK_OFFSET(0x9D79C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyUtils_TypeDefinitionIndex = 53889;

	class MonopolyUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__MouseRayCastResult()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyUtils_TypeDefinitionIndex)->GetStaticField(0x41760);
		}
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__EmptyCastResult()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyUtils_TypeDefinitionIndex)->GetStaticField(0x41768);
		}
		// static const ::System::String* _CellLoadTargetPath; // 0x0
		// static const ::System::String* _AssetIconPath; // 0x0
		// static const ::System::Single _VisualEffectInterval; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void CreateMap(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapConfig* curMap, ::Class_2_F3C4BC00835CFDCA* service)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapConfig*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATEMAP_OFFSET))(contexts, curMap, service);
		}

		static ::Class_2_9850514C0F89B91A* _FetchCell(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapCell* mapItemConfig, ::RPG::GameCore::MonopolyMapConfig* curMap)
		{
			return ((::Class_2_9850514C0F89B91A*(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__FETCHCELL_OFFSET))(contexts, mapItemConfig, curMap);
		}

		static ::System::String* _GetMonopolyCellIcon(::RPG::GameCore::MonopolyMapCell* mapItemConfig)
		{
			return ((::System::String*(*)(::RPG::GameCore::MonopolyMapCell*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETMONOPOLYCELLICON_OFFSET))(mapItemConfig);
		}

		static ::System::Void MarkMapForDelete(::Class_1_867B6CE75953535A* contexts)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_MARKMAPFORDELETE_OFFSET))(contexts);
		}

		static ::System::Void DestroyMap(::Class_1_867B6CE75953535A* contexts, ::Class_2_F3C4BC00835CFDCA* service)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYMAP_OFFSET))(contexts, service);
		}

		static ::Class_2_9850514C0F89B91A* GetCellEntity(::System::UInt32 cellID, ::System::UInt32 mapID, ::Class_1_867B6CE75953535A* contexts)
		{
			return ((::Class_2_9850514C0F89B91A*(*)(::System::UInt32, ::System::UInt32, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETCELLENTITY_OFFSET))(cellID, mapID, contexts);
		}

		static ::System::Void DestroyBarrierEntity(::System::UInt32 cellID, ::System::UInt32 mapID, ::Class_1_867B6CE75953535A* contexts, ::Class_0_16E4307DCC419505_84* service)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_867B6CE75953535A*, ::Class_0_16E4307DCC419505_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYBARRIERENTITY_OFFSET))(cellID, mapID, contexts, service);
		}

		static ::System::Void UpdateExtraContent(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapConfig* curMap, ::Class_0_16E4307DCC419505_84* service)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapConfig*, ::Class_0_16E4307DCC419505_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEEXTRACONTENT_OFFSET))(contexts, curMap, service);
		}

		static ::System::Void RemoveExtraContentEntity(::Class_1_867B6CE75953535A* contexts, ::Class_2_F3C4BC00835CFDCA* service)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::Class_2_F3C4BC00835CFDCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_REMOVEEXTRACONTENTENTITY_OFFSET))(contexts, service);
		}

		static ::System::Void _AddExtraEntity(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapConfig* curMap)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__ADDEXTRAENTITY_OFFSET))(contexts, curMap);
		}

		static ::System::Void CreateBarrier(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapCell* mapItemConfig, ::RPG::GameCore::MonopolyMapConfig* curMap)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATEBARRIER_OFFSET))(contexts, mapItemConfig, curMap);
		}

		static ::System::Void CreateClickItemEntity(::Class_1_867B6CE75953535A* contexts, ::RPG::GameCore::MonopolyMapCell* mapItemConfig, ::RPG::GameCore::MonopolyMapConfig* curMap)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*, ::RPG::GameCore::MonopolyMapCell*, ::RPG::GameCore::MonopolyMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_CREATECLICKITEMENTITY_OFFSET))(contexts, mapItemConfig, curMap);
		}

		static ::System::Void DestroyClickItemEntity(::System::UInt32 mapID, ::System::UInt32 cellID, ::Class_1_867B6CE75953535A* contexts, ::Class_0_16E4307DCC419505_84* service)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_867B6CE75953535A*, ::Class_0_16E4307DCC419505_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DESTROYCLICKITEMENTITY_OFFSET))(mapID, cellID, contexts, service);
		}

		static ::System::Void PlayClickItemFinalAnim(::System::UInt32 mapID, ::System::UInt32 cellID, ::Class_1_867B6CE75953535A* contexts)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_PLAYCLICKITEMFINALANIM_OFFSET))(mapID, cellID, contexts);
		}

		static ::Class_2_9850514C0F89B91A* GetMapCellEntity(::System::UInt32 cellID, ::Class_1_867B6CE75953535A* contexts)
		{
			return ((::Class_2_9850514C0F89B91A*(*)(::System::UInt32, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETMAPCELLENTITY_OFFSET))(cellID, contexts);
		}

		static ::System::Void DoTouch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DOTOUCH_OFFSET))();
		}

		static ::System::Void DoTouchByVirtualCursor(::UnityEngine::Transform* tf)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_DOTOUCHBYVIRTUALCURSOR_OFFSET))(tf);
		}

		static ::System::Void _HandlerHitResult(::Il2CppArray<::UnityEngine::RaycastHit>* hitResults)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__HANDLERHITRESULT_OFFSET))(hitResults);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>* _GetCastFromMouse(::UnityEngine::Camera* camera, ::System::Single rayCastLength, ::UnityEngine::Vector3 currentMousePos)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::UnityEngine::Camera*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETCASTFROMMOUSE_OFFSET))(camera, rayCastLength, currentMousePos);
		}

		static ::RPG::GameCore::MonopolyDisplayCellRow* GetGroundDisplayRow(::System::UInt32 contentID, ::RPG::GameCore::MonopolyMapCellType type)
		{
			return ((::RPG::GameCore::MonopolyDisplayCellRow*(*)(::System::UInt32, ::RPG::GameCore::MonopolyMapCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETGROUNDDISPLAYROW_OFFSET))(contentID, type);
		}

		static ::RPG::GameCore::MonopolyCellType _ConvertCellTypeEnum(::RPG::GameCore::MonopolyMapCellType type)
		{
			return ((::RPG::GameCore::MonopolyCellType(*)(::RPG::GameCore::MonopolyMapCellType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__CONVERTCELLTYPEENUM_OFFSET))(type);
		}

		static ::System::Void SetMonopolyPauseState(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_SETMONOPOLYPAUSESTATE_OFFSET))(isPause);
		}

		static ::System::Void UpdateMapActiveState(::Class_1_867B6CE75953535A* contexts)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPACTIVESTATE_OFFSET))(contexts);
		}

		static ::System::Void _UpdateSingleCellActiveState(::Class_2_9850514C0F89B91A* entity)
		{
			return ((::System::Void(*)(::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLACTIVESTATE_OFFSET))(entity);
		}

		static ::System::Void UpdateMapMaterial(::Class_1_867B6CE75953535A* contexts)
		{
			return ((::System::Void(*)(::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_UPDATEMAPMATERIAL_OFFSET))(contexts);
		}

		static ::System::Void _UpdateSingleCellMaterial(::Class_2_9850514C0F89B91A* entity)
		{
			return ((::System::Void(*)(::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__UPDATESINGLECELLMATERIAL_OFFSET))(entity);
		}

		static ::UnityEngine::Color _GetMapIconColor(::Class_2_9850514C0F89B91A* entity)
		{
			return ((::UnityEngine::Color(*)(::Class_2_9850514C0F89B91A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__GETMAPICONCOLOR_OFFSET))(entity);
		}

		static ::System::Void PlayCharacterSpine(::System::String* trigger)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_PLAYCHARACTERSPINE_OFFSET))(trigger);
		}

		static ::System::Void AddUI3DVisualEffect(::System::UInt32 cellID, ::System::String* prefabPath)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDUI3DVISUALEFFECT_OFFSET))(cellID, prefabPath);
		}

		static ::System::Void AddVisualEffectToPath(::System::String* effectPath, ::System::String* effectTargetPath, ::System::String* posAndRotPath)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDVISUALEFFECTTOPATH_OFFSET))(effectPath, effectTargetPath, posAndRotPath);
		}

		static ::System::Void AddTriggerImmediately(::System::UInt32 mapID, ::System::UInt32 cellID)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ADDTRIGGERIMMEDIATELY_OFFSET))(mapID, cellID);
		}

		static ::RPG::Client::LuaUIController* TriggerEvent(::System::UInt32 contentID, ::RPG::Client::MonopolyContentType type, ::System::Object* arg)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::UInt32, ::RPG::Client::MonopolyContentType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_TRIGGEREVENT_OFFSET))(contentID, type, arg);
		}

		static ::RPG::Client::LuaUIController* _ShowRandomEvent(::RPG::Client::MonopolyEventDataItem* eventDataItem)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMEVENT_OFFSET))(eventDataItem);
		}

		static ::RPG::Client::LuaUIController* _ShowOptionEvent(::RPG::Client::MonopolyEventDataItem* eventDataItem)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONEVENT_OFFSET))(eventDataItem);
		}

		static ::RPG::Client::LuaUIController* _ShowAsset(::RPG::Client::MonopolyAssetDataItem* item)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyAssetDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWASSET_OFFSET))(item);
		}

		static ::RPG::Client::LuaUIController* _ShowShop(::RPG::Client::MonopolyShopDataItem* item)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyShopDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWSHOP_OFFSET))(item);
		}

		static ::RPG::Client::LuaUIController* _ShowGame(::RPG::Client::MonopolyGameData* data)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyGameData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWGAME_OFFSET))(data);
		}

		static ::RPG::Client::LuaUIController* _ShowFriendSelect()
		{
			return ((::RPG::Client::LuaUIController*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWFRIENDSELECT_OFFSET))();
		}

		static ::RPG::Client::LuaUIController* _ShowRandomOptionEvent(::RPG::Client::MonopolyEventDataItem* eventDataItem, ::System::Object* arg)
		{
			return ((::RPG::Client::LuaUIController*(*)(::RPG::Client::MonopolyEventDataItem*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWRANDOMOPTIONEVENT_OFFSET))(eventDataItem, arg);
		}

		static ::RPG::Client::LuaUIController* _ShowOptionalGroupEvent(::System::Object* arg)
		{
			return ((::RPG::Client::LuaUIController*(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS__SHOWOPTIONALGROUPEVENT_OFFSET))(arg);
		}

		static ::RPG::Client::ItemDisplayData* FetchCurrencyDisplayData(::System::UInt32 num)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_FETCHCURRENCYDISPLAYDATA_OFFSET))(num);
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

		static ::System::UInt32 GetJackpotLevelByProgress(::System::UInt32 progress)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETJACKPOTLEVELBYPROGRESS_OFFSET))(progress);
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

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetNumberListFromListString(::System::String* rawString)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETNUMBERLISTFROMLISTSTRING_OFFSET))(rawString);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* GetValueListFromDictString(::System::String* rawString)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETVALUELISTFROMDICTSTRING_OFFSET))(rawString);
		}

		static ::System::Void TriggerGuideCustomStr(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_TRIGGERGUIDECUSTOMSTR_OFFSET))(content);
		}

		static ::System::Void ShowPlayerBubble(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_SHOWPLAYERBUBBLE_OFFSET))(content);
		}

		static ::System::Void HidePlayerBubble(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_HIDEPLAYERBUBBLE_OFFSET))(content);
		}

		static ::System::UInt32 GetRemainStepCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_GETREMAINSTEPCOUNT_OFFSET))();
		}

		static ::System::Boolean IsEffectNeedSelectFriend(::System::UInt32 EffectID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISEFFECTNEEDSELECTFRIEND_OFFSET))(EffectID);
		}

		static ::System::Boolean IsEffectGainAssetTax(::System::UInt32 effectID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISEFFECTGAINASSETTAX_OFFSET))(effectID);
		}

		static ::System::Boolean IsCellFinished(::System::UInt32 mapID, ::System::UInt32 cellID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYUTILS_ISCELLFINISHED_OFFSET))(mapID, cellID);
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
