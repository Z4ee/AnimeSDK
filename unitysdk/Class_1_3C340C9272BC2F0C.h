#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CDFB27773AA3AA22;
namespace System { class String; }

#define CLASS_1_3C340C9272BC2F0C_GET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0xA6304C0)
#define CLASS_1_3C340C9272BC2F0C_GET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA6304A0)
#define CLASS_1_3C340C9272BC2F0C_METHOD_1_319FFA9E947BAB13_OFFSET UNITYSDK_OFFSET(0xA630570)
#define CLASS_1_3C340C9272BC2F0C_METHOD_1_FF5188F77C143723_OFFSET UNITYSDK_OFFSET(0xA6304E0)
#define CLASS_1_3C340C9272BC2F0C_SET_RECOMMENDMAINAFFIXBONUS_OFFSET UNITYSDK_OFFSET(0xA6304D0)
#define CLASS_1_3C340C9272BC2F0C_SET_RELICSCORERESULTINFO_OFFSET UNITYSDK_OFFSET(0xA6304B0)
#define CLASS_1_3C340C9272BC2F0C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6306F0)

inline static constexpr unsigned int Class_1_3C340C9272BC2F0C_TypeDefinitionIndex = 69512;

class Class_1_3C340C9272BC2F0C : public ::System::Object
{
public:
	::Class_1_CDFB27773AA3AA22* _RelicScoreResultInfo_k__BackingField; // 0x10
	::System::Single _RecommendMainAffixBonus_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C__CTOR_OFFSET))(this);
	}

	::Class_1_CDFB27773AA3AA22* get_RelicScoreResultInfo()
	{
		return ((::Class_1_CDFB27773AA3AA22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_GET_RELICSCORERESULTINFO_OFFSET))(this);
	}

	::System::Void set_RelicScoreResultInfo(::Class_1_CDFB27773AA3AA22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CDFB27773AA3AA22*))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_SET_RELICSCORERESULTINFO_OFFSET))(this, a1);
	}

	::System::Single get_RecommendMainAffixBonus()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_GET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this);
	}

	::System::Void set_RecommendMainAffixBonus(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_SET_RECOMMENDMAINAFFIXBONUS_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF5188F77C143723()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_METHOD_1_FF5188F77C143723_OFFSET))(this);
	}

	::System::String* Method_1_319FFA9E947BAB13()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C340C9272BC2F0C_METHOD_1_319FFA9E947BAB13_OFFSET))(this);
	}
};
