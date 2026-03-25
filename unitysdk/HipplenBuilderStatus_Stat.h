#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class HipplenBuilderStatusAsset_StatConfig;
class HipplenBuilderStatusAsset_StatGradeConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUS_STAT_GET_GRADECONFIGS_OFFSET UNITYSDK_OFFSET(0x10C280D0)
#define HIPPLENBUILDERSTATUS_STAT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x10C280B0)
#define HIPPLENBUILDERSTATUS_STAT_GET_NAMENEG_OFFSET UNITYSDK_OFFSET(0x10C27ED0)
#define HIPPLENBUILDERSTATUS_STAT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x10C27EB0)
#define HIPPLENBUILDERSTATUS_STAT_GET_NEXTGRADEMIN_OFFSET UNITYSDK_OFFSET(0x10C27F10)
#define HIPPLENBUILDERSTATUS_STAT_GET_NORMALIZEDVALUE_OFFSET UNITYSDK_OFFSET(0x10C280F0)
#define HIPPLENBUILDERSTATUS_STAT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x10C27EF0)
#define HIPPLENBUILDERSTATUS_STAT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10C27570)
#define HIPPLENBUILDERSTATUS_STAT_GET_WARNINGVALUE_OFFSET UNITYSDK_OFFSET(0x10C28090)
#define HIPPLENBUILDERSTATUS_STAT_METHOD_1_353DAAE369AAEE14_OFFSET UNITYSDK_OFFSET(0x10C27590)
#define HIPPLENBUILDERSTATUS_STAT_METHOD_1_4F2DF85F37DC818F_OFFSET UNITYSDK_OFFSET(0x10C27F20)
#define HIPPLENBUILDERSTATUS_STAT_METHOD_1_E0BE53945D089B15_OFFSET UNITYSDK_OFFSET(0x10C27BF0)
#define HIPPLENBUILDERSTATUS_STAT__CTOR_OFFSET UNITYSDK_OFFSET(0x10C27550)

inline static constexpr unsigned int HipplenBuilderStatus_Stat_TypeDefinitionIndex = 38117;

class HipplenBuilderStatus_Stat : public ::System::Object
{
public:
	::HipplenBuilderStatusAsset_StatConfig* _config; // 0x10
	::System::Int32 Value; // 0x18

	::System::Void _ctor(::HipplenBuilderStatusAsset_StatConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::HipplenBuilderStatusAsset_StatConfig*))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT__CTOR_OFFSET))(this, a1);
	}

	::HipplenBuilderStatus_StatType get_Type()
	{
		return ((::HipplenBuilderStatus_StatType(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_TYPE_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NAME_OFFSET))(this);
	}

	::System::String* get_NameNeg()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NAMENEG_OFFSET))(this);
	}

	::UnityEngine::Vector2Int get_Range()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_RANGE_OFFSET))(this);
	}

	::System::Int32 get_NextGradeMin()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NEXTGRADEMIN_OFFSET))(this);
	}

	::System::Int32 get_WarningValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_WARNINGVALUE_OFFSET))(this);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_ISSHOW_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HipplenBuilderStatusAsset_StatGradeConfig*>* get_GradeConfigs()
	{
		return ((::System::Collections::Generic::List_1<::HipplenBuilderStatusAsset_StatGradeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_GRADECONFIGS_OFFSET))(this);
	}

	::System::Single get_NormalizedValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_GET_NORMALIZEDVALUE_OFFSET))(this);
	}

	::System::Void Method_1_353DAAE369AAEE14(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_METHOD_1_353DAAE369AAEE14_OFFSET))(this, a1);
	}

	::System::String* Method_1_E0BE53945D089B15()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_METHOD_1_E0BE53945D089B15_OFFSET))(this);
	}

	::System::Int32 Method_1_4F2DF85F37DC818F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUS_STAT_METHOD_1_4F2DF85F37DC818F_OFFSET))(this);
	}
};
