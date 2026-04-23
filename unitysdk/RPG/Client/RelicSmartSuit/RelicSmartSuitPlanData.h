#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/PlanType.h"
#include "unitysdk/System/Object.h"

class Class_1_49C9FFA56D320EFB;
class Class_1_6FC4D75D938BC053_13;
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET UNITYSDK_OFFSET(0xAFAD1B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAD4C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATEHIGHLYUSEDPLANDATAS_OFFSET UNITYSDK_OFFSET(0xAFACE00)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATESYSTEMPLANDATA_OFFSET UNITYSDK_OFFSET(0xAFAC9F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xAFB6520)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAFB62A0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xAFB6260)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_HASOUTERSET2_OFFSET UNITYSDK_OFFSET(0xAFAF8B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xAFB6480)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_INNERSETID1_OFFSET UNITYSDK_OFFSET(0xAFA9510)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xAFB62C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_ISOUTERSETFOURANDINNERSETTWO_OFFSET UNITYSDK_OFFSET(0xAFB6320)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH1_OFFSET UNITYSDK_OFFSET(0xAFB6380)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETICONPATH2_OFFSET UNITYSDK_OFFSET(0xAFB6400)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID1_OFFSET UNITYSDK_OFFSET(0xAFA9570)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_OUTERSETID2_OFFSET UNITYSDK_OFFSET(0xAFA95D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANID_OFFSET UNITYSDK_OFFSET(0xAFB6240)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xAFB6280)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_GET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xAFB6500)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xAFB62B0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_CUSTOMID_OFFSET UNITYSDK_OFFSET(0xAFB6270)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANID_OFFSET UNITYSDK_OFFSET(0xAFB6250)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_PLANTYPE_OFFSET UNITYSDK_OFFSET(0xAFB6290)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_SET_RECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xAFB6510)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAFB6600)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__GETNEXTPLANID_OFFSET UNITYSDK_OFFSET(0xAFB61D0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET UNITYSDK_OFFSET(0xAFB6670)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitPlanData_TypeDefinitionIndex = 68690;

	class RelicSmartSuitPlanData : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__NextPlanID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RelicSmartSuitPlanData_TypeDefinitionIndex)->GetStaticField(0x5F20);
		}
		::Class_1_49C9FFA56D320EFB* _OuterSetData2; // 0x10
		::RPG::Client::RelicRecommendData* _RecommendData_k__BackingField; // 0x18
		::Class_1_49C9FFA56D320EFB* _InnerSetData; // 0x20
		::Class_1_49C9FFA56D320EFB* _OuterSetData1; // 0x28
		::System::UInt32 _AvatarID_k__BackingField; // 0x30
		::System::UInt32 _CustomID_k__BackingField; // 0x34
		::RPG::Client::RelicSmartSuit::PlanType _PlanType_k__BackingField; // 0x38
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

		static ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>* CreateCustomPlanDatas(::System::Collections::Generic::IList_1<::Class_1_6FC4D75D938BC053_13*>* plans)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*>*(*)(::System::Collections::Generic::IList_1<::Class_1_6FC4D75D938BC053_13*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATAS_OFFSET))(plans);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* CreateCustomPlanData(::Class_1_6FC4D75D938BC053_13* plan)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::Class_1_6FC4D75D938BC053_13*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA_CREATECUSTOMPLANDATA_OFFSET))(plan);
		}

		::System::Void _SetupSetDatas(::System::UInt32 outerSetID1, ::System::UInt32 outerSetID2, ::System::UInt32 innerSetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITPLANDATA__SETUPSETDATAS_OFFSET))(this, outerSetID1, outerSetID2, innerSetID);
		}
	};
}
