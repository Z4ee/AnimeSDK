#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BB4BCB31282727A3.h"

namespace System { class String; }

#define CLASS_2_F41A1EA743EF4430_2_METHOD_2_322DA9757BDA32C0_OFFSET UNITYSDK_OFFSET(0x18701D60)
#define CLASS_2_F41A1EA743EF4430_2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18701D50)
#define CLASS_2_F41A1EA743EF4430_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18701F60)

inline static constexpr unsigned int Class_2_F41A1EA743EF4430_2_TypeDefinitionIndex = 66691;

class Class_2_F41A1EA743EF4430_2 : public ::Class_1_BB4BCB31282727A3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_322DA9757BDA32C0(::System::String*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_F41A1EA743EF4430_2_METHOD_2_322DA9757BDA32C0_OFFSET))(this, a1);
	}
};
