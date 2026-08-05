#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_45450D03DC54938D_METHOD_1_6AA581BE0B50758A_OFFSET UNITYSDK_OFFSET(0x14E7B510)
#define CLASS_1_45450D03DC54938D_METHOD_1_C51B563C44A90186_OFFSET UNITYSDK_OFFSET(0x14E7B630)

inline static constexpr unsigned int Class_1_45450D03DC54938D_TypeDefinitionIndex = 43195;

class Class_1_45450D03DC54938D : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6AA581BE0B50758A()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_45450D03DC54938D_METHOD_1_6AA581BE0B50758A_OFFSET))();
	}

	static ::System::String* Method_1_C51B563C44A90186(::Enum_3_121CF606CB7E9CD1 a1)
	{
		return ((::System::String*(*)(::Enum_3_121CF606CB7E9CD1))((::PBYTE)hIl2Cpp + CLASS_1_45450D03DC54938D_METHOD_1_C51B563C44A90186_OFFSET))(a1);
	}
};
