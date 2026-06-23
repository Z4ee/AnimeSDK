#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AbyssS2_GenConfigMeta.h"
#include "unitysdk/MoleMole/AbyssS2_GenRoutePointAreaConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_3_1F4762C34AABBBF6;
class Class_3_2159197412A91599;
class Class_3_9F2FCC0519F3E06F_8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ABYSSS2_GENRESULT_CHECKHASSAMEROUTE_OFFSET UNITYSDK_OFFSET(0x1345F540)
#define MOLEMOLE_ABYSSS2_GENRESULT_GET_GENMETA_OFFSET UNITYSDK_OFFSET(0x1345F510)
#define MOLEMOLE_ABYSSS2_GENRESULT_SET_GENMETA_OFFSET UNITYSDK_OFFSET(0x1345F530)
#define MOLEMOLE_ABYSSS2_GENRESULT_TESTRESULT_OFFSET UNITYSDK_OFFSET(0x13460AB0)
#define MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATAV2_OFFSET UNITYSDK_OFFSET(0x1345F7E0)
#define MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATA_OFFSET UNITYSDK_OFFSET(0x1345F770)
#define MOLEMOLE_ABYSSS2_GENRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1345F370)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____CONNECTNEXT_22_1_OFFSET UNITYSDK_OFFSET(0x13460740)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____GETORADDMAPROUTEAREA_22_0_OFFSET UNITYSDK_OFFSET(0x13460620)
#define MOLEMOLE_ABYSSS2_GENRESULT__TOMERGEROUTE_OFFSET UNITYSDK_OFFSET(0x13460890)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenResult_TypeDefinitionIndex = 85698;

	class AbyssS2_GenResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* preMergeList; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Color>* routeColors; // 0x18
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* ruleRoutes; // 0x20
		::Class_3_2159197412A91599* protoLayerMap; // 0x28
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* fullRoutes; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* mergeList; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenRoutePointAreaConfig>* GenRoutePointAreaConfigs; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* singlePathRoutePoints; // 0x48
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* rawRoutes; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* _normalStartPointID; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::AbyssS2_GenRoutePointAreaConfig>* guaranteeRoutePointAreaConfigs; // 0x60
		::MoleMole::AbyssS2_GenConfigMeta _genMeta_k__BackingField; // 0x68
		::System::Int32 usingRouteMapID; // 0x7C
		::System::UInt64 usingSeed; // 0x80
		::System::Boolean isRouteMapLastLayer; // 0x88
		::System::Int32 usingRouteMapLayer; // 0x8C

		::System::Void _ctor(::MoleMole::AbyssS2_GenConfigMeta meta)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__CTOR_OFFSET))(this, meta);
		}

		::MoleMole::AbyssS2_GenConfigMeta get_genMeta()
		{
			return ((::MoleMole::AbyssS2_GenConfigMeta(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_GET_GENMETA_OFFSET))(this);
		}

		::System::Void set_genMeta(::MoleMole::AbyssS2_GenConfigMeta value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AbyssS2_GenConfigMeta))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_SET_GENMETA_OFFSET))(this, value);
		}

		::System::Boolean CheckHasSameRoute(::Il2CppArray<::System::Int32>* check)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_CHECKHASSAMEROUTE_OFFSET))(this, check);
		}

		::Class_3_2159197412A91599* ToCsData(::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer)
		{
			return ((::Class_3_2159197412A91599*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATA_OFFSET))(this, routeMapID, layerIndex, isLastLayer);
		}

		::Class_3_2159197412A91599* ToCsDataV2(::System::Int32 routeMapID, ::System::Int32 layerIndex, ::System::Boolean isLastLayer)
		{
			return ((::Class_3_2159197412A91599*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TOCSDATAV2_OFFSET))(this, routeMapID, layerIndex, isLastLayer);
		}

		::Class_3_9F2FCC0519F3E06F_8* _ToMergeRoute(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::Class_3_9F2FCC0519F3E06F_8*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOMERGEROUTE_OFFSET))(this, indexList);
		}

		::System::Void TestResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT_TESTRESULT_OFFSET))(this);
		}

		static ::Class_3_1F4762C34AABBBF6* _ToCsDataV2_g____GetOrAddMapRouteArea_22_0(::System::Int32 routePointID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1F4762C34AABBBF6*>* qryMap)
		{
			return ((::Class_3_1F4762C34AABBBF6*(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_1F4762C34AABBBF6*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____GETORADDMAPROUTEAREA_22_0_OFFSET))(routePointID, qryMap);
		}

		static ::System::Void _ToCsDataV2_g____ConnectNext_22_1(::Class_3_1F4762C34AABBBF6* l, ::Class_3_1F4762C34AABBBF6* r)
		{
			return ((::System::Void(*)(::Class_3_1F4762C34AABBBF6*, ::Class_3_1F4762C34AABBBF6*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_GENRESULT__TOCSDATAV2_G____CONNECTNEXT_22_1_OFFSET))(l, r);
		}
	};
}
