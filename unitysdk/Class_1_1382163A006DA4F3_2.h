#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1382163A006DA4F3_2_GET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1C92DCA0)
#define CLASS_1_1382163A006DA4F3_2_GET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1C92DCC0)
#define CLASS_1_1382163A006DA4F3_2_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1C92DC60)
#define CLASS_1_1382163A006DA4F3_2_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1C92DC20)
#define CLASS_1_1382163A006DA4F3_2_SET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1C92DCB0)
#define CLASS_1_1382163A006DA4F3_2_SET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1C92DCD0)
#define CLASS_1_1382163A006DA4F3_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DCE0)

inline static constexpr unsigned int Class_1_1382163A006DA4F3_2_TypeDefinitionIndex = 41960;

class Class_1_1382163A006DA4F3_2 : public ::System::Object
{
public:
	::System::Int32 _OverrideCasterID_k__BackingField; // 0x10
	::System::UInt32 _DataSourceSkillID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::UInt32 get_DataSourceSkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_GET_DATASOURCESKILLID_OFFSET))(this);
	}

	::System::Void set_DataSourceSkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_SET_DATASOURCESKILLID_OFFSET))(this, a1);
	}

	::System::Int32 get_OverrideCasterID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_GET_OVERRIDECASTERID_OFFSET))(this);
	}

	::System::Void set_OverrideCasterID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_2_SET_OVERRIDECASTERID_OFFSET))(this, a1);
	}
};
