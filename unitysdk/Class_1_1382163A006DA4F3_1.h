#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1382163A006DA4F3_1_GET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1BAB8390)
#define CLASS_1_1382163A006DA4F3_1_GET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1BAB83B0)
#define CLASS_1_1382163A006DA4F3_1_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1BAB8350)
#define CLASS_1_1382163A006DA4F3_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1BAB8310)
#define CLASS_1_1382163A006DA4F3_1_SET_DATASOURCESKILLID_OFFSET UNITYSDK_OFFSET(0x1BAB83A0)
#define CLASS_1_1382163A006DA4F3_1_SET_OVERRIDECASTERID_OFFSET UNITYSDK_OFFSET(0x1BAB83C0)
#define CLASS_1_1382163A006DA4F3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAB83D0)

inline static constexpr unsigned int Class_1_1382163A006DA4F3_1_TypeDefinitionIndex = 40375;

class Class_1_1382163A006DA4F3_1 : public ::System::Object
{
public:
	::System::UInt32 _DataSourceSkillID_k__BackingField; // 0x10
	::System::Int32 _OverrideCasterID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_METHOD_1_128774387667156B_OFFSET))();
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::UInt32 get_DataSourceSkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_GET_DATASOURCESKILLID_OFFSET))(this);
	}

	::System::Void set_DataSourceSkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_SET_DATASOURCESKILLID_OFFSET))(this, a1);
	}

	::System::Int32 get_OverrideCasterID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_GET_OVERRIDECASTERID_OFFSET))(this);
	}

	::System::Void set_OverrideCasterID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1382163A006DA4F3_1_SET_OVERRIDECASTERID_OFFSET))(this, a1);
	}
};
