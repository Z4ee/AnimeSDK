#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA_6;
class Class_1_49C9FFA56D320EFB;
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET UNITYSDK_OFFSET(0xDE420E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE427D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATEHIGHLYUSEDPLANDATAS_OFFSET UNITYSDK_OFFSET(0xDE41B20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xDE416B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE4CE10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDE4CB90)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xDE4CB50)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_HASOUTERSET2_OFFSET UNITYSDK_OFFSET(0xDE45950)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xDE4CD80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETID1_OFFSET UNITYSDK_OFFSET(0xDE3C370)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xDE4CBB0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISOUTERSETFOURANDINNERSETTWO_OFFSET UNITYSDK_OFFSET(0xDE4CC10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xDE4CCA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH2_OFFSET UNITYSDK_OFFSET(0xDE4CD10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID1_OFFSET UNITYSDK_OFFSET(0xDE3C3F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID2_OFFSET UNITYSDK_OFFSET(0xDE3C470)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xDE4CB30)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xDE4CB70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xDE4CDF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDE4CBA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xDE4CB60)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xDE4CB40)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xDE4CB80)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xDE4CE00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDE4CED0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__GETNEXTPLANID_OFFSET UNITYSDK_OFFSET(0xDE4CAE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET UNITYSDK_OFFSET(0xDE4CF20)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitPlanData_TypeDefinitionIndex = 74325;

	class RelicSmartSuitPlanData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__NextPlanID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitPlanData_TypeDefinitionIndex)->GetStaticField(0x13B60);
		}
		::Class_1_49C9FFA56D320EFB* _OuterSetData1; // 0x10
		::Class_1_49C9FFA56D320EFB* _OuterSetData2; // 0x18
		::RPG::Client::RelicRecommendData* _RecommendData_k__BackingField; // 0x20
		::Class_1_49C9FFA56D320EFB* _InnerSetData; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::System::UInt32 _PlanID_k__BackingField; // 0x34
		::System::Boolean _Enabled; // 0x38
		::System::UInt32 _CustomID_k__BackingField; // 0x3C
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__CTOR_OFFSET))(this);
		}

		static ::System::UInt32 _GetNextPlanID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__GETNEXTPLANID_OFFSET))();
		}

		::System::UInt32 get_PlanID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANID_OFFSET))(this);
		}

		::System::Void set_PlanID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CustomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_CUSTOMID_OFFSET))(this);
		}

		::System::Void set_CustomID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_CUSTOMID_OFFSET))(this, a1);
		}

		::RPG::Client::RelicSmartSuit::PlanType get_PlanType()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANTYPE_OFFSET))(this);
		}

		::System::Void set_PlanType(::RPG::Client::RelicSmartSuit::PlanType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISENABLED_OFFSET))(this);
		}

		::System::Boolean get_HasOuterSet2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_HASOUTERSET2_OFFSET))(this);
		}

		::System::Boolean get_IsOuterSetFourAndInnerSetTwo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISOUTERSETFOURANDINNERSETTWO_OFFSET))(this);
		}

		::System::UInt32 get_OuterSetID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID1_OFFSET))(this);
		}

		::System::UInt32 get_OuterSetID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID2_OFFSET))(this);
		}

		::System::UInt32 get_InnerSetID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETID1_OFFSET))(this);
		}

		::System::String* get_OuterSetIconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH1_OFFSET))(this);
		}

		::System::String* get_OuterSetIconPath2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH2_OFFSET))(this);
		}

		::System::String* get_InnerSetIconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETICONPATH1_OFFSET))(this);
		}

		::RPG::Client::RelicRecommendData* get_RecommendData()
		{
			return ((::RPG::Client::RelicRecommendData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_RECOMMENDDATA_OFFSET))(this);
		}

		::System::Void set_RecommendData(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_RECOMMENDDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Create(::RPG::Client::RelicSmartSuit::PlanType a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::RPG::Client::RelicSmartSuit::PlanType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* CreateSystemPlanData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATESYSTEMPLANDATA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* CreateHighlyUsedPlanDatas(::RPG::Client::Recommend::RelicRecommendBigData* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATEHIGHLYUSEDPLANDATAS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* CreateCustomPlanDatas(::System::Collections::Generic::IList_1<::Class_1_333B902B2174BECA_6*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_333B902B2174BECA_6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET))(a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* CreateCustomPlanData(::Class_1_333B902B2174BECA_6* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::Class_1_333B902B2174BECA_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET))(a1);
		}

		::System::Void _SetupSetDatas(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET))(this, a1, a2, a3);
		}
	};
}
