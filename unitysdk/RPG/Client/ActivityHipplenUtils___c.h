#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B6B1EA474B8E7B0;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenGiftData; }
namespace RPG::Client::ActivityHipplen { class ActivityHipplenInteractPropData; }
namespace RPG::GameCore { class ActivityHipplenPhaseRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B19500)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B19540)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETCYCLEGROWTHPHASETRIALNAMELIST_B__26_0_OFFSET UNITYSDK_OFFSET(0x9B195E0)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETITEMDISPLAYDATAFROMGIFTLIST_B__28_0_OFFSET UNITYSDK_OFFSET(0x9B19620)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETNEWUNLOCKEDINTERACTPROPS_B__25_0_OFFSET UNITYSDK_OFFSET(0x9B19590)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETSTATGRADETYPE_B__1_0_OFFSET UNITYSDK_OFFSET(0x9B19550)
#define RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__OPENHIPPLENMAINPAGE_B__31_1_OFFSET UNITYSDK_OFFSET(0x9B19650)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHipplenUtils___c_TypeDefinitionIndex = 56744;

	class ActivityHipplenUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::GameCore::ActivityHipplenPhaseRow*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::ActivityHipplenPhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27100);
		}
		static ::RPG::Client::ActivityHipplenUtils___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplenUtils___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27108);
		}
		static ::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>** StaticGet___9__25_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27110);
		}
		static ::System::Action** StaticGet___9__31_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27118);
		}
		static ::System::Comparison_1<::Class_1_4B6B1EA474B8E7B0*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::Class_1_4B6B1EA474B8E7B0*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27120);
		}
		static ::System::Func_2<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::System::UInt32>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenUtils___c_TypeDefinitionIndex)->GetStaticField(0x27128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetStatGradeType_b__1_0(::Class_1_4B6B1EA474B8E7B0* l, ::Class_1_4B6B1EA474B8E7B0* r)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_4B6B1EA474B8E7B0*, ::Class_1_4B6B1EA474B8E7B0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETSTATGRADETYPE_B__1_0_OFFSET))(this, l, r);
		}

		::System::Int32 _GetNewUnlockedInteractProps_b__25_0(::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* a, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*, ::RPG::Client::ActivityHipplen::ActivityHipplenInteractPropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETNEWUNLOCKEDINTERACTPROPS_B__25_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetCycleGrowthPhaseTrialNameList_b__26_0(::RPG::GameCore::ActivityHipplenPhaseRow* a, ::RPG::GameCore::ActivityHipplenPhaseRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityHipplenPhaseRow*, ::RPG::GameCore::ActivityHipplenPhaseRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETCYCLEGROWTHPHASETRIALNAMELIST_B__26_0_OFFSET))(this, a, b);
		}

		::System::UInt32 _GetItemDisplayDataFromGiftList_b__28_0(::RPG::Client::ActivityHipplen::ActivityHipplenGiftData* g)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__GETITEMDISPLAYDATAFROMGIFTLIST_B__28_0_OFFSET))(this, g);
		}

		::System::Void _OpenHipplenMainPage_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLENUTILS___C__OPENHIPPLENMAINPAGE_B__31_1_OFFSET))(this);
		}
	};
}
