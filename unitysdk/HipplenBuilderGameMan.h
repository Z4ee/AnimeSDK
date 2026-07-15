#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BabyHipplenController;
class HipplenBuilderActivityAsset;
class HipplenBuilderActivityAsset_Activity;
class HipplenBuilderBehaviorAsset;
class HipplenBuilderBehaviorAsset_BehaviorConfig;
class HipplenBuilderBuffAsset;
class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderStatus;
class HipplenBuilderStatusAsset;
class HipplenBuilderTestModule;
class HipplenBuilderTimeAsset;
class HipplenBuilderUIMan;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERGAMEMAN_ADDORREMOVEACTIVITY_OFFSET UNITYSDK_OFFSET(0x17A63380)
#define HIPPLENBUILDERGAMEMAN_ADDTIME_OFFSET UNITYSDK_OFFSET(0x17A627B0)
#define HIPPLENBUILDERGAMEMAN_AWAKE_OFFSET UNITYSDK_OFFSET(0x17A5C580)
#define HIPPLENBUILDERGAMEMAN_DISPLAYAVAILABLEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x17A5E3E0)
#define HIPPLENBUILDERGAMEMAN_ENDACTIVITY_OFFSET UNITYSDK_OFFSET(0x17A63DB0)
#define HIPPLENBUILDERGAMEMAN_ENDDAY_OFFSET UNITYSDK_OFFSET(0x17A602D0)
#define HIPPLENBUILDERGAMEMAN_GETBEHAVIORDESC_OFFSET UNITYSDK_OFFSET(0x17A64C90)
#define HIPPLENBUILDERGAMEMAN_GETCURRENTDAY_OFFSET UNITYSDK_OFFSET(0x17A62770)
#define HIPPLENBUILDERGAMEMAN_GETSTATNAMEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x17A64830)
#define HIPPLENBUILDERGAMEMAN_HASSTATNEGATIVENAME_OFFSET UNITYSDK_OFFSET(0x17A649C0)
#define HIPPLENBUILDERGAMEMAN_ISBEHAVIORPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x17A64EF0)
#define HIPPLENBUILDERGAMEMAN_ISSTATSHOW_OFFSET UNITYSDK_OFFSET(0x17A64B40)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_493A4A9D35793C6D_OFFSET UNITYSDK_OFFSET(0x17A630B0)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_ACEB48F8A3C6FEEB_OFFSET UNITYSDK_OFFSET(0x17A62F30)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x17A60CE0)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x17A60E30)
#define HIPPLENBUILDERGAMEMAN_PERFORMACTIVITY_OFFSET UNITYSDK_OFFSET(0x17A634E0)
#define HIPPLENBUILDERGAMEMAN_PERFORMALLACTIVITY_OFFSET UNITYSDK_OFFSET(0x17A63C60)
#define HIPPLENBUILDERGAMEMAN_REFRESHBUFFDISPLAY_OFFSET UNITYSDK_OFFSET(0x17A60C40)
#define HIPPLENBUILDERGAMEMAN_REFRESHSTATSDISPLAY_OFFSET UNITYSDK_OFFSET(0x17A5FF50)
#define HIPPLENBUILDERGAMEMAN_STARTNEWDAY_OFFSET UNITYSDK_OFFSET(0x17A5E6B0)
#define HIPPLENBUILDERGAMEMAN_START_OFFSET UNITYSDK_OFFSET(0x17A5C600)
#define HIPPLENBUILDERGAMEMAN_TAKETEST_OFFSET UNITYSDK_OFFSET(0x17A63F90)
#define HIPPLENBUILDERGAMEMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x17A651E0)
#define HIPPLENBUILDERGAMEMAN__DISPLAYAVAILABLEACTIVITIES_B__27_0_OFFSET UNITYSDK_OFFSET(0x17A65270)
#define HIPPLENBUILDERGAMEMAN__SELECTACTIVITIES_B__25_0_OFFSET UNITYSDK_OFFSET(0x17A65230)
#define HIPPLENBUILDERGAMEMAN__SELECTBUFFS_B__24_0_OFFSET UNITYSDK_OFFSET(0x17A651F0)

inline static constexpr unsigned int HipplenBuilderGameMan_TypeDefinitionIndex = 45411;

class HipplenBuilderGameMan : public ::UnityEngine::MonoBehaviour
{
public:
	static ::HipplenBuilderGameMan** StaticGet_Instance()
	{
		return (::HipplenBuilderGameMan**)Il2CppClass::FromTypeDefinitionIndex(HipplenBuilderGameMan_TypeDefinitionIndex)->GetStaticField(0x5F760);
	}
	::BabyHipplenController* BabyHipplen; // 0x18
	::HipplenBuilderStatus* HipplenStatus; // 0x20
	::HipplenBuilderTestModule* TestModule; // 0x28
	::HipplenBuilderTimeAsset* TimeAsset; // 0x30
	::HipplenBuilderBehaviorAsset* BehaviorAsset; // 0x38
	::HipplenBuilderActivityAsset* ActivityAsset; // 0x40
	::HipplenBuilderStatusAsset* StatusAsset; // 0x48
	::HipplenBuilderBuffAsset* BuffAsset; // 0x50
	::HipplenBuilderUIMan* UIMan; // 0x58
	::System::Int32 ActivitiesPerDay; // 0x60
	::System::Int32 currentDay; // 0x64
	::System::Int32 activitiesLeftToday; // 0x68
	::System::Boolean Field_5_13; // 0x6C
	::System::Boolean Field_5_14; // 0x6D
	::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* Field_5_15; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_AWAKE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_START_OFFSET))(this);
	}

	::System::Void StartNewDay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_STARTNEWDAY_OFFSET))(this);
	}

	::System::Void EndDay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ENDDAY_OFFSET))(this);
	}

	::System::Void RefreshStatsDisplay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_REFRESHSTATSDISPLAY_OFFSET))(this);
	}

	::System::Int32 GetCurrentDay()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_GETCURRENTDAY_OFFSET))(this);
	}

	::System::Void AddTime(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ADDTIME_OFFSET))(this, a1);
	}

	::System::Void RefreshBuffDisplay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_REFRESHBUFFDISPLAY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffConfig*>* Method_5_ACEB48F8A3C6FEEB(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderBuffAsset_BuffConfig*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_METHOD_5_ACEB48F8A3C6FEEB_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* Method_5_493A4A9D35793C6D(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_METHOD_5_493A4A9D35793C6D_OFFSET))(this, a1);
	}

	::System::Void Method_5_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_METHOD_5_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void DisplayAvailableActivities()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_DISPLAYAVAILABLEACTIVITIES_OFFSET))(this);
	}

	::System::Void AddOrRemoveActivity(::HipplenBuilderActivityAsset_Activity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ADDORREMOVEACTIVITY_OFFSET))(this, a1);
	}

	::System::Int32 Method_5_FD97D7184557CB1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_METHOD_5_FD97D7184557CB1A_OFFSET))(this);
	}

	::System::Void PerformActivity(::HipplenBuilderActivityAsset_Activity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_PERFORMACTIVITY_OFFSET))(this, a1, a2);
	}

	::System::Void PerformAllActivity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_PERFORMALLACTIVITY_OFFSET))(this);
	}

	::System::Void EndActivity()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ENDACTIVITY_OFFSET))(this);
	}

	::System::Void TakeTest()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_TAKETEST_OFFSET))(this);
	}

	::System::String* GetStatNameFromType(::HipplenBuilderStatus_StatType a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::HipplenBuilderStatus_StatType, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_GETSTATNAMEFROMTYPE_OFFSET))(this, a1, a2);
	}

	::System::Boolean HasStatNegativeName(::HipplenBuilderStatus_StatType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_HASSTATNEGATIVENAME_OFFSET))(this, a1);
	}

	::System::Boolean IsStatShow(::HipplenBuilderStatus_StatType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ISSTATSHOW_OFFSET))(this, a1);
	}

	::System::String* GetBehaviorDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_GETBEHAVIORDESC_OFFSET))(this);
	}

	::System::Boolean IsBehaviorPossible(::HipplenBuilderBehaviorAsset_BehaviorConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderBehaviorAsset_BehaviorConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN_ISBEHAVIORPOSSIBLE_OFFSET))(this, a1);
	}

	::System::Int32 _SelectBuffs_b__24_0(::HipplenBuilderBuffAsset_BuffConfig* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::HipplenBuilderBuffAsset_BuffConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN__SELECTBUFFS_B__24_0_OFFSET))(this, a1);
	}

	::System::Int32 _SelectActivities_b__25_0(::HipplenBuilderActivityAsset_Activity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN__SELECTACTIVITIES_B__25_0_OFFSET))(this, a1);
	}

	::System::Boolean _DisplayAvailableActivities_b__27_0(::HipplenBuilderActivityAsset_Activity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::HipplenBuilderActivityAsset_Activity*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERGAMEMAN__DISPLAYAVAILABLEACTIVITIES_B__27_0_OFFSET))(this, a1);
	}
};
