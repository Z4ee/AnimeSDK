#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8EF622B523DA284F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xC0FD160)
#define CLASS_1_8EF622B523DA284F_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0xC0FD0E0)
#define CLASS_1_8EF622B523DA284F__CTOR_OFFSET UNITYSDK_OFFSET(0xC0FD150)

inline static constexpr unsigned int Class_1_8EF622B523DA284F_TypeDefinitionIndex = 71762;

class Class_1_8EF622B523DA284F : public ::System::Object
{
public:
	static ::Class_1_8EF622B523DA284F** StaticGet_FLMODBLFAGD()
	{
		return (::Class_1_8EF622B523DA284F**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EF622B523DA284F_TypeDefinitionIndex)->GetStaticField(0x19960);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF622B523DA284F__CTOR_OFFSET))(this);
	}

	static ::Class_1_8EF622B523DA284F* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_8EF622B523DA284F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EF622B523DA284F_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8EF622B523DA284F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
