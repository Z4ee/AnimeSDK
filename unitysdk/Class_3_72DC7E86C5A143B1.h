#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4882D51538AB1BD1.h"

namespace System { class String; }

#define CLASS_3_72DC7E86C5A143B1_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x149B5C80)
#define CLASS_3_72DC7E86C5A143B1_METHOD_3_3E58295989E22B1D_OFFSET UNITYSDK_OFFSET(0x149B5CF0)
#define CLASS_3_72DC7E86C5A143B1__CTOR_OFFSET UNITYSDK_OFFSET(0x149B5E90)

inline static constexpr unsigned int Class_3_72DC7E86C5A143B1_TypeDefinitionIndex = 56851;

class Class_3_72DC7E86C5A143B1 : public ::Class_2_4882D51538AB1BD1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DC7E86C5A143B1__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72DC7E86C5A143B1_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_3E58295989E22B1D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_72DC7E86C5A143B1_METHOD_3_3E58295989E22B1D_OFFSET))(this, a1, a2);
	}
};
