#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_1_0D27A768478CF998;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_93CE0B4B731DA0D4_GET_ASSISTRECOMMENDCHIPS_OFFSET UNITYSDK_OFFSET(0xB4ACC60)
#define CLASS_1_93CE0B4B731DA0D4_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xB4ACB90)
#define CLASS_1_93CE0B4B731DA0D4_GET_DIYMECHATRONID_OFFSET UNITYSDK_OFFSET(0xB4ACC50)
#define CLASS_1_93CE0B4B731DA0D4_GET_ENDGAMEPLACECHIPSCHEMEID_OFFSET UNITYSDK_OFFSET(0xB4ACBE0)
#define CLASS_1_93CE0B4B731DA0D4_GET_EXAMCMT_OFFSET UNITYSDK_OFFSET(0xB4ACC30)
#define CLASS_1_93CE0B4B731DA0D4_GET_EXAMDESC_OFFSET UNITYSDK_OFFSET(0xB4ACC20)
#define CLASS_1_93CE0B4B731DA0D4_GET_EXAMINERACTORID_OFFSET UNITYSDK_OFFSET(0xB4ACBF0)
#define CLASS_1_93CE0B4B731DA0D4_GET_ID_OFFSET UNITYSDK_OFFSET(0xB4ACBA0)
#define CLASS_1_93CE0B4B731DA0D4_GET_ISRETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0xB4ACC10)
#define CLASS_1_93CE0B4B731DA0D4_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB4ACC00)
#define CLASS_1_93CE0B4B731DA0D4_GET_OVERRIDEBOARDSIZE_OFFSET UNITYSDK_OFFSET(0xB4ACBC0)
#define CLASS_1_93CE0B4B731DA0D4_GET_REPORTID_OFFSET UNITYSDK_OFFSET(0xB4ACC40)
#define CLASS_1_93CE0B4B731DA0D4_GET_REQUIREMENTID_OFFSET UNITYSDK_OFFSET(0xB4ACBB0)
#define CLASS_1_93CE0B4B731DA0D4__CTOR_OFFSET UNITYSDK_OFFSET(0xB4ACC70)

inline static constexpr unsigned int Class_1_93CE0B4B731DA0D4_TypeDefinitionIndex = 80108;

class Class_1_93CE0B4B731DA0D4 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>* _AssistRecommendChips_k__BackingField; // 0x10
	::System::Int32 _CacheKey_k__BackingField; // 0x18
	::System::Nullable_1<::UnityEngine::Vector2Int> _OverrideBoardSize_k__BackingField; // 0x1C
	::RPG::Client::TextID _ExamCmt_k__BackingField; // 0x28
	::System::UInt32 _ID_k__BackingField; // 0x38
	::RPG::Client::TextID _Name_k__BackingField; // 0x40
	::System::Boolean _IsReturnToMaze_k__BackingField; // 0x50
	::System::UInt32 _ExaminerActorID_k__BackingField; // 0x54
	::RPG::Client::TextID _ExamDesc_k__BackingField; // 0x58
	::System::UInt32 _DiyMechatronID_k__BackingField; // 0x68
	::System::Nullable_1<::System::UInt32> _EndgamePlaceChipSchemeID_k__BackingField; // 0x6C
	::System::UInt32 _ReportID_k__BackingField; // 0x74
	::System::UInt32 _RequirementID_k__BackingField; // 0x78

	::System::Void _ctor(::Class_1_0D27A768478CF998* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0D27A768478CF998*))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_CacheKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_CACHEKEY_OFFSET))(this);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_ID_OFFSET))(this);
	}

	::System::UInt32 get_RequirementID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_REQUIREMENTID_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2Int> get_OverrideBoardSize()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_OVERRIDEBOARDSIZE_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> get_EndgamePlaceChipSchemeID()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_ENDGAMEPLACECHIPSCHEMEID_OFFSET))(this);
	}

	::System::UInt32 get_ExaminerActorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_EXAMINERACTORID_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_NAME_OFFSET))(this);
	}

	::System::Boolean get_IsReturnToMaze()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_ISRETURNTOMAZE_OFFSET))(this);
	}

	::RPG::Client::TextID get_ExamDesc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_EXAMDESC_OFFSET))(this);
	}

	::RPG::Client::TextID get_ExamCmt()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_EXAMCMT_OFFSET))(this);
	}

	::System::UInt32 get_ReportID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_REPORTID_OFFSET))(this);
	}

	::System::UInt32 get_DiyMechatronID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_DIYMECHATRONID_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>* get_AssistRecommendChips()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93CE0B4B731DA0D4_GET_ASSISTRECOMMENDCHIPS_OFFSET))(this);
	}
};
