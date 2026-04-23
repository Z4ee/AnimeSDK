#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_96.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_1_53590B4EB9133BC0;
namespace System { class String; }

#define CLASS_2_4A1C55938C41E0F9_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x92B3F40)
#define CLASS_2_4A1C55938C41E0F9_METHOD_2_332705DFBA6F3699_OFFSET UNITYSDK_OFFSET(0x92B3F90)
#define CLASS_2_4A1C55938C41E0F9__CTOR_OFFSET UNITYSDK_OFFSET(0x92B3F80)

inline static constexpr unsigned int Class_2_4A1C55938C41E0F9_TypeDefinitionIndex = 60093;

class Class_2_4A1C55938C41E0F9 : public ::Class_1_43BD383C98B4C0C5_96
{
public:
	::Class_1_53590B4EB9133BC0* Field_2_0; // 0x10

	::System::Void _ctor(::Class_1_53590B4EB9133BC0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_53590B4EB9133BC0*))((::PBYTE)hIl2Cpp + CLASS_2_4A1C55938C41E0F9__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A1C55938C41E0F9_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_332705DFBA6F3699(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_4A1C55938C41E0F9_METHOD_2_332705DFBA6F3699_OFFSET))(this, a1, a2);
	}
};
