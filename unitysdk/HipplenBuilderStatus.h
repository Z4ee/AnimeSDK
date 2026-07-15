#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HipplenBuilderBuffAsset_BuffConfig;
class HipplenBuilderStatusAsset;
class HipplenBuilderStatus_Class_1_FF08BBE63201ECB5;
class HipplenBuilderStatus_Stat;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUS_ADDBUFF_OFFSET UNITYSDK_OFFSET(0x17A69200)
#define HIPPLENBUILDERSTATUS_BUFFTIMEPASS_OFFSET UNITYSDK_OFFSET(0x17A5FD20)
#define HIPPLENBUILDERSTATUS_GETBUFFEDSTATVALUE_OFFSET UNITYSDK_OFFSET(0x17A69450)
#define HIPPLENBUILDERSTATUS_GETBUFFS_OFFSET UNITYSDK_OFFSET(0x17A629B0)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTATS_OFFSET UNITYSDK_OFFSET(0x17A5D680)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTAT_OFFSET UNITYSDK_OFFSET(0x17A65040)
#define HIPPLENBUILDERSTATUS_GETCURRENTTESTSTATS3IN1_OFFSET UNITYSDK_OFFSET(0x17A69D60)
#define HIPPLENBUILDERSTATUS_GETGRADE_OFFSET UNITYSDK_OFFSET(0x17A69DE0)
#define HIPPLENBUILDERSTATUS_GETGROWTHTODAY_OFFSET UNITYSDK_OFFSET(0x17A60350)
#define HIPPLENBUILDERSTATUS_INCREASESTAT_OFFSET UNITYSDK_OFFSET(0x17A63940)
#define HIPPLENBUILDERSTATUS_INITSTATS_OFFSET UNITYSDK_OFFSET(0x17A5C730)
#define HIPPLENBUILDERSTATUS_METHOD_5_594690EF75158D8E_OFFSET UNITYSDK_OFFSET(0x17A68FC0)
#define HIPPLENBUILDERSTATUS_METHOD_5_D2D999E57CE6D9E7_OFFSET UNITYSDK_OFFSET(0x17A69AF0)
#define HIPPLENBUILDERSTATUS_RECORDSTATYESTERDAY_OFFSET UNITYSDK_OFFSET(0x17A5E8E0)
#define HIPPLENBUILDERSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6A130)

inline static constexpr unsigned int HipplenBuilderStatus_TypeDefinitionIndex = 45417;

class HipplenBuilderStatus : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>* Field_5_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>* Field_5_1; // 0x20
	::UnityEngine::Color DefaultColor; // 0x28
	::UnityEngine::Color WarningColor; // 0x38
	::System::Collections::Generic::List_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>* Field_5_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS__CTOR_OFFSET))(this);
	}

	::System::Void BuffTimePass()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_BUFFTIMEPASS_OFFSET))(this);
	}

	::System::Void AddBuff(::HipplenBuilderBuffAsset_BuffConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderBuffAsset_BuffConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_ADDBUFF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>* GetBuffs()
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETBUFFS_OFFSET))(this);
	}

	::System::Int32 GetBuffedStatValue(::HipplenBuilderStatus_StatType a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::HipplenBuilderStatus_StatType, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETBUFFEDSTATVALUE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_594690EF75158D8E(::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_METHOD_5_594690EF75158D8E_OFFSET))(this, a1);
	}

	::System::Void InitStats(::HipplenBuilderStatusAsset* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatusAsset*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_INITSTATS_OFFSET))(this, a1);
	}

	::System::Void IncreaseStat(::HipplenBuilderStatus_StatType a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatus_StatType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_INCREASESTAT_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>* GetCurrentStats()
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderStatus_Stat*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTSTATS_OFFSET))(this);
	}

	::System::Void RecordStatYesterday()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_RECORDSTATYESTERDAY_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>* GetGrowthToday()
	{
		return ((::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETGROWTHTODAY_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>* Method_5_D2D999E57CE6D9E7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_METHOD_5_D2D999E57CE6D9E7_OFFSET))(this);
	}

	::System::Int32 GetCurrentStat(::HipplenBuilderStatus_StatType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTSTAT_OFFSET))(this, a1);
	}

	::System::Int32 GetCurrentTestStats3in1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETCURRENTTESTSTATS3IN1_OFFSET))(this);
	}

	::System::String* GetGrade(::HipplenBuilderStatus_StatType a1)
	{
		return ((::System::String*(*)(::PVOID, ::HipplenBuilderStatus_StatType))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_GETGRADE_OFFSET))(this, a1);
	}
};
