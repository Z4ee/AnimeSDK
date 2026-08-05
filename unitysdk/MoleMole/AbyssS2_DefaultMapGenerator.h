#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_DefaultMapGenerator___c__DisplayClass16_0.h"
#include "unitysdk/MoleMole/AbyssS2_GenAreaConfigItem.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_461;
namespace MoleMole { class AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject; }
namespace MoleMole { class AbyssS2_GenResult; }
namespace MoleMole { class AbyssS2_GenRouteMapConfig; }
namespace MoleMole { class AbyssS2_IRNG; }
namespace MoleMole { class AbyssS2_WorkGrid; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_FETCHROUTEPOINTNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x16C0FC70)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GETAREAMETATYPETEMPLATEEXTBYAREAID_OFFSET UNITYSDK_OFFSET(0x16C14210)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x16C14B20)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_POST_OFFSET UNITYSDK_OFFSET(0x16C129B0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PREPARE_OFFSET UNITYSDK_OFFSET(0x16C0AE90)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTFIXGEN_3_OFFSET UNITYSDK_OFFSET(0x16C0E940)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTGEN_1_OFFSET UNITYSDK_OFFSET(0x16C0D7E0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET UNITYSDK_OFFSET(0x16C0DFA0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x16C0B2A0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_STARTPOINTS_0_OFFSET UNITYSDK_OFFSET(0x16C0D0D0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C0AD20)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__FETCHROUTEPOINTNEIGHBOOR_OFFSET UNITYSDK_OFFSET(0x16C0F950)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__FETCHROUTEPOINTNEIGHBOR_G__GETINDEX_17_0_OFFSET UNITYSDK_OFFSET(0x16C0FF20)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISAREAIDUNDERFORBIDRULE_OFFSET UNITYSDK_OFFSET(0x16C10020)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISAREASERINDEXUNDERFORBIDRULE_OFFSET UNITYSDK_OFFSET(0x16C11C30)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISTAGMATCHLIST_OFFSET UNITYSDK_OFFSET(0x16C0FF70)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__RANDOMFILLAREA_OFFSET UNITYSDK_OFFSET(0x16C0BD50)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__SORTROUTEPOINTLISTBYFLOOR_OFFSET UNITYSDK_OFFSET(0x16C0F420)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYBUILDDYNAMICMERGES_OFFSET UNITYSDK_OFFSET(0x16C12A00)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYGENSERIALID_OFFSET UNITYSDK_OFFSET(0x16C11F60)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYPARSEAREAPOOL_OFFSET UNITYSDK_OFFSET(0x16C0B4F0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__WEIGHTRANDOMAREA_OFFSET UNITYSDK_OFFSET(0x16C0F530)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___FETCHROUTEPOINTNEIGHBOOR_G____GETINDEX_16_0_OFFSET UNITYSDK_OFFSET(0x16C0FC20)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____GETAREAIDBYROUTEPOINTID_29_4_OFFSET UNITYSDK_OFFSET(0x16C146F0)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____HASSPECIALINDEXORTAGS_29_0_OFFSET UNITYSDK_OFFSET(0x16C14800)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____ISLEFTINRIGHT_29_2_OFFSET UNITYSDK_OFFSET(0x16C14670)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____NEXTPOSSIBLESELECTIONS_29_3_OFFSET UNITYSDK_OFFSET(0x16C14450)
#define MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____SPLITLISTTONEW_29_1_OFFSET UNITYSDK_OFFSET(0x16C14A00)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultMapGenerator_TypeDefinitionIndex = 87618;

	class AbyssS2_DefaultMapGenerator : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_TRY = 0x64; // 0x0
		::MoleMole::AbyssS2_GenRouteMapConfig* _genConfig; // 0x10
		::MoleMole::AbyssS2_IRNG* _rngEvent; // 0x18
		::MoleMole::AbyssS2_IRNG* _rngRoute; // 0x20
		::MoleMole::AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject* runTimeID2AreaInterObject; // 0x28
		::MoleMole::AbyssS2_WorkGrid* grid; // 0x30
		::MoleMole::AbyssS2_GenResult* _result; // 0x38
		::System::Int32 _areaTotalWeight; // 0x40

		::System::Void _ctor(::MoleMole::AbyssS2_GenRouteMapConfig* inConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__CTOR_OFFSET))(this, inConfig);
		}

		::System::Boolean Prepare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PREPARE_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_OFFSET))(this);
		}

		::System::Boolean Process_StartPoints_0(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_STARTPOINTS_0_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartGen_1(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTGEN_1_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartReduceGen_2(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTREDUCEGEN_2_OFFSET))(this, meta);
		}

		::System::Boolean Process_NormalPartFixGen_3(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_PROCESS_NORMALPARTFIXGEN_3_OFFSET))(this, meta);
		}

		::System::Boolean _WeightRandomArea(::MoleMole::AbyssS2_GenAreaConfigItem& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AbyssS2_GenAreaConfigItem&))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__WEIGHTRANDOMAREA_OFFSET))(this, value);
		}

		::System::Void _FetchRoutePointNeighboor(::System::Int32 qryRoutePoint, ::System::Collections::Generic::HashSet_1<::System::Int32>* targets, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__FETCHROUTEPOINTNEIGHBOOR_OFFSET))(this, qryRoutePoint, targets, depth);
		}

		::System::Void FetchRoutePointNeighbor(::System::Int32 qryRoutePoint, ::System::Int32 maxDistance, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* routeNeighbors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_FETCHROUTEPOINTNEIGHBOR_OFFSET))(this, qryRoutePoint, maxDistance, routeNeighbors);
		}

		::System::Boolean _IsTagMatchList(::System::String* queryTag, ::System::Collections::Generic::List_1<::System::String*>* tagsR)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISTAGMATCHLIST_OFFSET))(this, queryTag, tagsR);
		}

		::System::Boolean _IsAreaIDUnderForbidRule(::System::Int32 checkRoutePointID, ::System::Int32 checkAreaID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* routePointID2Area, ::MoleMole::AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject* runObj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::MoleMole::AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISAREAIDUNDERFORBIDRULE_OFFSET))(this, checkRoutePointID, checkAreaID, routePointID2Area, runObj);
		}

		::System::Boolean _IsAreaSerIndexUnderForbidRule(::System::Int32 checkAreaIndex, ::MoleMole::AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject* runObj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::AbyssS2_DefaultMapGenerator_GenPointID2AreaInterObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__ISAREASERINDEXUNDERFORBIDRULE_OFFSET))(this, checkAreaIndex, runObj);
		}

		::System::Void _SortRoutePointListByFloor(::MoleMole::AbyssS2_GenConfigMeta meta, ::System::Collections::Generic::List_1<::System::Int32>* routePointList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__SORTROUTEPOINTLISTBYFLOOR_OFFSET))(this, meta, routePointList);
		}

		::System::Boolean _TryGenSerialID(::System::Int32 targetRoutePoint, ::System::Int32 targetAreaID, ::System::Boolean doCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYGENSERIALID_OFFSET))(this, targetRoutePoint, targetAreaID, doCheck);
		}

		::System::Void _RandomFillArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__RANDOMFILLAREA_OFFSET))(this);
		}

		::System::Void _TryParseAreaPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYPARSEAREAPOOL_OFFSET))(this);
		}

		::System::Void Post()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_POST_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_461* GetAreaMetaTypeTemplateExtByAreaID(::System::Int32 areaID, ::System::Int32 areaIndex)
		{
			return ((::Class_2_208CC9941471731A_461*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GETAREAMETATYPETEMPLATEEXTBYAREAID_OFFSET))(this, areaID, areaIndex);
		}

		::System::Void _TryBuildDynamicMerges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__TRYBUILDDYNAMICMERGES_OFFSET))(this);
		}

		::MoleMole::AbyssS2_GenResult* get_Result()
		{
			return ((::MoleMole::AbyssS2_GenResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR_GET_RESULT_OFFSET))(this);
		}

		static ::System::Int32 __FetchRoutePointNeighboor_g____GetIndex_16_0(::Il2CppArray<::System::Int32>* arr, ::System::Int32 qryRP, ::MoleMole::AbyssS2_DefaultMapGenerator___c__DisplayClass16_0& a3)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32, ::MoleMole::AbyssS2_DefaultMapGenerator___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___FETCHROUTEPOINTNEIGHBOOR_G____GETINDEX_16_0_OFFSET))(arr, qryRP, a3);
		}

		static ::System::Int32 _FetchRoutePointNeighbor_g__GetIndex_17_0(::Il2CppArray<::System::Int32>* arr, ::System::Int32 qryRP)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR__FETCHROUTEPOINTNEIGHBOR_G__GETINDEX_17_0_OFFSET))(arr, qryRP);
		}

		static ::System::Boolean __TryBuildDynamicMerges_g____HasSpecialIndexOrTags_29_0(::System::Int32 curAreaID)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____HASSPECIALINDEXORTAGS_29_0_OFFSET))(curAreaID);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* __TryBuildDynamicMerges_g____SplitListToNew_29_1(::System::Collections::Generic::List_1<::System::Int32>* l, ::System::Int32 fromIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____SPLITLISTTONEW_29_1_OFFSET))(l, fromIndex);
		}

		static ::System::Boolean __TryBuildDynamicMerges_g____IsLeftInRight_29_2(::System::Collections::Generic::List_1<::System::Int32>* l, ::System::Collections::Generic::List_1<::System::Int32>* r)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____ISLEFTINRIGHT_29_2_OFFSET))(l, r);
		}

		::System::Void __TryBuildDynamicMerges_g____NextPossibleSelections_29_3(::System::Int32 qryRoutePointID, ::System::Collections::Generic::List_1<::System::Int32>* possibleList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____NEXTPOSSIBLESELECTIONS_29_3_OFFSET))(this, qryRoutePointID, possibleList);
		}

		::System::Int32 __TryBuildDynamicMerges_g____GetAreaIDByRoutePointID_29_4(::System::Int32 routePointID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTMAPGENERATOR___TRYBUILDDYNAMICMERGES_G____GETAREAIDBYROUTEPOINTID_29_4_OFFSET))(this, routePointID);
		}
	};
}
