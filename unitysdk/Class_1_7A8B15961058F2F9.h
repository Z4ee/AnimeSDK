#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_843E9EA2A1BBF274;
namespace System { class String; }

#define CLASS_1_7A8B15961058F2F9_GET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0x89E7820)
#define CLASS_1_7A8B15961058F2F9_GET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0x89E7800)
#define CLASS_1_7A8B15961058F2F9_METHOD_1_319FFA9E947BAB13_OFFSET UNITYSDK_OFFSET(0x89E78D0)
#define CLASS_1_7A8B15961058F2F9_METHOD_1_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0x89E7840)
#define CLASS_1_7A8B15961058F2F9_SET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0x89E7830)
#define CLASS_1_7A8B15961058F2F9_SET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0x89E7810)
#define CLASS_1_7A8B15961058F2F9__CTOR_OFFSET UNITYSDK_OFFSET(0x89E7A50)

inline static constexpr unsigned int Class_1_7A8B15961058F2F9_TypeDefinitionIndex = 61189;

class Class_1_7A8B15961058F2F9 : public ::System::Object
{
public:
	::Class_1_843E9EA2A1BBF274* _RelicScoreResultInfo_k__BackingField; // 0x10
	::System::Single _RecommendMainAffixBonus_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9__CTOR_OFFSET))(this);
	}

	::Class_1_843E9EA2A1BBF274* get_RelicScoreResultInfo()
	{
		return ((::Class_1_843E9EA2A1BBF274*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_GET_RELICSCORERESULTINFO_OFFSET))(this);
	}

	::System::Void set_RelicScoreResultInfo(::Class_1_843E9EA2A1BBF274* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843E9EA2A1BBF274*))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_SET_RELICSCORERESULTINFO_OFFSET))(this, value);
	}

	::System::Single get_RecommendMainAffixBonus()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_GET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this);
	}

	::System::Void set_RecommendMainAffixBonus(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_SET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this, value);
	}

	::System::Single Method_1_FF5188F77C143723()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_METHOD_1_FF5188F77C143723_OFFSET))(this);
	}

	::System::String* Method_1_319FFA9E947BAB13()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A8B15961058F2F9_METHOD_1_319FFA9E947BAB13_OFFSET))(this);
	}
};
