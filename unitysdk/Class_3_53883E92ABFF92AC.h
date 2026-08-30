#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_739F79CAD2286302.h"

class Class_1_A335CFE48265E251;
class Class_3_558211F589F040CC;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define CLASS_3_53883E92ABFF92AC_METHOD_3_6E9340C13AAF04CC_OFFSET UNITYSDK_OFFSET(0x198C4120)
#define CLASS_3_53883E92ABFF92AC_METHOD_3_7F68D6D1D153FE6C_OFFSET UNITYSDK_OFFSET(0x198C4250)
#define CLASS_3_53883E92ABFF92AC_METHOD_3_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x198C4200)
#define CLASS_3_53883E92ABFF92AC__CTOR_OFFSET UNITYSDK_OFFSET(0x198C40A0)

inline static constexpr unsigned int Class_3_53883E92ABFF92AC_TypeDefinitionIndex = 73880;

class Class_3_53883E92ABFF92AC : public ::Class_2_739F79CAD2286302
{
public:
	::Class_3_558211F589F040CC* GLOIPPFKHPL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53883E92ABFF92AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6E9340C13AAF04CC(::RPG::GameCore::StageVolumeComponentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_3_53883E92ABFF92AC_METHOD_3_6E9340C13AAF04CC_OFFSET))(this, a1);
	}

	::System::Void Method_3_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53883E92ABFF92AC_METHOD_3_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_3_7F68D6D1D153FE6C(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_53883E92ABFF92AC_METHOD_3_7F68D6D1D153FE6C_OFFSET))(this, a1);
	}
};
