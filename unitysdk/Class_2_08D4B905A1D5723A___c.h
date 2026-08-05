#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9EA8D45226512D21;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_08D4B905A1D5723A___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x1113D9F0)
#define CLASS_2_08D4B905A1D5723A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1113D9A0)
#define CLASS_2_08D4B905A1D5723A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1113D9E0)

inline static constexpr unsigned int Class_2_08D4B905A1D5723A___c_TypeDefinitionIndex = 66115;

class Class_2_08D4B905A1D5723A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_9EA8D45226512D21*>** StaticGet___9__55_0()
	{
		return (::System::Comparison_1<::Class_2_9EA8D45226512D21*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08D4B905A1D5723A___c_TypeDefinitionIndex)->GetStaticField(0x2F510);
	}
	static ::Class_2_08D4B905A1D5723A___c** StaticGet___9()
	{
		return (::Class_2_08D4B905A1D5723A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_08D4B905A1D5723A___c_TypeDefinitionIndex)->GetStaticField(0x2F518);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_08D4B905A1D5723A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_08D4B905A1D5723A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_9EA8D45226512D21* a1, ::Class_2_9EA8D45226512D21* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_9EA8D45226512D21*, ::Class_2_9EA8D45226512D21*))((::PBYTE)hIl2Cpp + CLASS_2_08D4B905A1D5723A___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
