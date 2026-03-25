#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D0CCDBD424B46DAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x8C53DE0)
#define CLASS_1_D0CCDBD424B46DAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8C53E40)
#define CLASS_1_D0CCDBD424B46DAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C53EE0)
#define CLASS_1_D0CCDBD424B46DAF__CTOR_OFFSET UNITYSDK_OFFSET(0x8C53ED0)

inline static constexpr unsigned int Class_1_D0CCDBD424B46DAF_TypeDefinitionIndex = 56640;

class Class_1_D0CCDBD424B46DAF : public ::System::Object
{
public:
	static ::Class_1_D0CCDBD424B46DAF** StaticGet_Field_1_0()
	{
		return (::Class_1_D0CCDBD424B46DAF**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0CCDBD424B46DAF_TypeDefinitionIndex)->GetStaticField(0x2090);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0CCDBD424B46DAF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0CCDBD424B46DAF__CCTOR_OFFSET))();
	}

	::System::Boolean Equals(::Struct_2_085541A9CFF64383 a1, ::Struct_2_085541A9CFF64383 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_085541A9CFF64383, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_D0CCDBD424B46DAF_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::Struct_2_085541A9CFF64383 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_085541A9CFF64383))((::PBYTE)hIl2Cpp + CLASS_1_D0CCDBD424B46DAF_GETHASHCODE_OFFSET))(this, a1);
	}
};
