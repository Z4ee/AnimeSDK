#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_217EE568A28FAED7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_949985AC490E00E2_COMPARE_OFFSET UNITYSDK_OFFSET(0x14CA2D00)
#define CLASS_1_949985AC490E00E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CA2E20)
#define CLASS_1_949985AC490E00E2__CTOR_OFFSET UNITYSDK_OFFSET(0x14CA2E10)

inline static constexpr unsigned int Class_1_949985AC490E00E2_TypeDefinitionIndex = 48283;

class Class_1_949985AC490E00E2 : public ::System::Object
{
public:
	static ::Class_1_949985AC490E00E2** StaticGet_Field_1_0()
	{
		return (::Class_1_949985AC490E00E2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_949985AC490E00E2_TypeDefinitionIndex)->GetStaticField(0x40030);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_949985AC490E00E2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_949985AC490E00E2__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::Struct_2_217EE568A28FAED7 a1, ::Struct_2_217EE568A28FAED7 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Struct_2_217EE568A28FAED7, ::Struct_2_217EE568A28FAED7))((::PBYTE)hIl2Cpp + CLASS_1_949985AC490E00E2_COMPARE_OFFSET))(this, a1, a2);
	}
};
