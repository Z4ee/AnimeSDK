#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_GET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1C52B400)
#define CLASS_1_FF80A1ACD786CECB_GET_TALENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C52B3E0)
#define CLASS_1_FF80A1ACD786CECB_SET_BASEATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1C52B410)
#define CLASS_1_FF80A1ACD786CECB_SET_TALENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1C52B3F0)
#define CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52B420)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_TypeDefinitionIndex = 41873;

class Class_1_FF80A1ACD786CECB : public ::System::Object
{
public:
	::System::Int32 _BaseAttributeValue_k__BackingField; // 0x10
	::System::Int32 _TalentLevel_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET))(this);
	}

	::System::Int32 get_TalentLevel()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_GET_TALENTLEVEL_OFFSET))(this);
	}

	::System::Void set_TalentLevel(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_SET_TALENTLEVEL_OFFSET))(this, a1);
	}

	::System::Int32 get_BaseAttributeValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_GET_BASEATTRIBUTEVALUE_OFFSET))(this);
	}

	::System::Void set_BaseAttributeValue(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_SET_BASEATTRIBUTEVALUE_OFFSET))(this, a1);
	}
};
