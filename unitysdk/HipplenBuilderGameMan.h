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

#define HIPPLENBUILDERGAMEMAN_ADDORREMOVEACTIVITY_OFFSET UNITYSDK_OFFSET(0x15AD6610)
#define HIPPLENBUILDERGAMEMAN_ADDTIME_OFFSET UNITYSDK_OFFSET(0x15AD5A40)
#define HIPPLENBUILDERGAMEMAN_AWAKE_OFFSET UNITYSDK_OFFSET(0x15ACF810)
#define HIPPLENBUILDERGAMEMAN_DISPLAYAVAILABLEACTIVITIES_OFFSET UNITYSDK_OFFSET(0x15AD1670)
#define HIPPLENBUILDERGAMEMAN_ENDACTIVITY_OFFSET UNITYSDK_OFFSET(0x15AD7040)
#define HIPPLENBUILDERGAMEMAN_ENDDAY_OFFSET UNITYSDK_OFFSET(0x15AD3560)
#define HIPPLENBUILDERGAMEMAN_GETBEHAVIORDESC_OFFSET UNITYSDK_OFFSET(0x15AD7F20)
#define HIPPLENBUILDERGAMEMAN_GETCURRENTDAY_OFFSET UNITYSDK_OFFSET(0x15AD5A00)
#define HIPPLENBUILDERGAMEMAN_GETSTATNAMEFROMTYPE_OFFSET UNITYSDK_OFFSET(0x15AD7AC0)
#define HIPPLENBUILDERGAMEMAN_HASSTATNEGATIVENAME_OFFSET UNITYSDK_OFFSET(0x15AD7C50)
#define HIPPLENBUILDERGAMEMAN_ISBEHAVIORPOSSIBLE_OFFSET UNITYSDK_OFFSET(0x15AD8180)
#define HIPPLENBUILDERGAMEMAN_ISSTATSHOW_OFFSET UNITYSDK_OFFSET(0x15AD7DD0)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_493A4A9D35793C6D_OFFSET UNITYSDK_OFFSET(0x15AD6340)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_ACEB48F8A3C6FEEB_OFFSET UNITYSDK_OFFSET(0x15AD61C0)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x15AD3F70)
#define HIPPLENBUILDERGAMEMAN_METHOD_5_FD97D7184557CB1A_OFFSET UNITYSDK_OFFSET(0x15AD40C0)
#define HIPPLENBUILDERGAMEMAN_PERFORMACTIVITY_OFFSET UNITYSDK_OFFSET(0x15AD6770)
#define HIPPLENBUILDERGAMEMAN_PERFORMALLACTIVITY_OFFSET UNITYSDK_OFFSET(0x15AD6EF0)
#define HIPPLENBUILDERGAMEMAN_REFRESHBUFFDISPLAY_OFFSET UNITYSDK_OFFSET(0x15AD3ED0)
#define HIPPLENBUILDERGAMEMAN_REFRESHSTATSDISPLAY_OFFSET UNITYSDK_OFFSET(0x15AD31E0)
#define HIPPLENBUILDERGAMEMAN_STARTNEWDAY_OFFSET UNITYSDK_OFFSET(0x15AD1940)
#define HIPPLENBUILDERGAMEMAN_START_OFFSET UNITYSDK_OFFSET(0x15ACF890)
#define HIPPLENBUILDERGAMEMAN_TAKETEST_OFFSET UNITYSDK_OFFSET(0x15AD7220)
#define HIPPLENBUILDERGAMEMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD8470)
#define HIPPLENBUILDERGAMEMAN__DISPLAYAVAILABLEACTIVITIES_B__27_0_OFFSET UNITYSDK_OFFSET(0x15AD8500)
#define HIPPLENBUILDERGAMEMAN__SELECTACTIVITIES_B__25_0_OFFSET UNITYSDK_OFFSET(0x15AD84C0)
#define HIPPLENBUILDERGAMEMAN__SELECTBUFFS_B__24_0_OFFSET UNITYSDK_OFFSET(0x15AD8480)

inline static constexpr unsigned int HipplenBuilderGameMan_TypeDefinitionIndex = 47661;

class HipplenBuilderGameMan : public ::UnityEngine::MonoBehaviour
{
public:
	static ::HipplenBuilderGameMan** StaticGet_Instance()
	{
		return (::HipplenBuilderGameMan**)Il2CppClass::FromTypeDefinitionIndex(HipplenBuilderGameMan_TypeDefinitionIndex)->GetStaticField(0x60BA0);
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
	::System::Boolean NNDAKKCNOKB; // 0x6C
	::System::Boolean ILAAFAGBKOI; // 0x6D
	::System::Collections::Generic::List_1<::HipplenBuilderActivityAsset_Activity*>* MGBMKCDIGPP; // 0x70

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
