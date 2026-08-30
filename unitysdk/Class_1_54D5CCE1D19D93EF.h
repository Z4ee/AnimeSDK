#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C1B6F38E8E579A2;

#define CLASS_1_54D5CCE1D19D93EF_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x17C94340)
#define CLASS_1_54D5CCE1D19D93EF_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x17C94360)
#define CLASS_1_54D5CCE1D19D93EF_GET_STARNUM_OFFSET UNITYSDK_OFFSET(0x17C94380)
#define CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x17C942A0)
#define CLASS_1_54D5CCE1D19D93EF_SET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x17C94350)
#define CLASS_1_54D5CCE1D19D93EF_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x17C94370)
#define CLASS_1_54D5CCE1D19D93EF_SET_STARNUM_OFFSET UNITYSDK_OFFSET(0x17C94390)
#define CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17C94330)

inline static constexpr unsigned int Class_1_54D5CCE1D19D93EF_TypeDefinitionIndex = 61557;

class Class_1_54D5CCE1D19D93EF : public ::System::Object
{
public:
	::System::UInt32 _PhaseIndex_k__BackingField; // 0x10
	::System::UInt32 _Score_k__BackingField; // 0x14
	::System::UInt32 _StarNum_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF__CTOR_OFFSET))(this);
	}

	static ::Class_1_54D5CCE1D19D93EF* Method_1_169C9AE8F88E4F64(::Class_1_7C1B6F38E8E579A2* a1)
	{
		return ((::Class_1_54D5CCE1D19D93EF*(*)(::Class_1_7C1B6F38E8E579A2*))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::UInt32 get_PhaseIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_GET_PHASEINDEX_OFFSET))(this);
	}

	::System::Void set_PhaseIndex(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_SET_PHASEINDEX_OFFSET))(this, a1);
	}

	::System::UInt32 get_Score()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_GET_SCORE_OFFSET))(this);
	}

	::System::Void set_Score(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_SET_SCORE_OFFSET))(this, a1);
	}

	::System::UInt32 get_StarNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_GET_STARNUM_OFFSET))(this);
	}

	::System::Void set_StarNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54D5CCE1D19D93EF_SET_STARNUM_OFFSET))(this, a1);
	}
};
