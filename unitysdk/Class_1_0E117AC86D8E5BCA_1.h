#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0E117AC86D8E5BCA_1_GET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x18E4DB50)
#define CLASS_1_0E117AC86D8E5BCA_1_GET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x18E4DB70)
#define CLASS_1_0E117AC86D8E5BCA_1_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x18E4DB10)
#define CLASS_1_0E117AC86D8E5BCA_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18E4DAD0)
#define CLASS_1_0E117AC86D8E5BCA_1_SET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x18E4DB60)
#define CLASS_1_0E117AC86D8E5BCA_1_SET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x18E4DB80)
#define CLASS_1_0E117AC86D8E5BCA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4DB90)

inline static constexpr unsigned int Class_1_0E117AC86D8E5BCA_1_TypeDefinitionIndex = 38695;

class Class_1_0E117AC86D8E5BCA_1 : public ::System::Object
{
public:
	::System::UInt32 _DataSourceSkillID_k__BackingField; // 0x10
	::System::Int32 _OverrideCasterID_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::UInt32 get_DataSourceSkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_GET_DATASOURCESKILLID_OFFSET))(this);
	}

	::System::Void set_DataSourceSkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_SET_DATASOURCESKILLID_OFFSET))(this, a1);
	}

	::System::Int32 get_OverrideCasterID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_GET_OVERRIDECASTERID_OFFSET))(this);
	}

	::System::Void set_OverrideCasterID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E117AC86D8E5BCA_1_SET_OVERRIDECASTERID_OFFSET))(this, a1);
	}
};
