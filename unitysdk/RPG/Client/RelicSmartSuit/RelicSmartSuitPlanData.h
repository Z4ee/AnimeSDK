#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/System/Object.h"

class Class_1_49C9FFA56D320EFB;
class Class_1_99BD961747420BEB_50;
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET UNITYSDK_OFFSET(0xA2B24D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xA2B27E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATEHIGHLYUSEDPLANDATAS_OFFSET UNITYSDK_OFFSET(0xA2B2120)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xA2B1D10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2BB3F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2BB170)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xA2BB130)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_HASOUTERSET2_OFFSET UNITYSDK_OFFSET(0xA2B4ED0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xA2BB350)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETID1_OFFSET UNITYSDK_OFFSET(0xA2AEA60)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA2BB190)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISOUTERSETFOURANDINNERSETTWO_OFFSET UNITYSDK_OFFSET(0xA2BB1F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xA2BB250)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH2_OFFSET UNITYSDK_OFFSET(0xA2BB2D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID1_OFFSET UNITYSDK_OFFSET(0xA2AEAC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID2_OFFSET UNITYSDK_OFFSET(0xA2AEB20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xA2BB110)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xA2BB150)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2BB3D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA2BB180)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xA2BB140)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xA2BB120)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xA2BB160)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xA2BB3E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2BB4D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__GETNEXTPLANID_OFFSET UNITYSDK_OFFSET(0xA2BB0A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET UNITYSDK_OFFSET(0xA2BB540)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitPlanData_TypeDefinitionIndex = 61179;

	class RelicSmartSuitPlanData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__NextPlanID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitPlanData_TypeDefinitionIndex)->GetStaticField(0x5CC0);
		}
		::Class_1_49C9FFA56D320EFB* _OuterSetData2; // 0x10
		::Class_1_49C9FFA56D320EFB* _OuterSetData1; // 0x18
		::Class_1_49C9FFA56D320EFB* _InnerSetData; // 0x20
		::RPG::Client::RelicRecommendData* _RecommendData_k__BackingField; // 0x28
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x30
		::System::UInt32 _CustomID_k__BackingField; // 0x34
		::System::UInt32 _AvatarID_k__BackingField; // 0x38
		::System::UInt32 _PlanID_k__BackingField; // 0x3C
		::System::Boolean _Enabled; // 0x40

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

		::System::Void set_PlanID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANID_OFFSET))(this, value);
		}

		::System::UInt32 get_CustomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_CUSTOMID_OFFSET))(this);
		}

		::System::Void set_CustomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_CUSTOMID_OFFSET))(this, value);
		}

		::RPG::Client::RelicSmartSuit::PlanType get_PlanType()
		{
			return ((::RPG::Client::RelicSmartSuit::PlanType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANTYPE_OFFSET))(this);
		}

		::System::Void set_PlanType(::RPG::Client::RelicSmartSuit::PlanType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::PlanType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_AVATARID_OFFSET))(this, value);
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

		::System::Void set_RecommendData(::RPG::Client::RelicRecommendData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_RECOMMENDDATA_OFFSET))(this, value);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Create(::RPG::Client::RelicSmartSuit::PlanType type, ::System::Boolean enabled)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::RPG::Client::RelicSmartSuit::PlanType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATE_OFFSET))(type, enabled);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* CreateSystemPlanData(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATESYSTEMPLANDATA_OFFSET))(avatarRealID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* CreateHighlyUsedPlanDatas(::RPG::Client::Recommend::RelicRecommendBigData* bigData)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATEHIGHLYUSEDPLANDATAS_OFFSET))(bigData);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* CreateCustomPlanDatas(::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_50*>* plans)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_99BD961747420BEB_50*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET))(plans);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* CreateCustomPlanData(::Class_1_99BD961747420BEB_50* plan)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::Class_1_99BD961747420BEB_50*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET))(plan);
		}

		::System::Void _SetupSetDatas(::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET))(this, outerSetID1, outerSetID2, innerSetID);
		}
	};
}
