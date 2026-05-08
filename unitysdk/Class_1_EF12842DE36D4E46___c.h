#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_EF12842DE36D4E46___C_METHOD_1_091F8FC59F4FBAFE_OFFSET UNITYSDK_OFFSET(0x1020B8A0)
#define CLASS_1_EF12842DE36D4E46___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1020B850)
#define CLASS_1_EF12842DE36D4E46___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1020B890)

inline static constexpr unsigned int Class_1_EF12842DE36D4E46___c_TypeDefinitionIndex = 59000;

class Class_1_EF12842DE36D4E46___c : public ::System::Object
{
public:
	static ::Class_1_EF12842DE36D4E46___c** StaticGet___9()
	{
		return (::Class_1_EF12842DE36D4E46___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF12842DE36D4E46___c_TypeDefinitionIndex)->GetStaticField(0x397A0);
	}
	static ::System::Comparison_1<::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916*>** StaticGet___9__38_0()
	{
		return (::System::Comparison_1<::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF12842DE36D4E46___c_TypeDefinitionIndex)->GetStaticField(0x397A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF12842DE36D4E46___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF12842DE36D4E46___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_091F8FC59F4FBAFE(::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916* a1, ::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916*, ::Class_1_EF12842DE36D4E46_Class_1_69FADA46CC266916*))((::PBYTE)hIl2Cpp + CLASS_1_EF12842DE36D4E46___C_METHOD_1_091F8FC59F4FBAFE_OFFSET))(this, a1, a2);
	}
};
