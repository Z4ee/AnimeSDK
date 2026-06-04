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

#define HIPPLENBUILDERSTATUS_ADDBUFF_OFFSET UNITYSDK_OFFSET(0x13C6D1F0)
#define HIPPLENBUILDERSTATUS_BUFFTIMEPASS_OFFSET UNITYSDK_OFFSET(0x13C64860)
#define HIPPLENBUILDERSTATUS_GETBUFFEDSTATVALUE_OFFSET UNITYSDK_OFFSET(0x13C6D440)
#define HIPPLENBUILDERSTATUS_GETBUFFS_OFFSET UNITYSDK_OFFSET(0x13C66DC0)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTATS_OFFSET UNITYSDK_OFFSET(0x13C62870)
#define HIPPLENBUILDERSTATUS_GETCURRENTSTAT_OFFSET UNITYSDK_OFFSET(0x13C69240)
#define HIPPLENBUILDERSTATUS_GETCURRENTTESTSTATS3IN1_OFFSET UNITYSDK_OFFSET(0x13C6DAA0)
#define HIPPLENBUILDERSTATUS_GETGRADE_OFFSET UNITYSDK_OFFSET(0x13C6DB20)
#define HIPPLENBUILDERSTATUS_GETGROWTHTODAY_OFFSET UNITYSDK_OFFSET(0x13C64E20)
#define HIPPLENBUILDERSTATUS_INCREASESTAT_OFFSET UNITYSDK_OFFSET(0x13C67CB0)
#define HIPPLENBUILDERSTATUS_INITSTATS_OFFSET UNITYSDK_OFFSET(0x13C61A30)
#define HIPPLENBUILDERSTATUS_METHOD_5_3B842C110FF66B0C_OFFSET UNITYSDK_OFFSET(0x13C6D0F0)
#define HIPPLENBUILDERSTATUS_METHOD_5_B1C7F6F81D041BE9_OFFSET UNITYSDK_OFFSET(0x13C6D880)
#define HIPPLENBUILDERSTATUS_RECORDSTATYESTERDAY_OFFSET UNITYSDK_OFFSET(0x13C63790)
#define HIPPLENBUILDERSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6DDD0)

inline static constexpr unsigned int HipplenBuilderStatus_TypeDefinitionIndex = 44545;

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

	::System::Void Method_5_3B842C110FF66B0C(::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatus_Class_1_FF08BBE63201ECB5*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_METHOD_5_3B842C110FF66B0C_OFFSET))(this, a1);
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

	::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>* Method_5_B1C7F6F81D041BE9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::HipplenBuilderStatus_StatType, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_METHOD_5_B1C7F6F81D041BE9_OFFSET))(this);
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
