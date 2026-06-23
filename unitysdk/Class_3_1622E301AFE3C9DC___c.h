#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_250;
class Class_3_594FF562991A7D61;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_1622E301AFE3C9DC___C_METHOD_1_0B3EB362858C4A1C_OFFSET UNITYSDK_OFFSET(0x1142E5E0)
#define CLASS_3_1622E301AFE3C9DC___C_METHOD_1_B8F643DBEA874C7F_OFFSET UNITYSDK_OFFSET(0x1142E460)
#define CLASS_3_1622E301AFE3C9DC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1142E410)
#define CLASS_3_1622E301AFE3C9DC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1142E450)

inline static constexpr unsigned int Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex = 85117;

class Class_3_1622E301AFE3C9DC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_250*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_250*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x36190);
	}
	static ::Class_3_1622E301AFE3C9DC___c** StaticGet___9()
	{
		return (::Class_3_1622E301AFE3C9DC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x36198);
	}
	static ::System::Action_1<::Class_3_594FF562991A7D61*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_594FF562991A7D61*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_1622E301AFE3C9DC___c_TypeDefinitionIndex)->GetStaticField(0x361A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_B8F643DBEA874C7F(::Class_0_16E4307DCC419505_250* a1, ::Class_0_16E4307DCC419505_250* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_250*, ::Class_0_16E4307DCC419505_250*))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C_METHOD_1_B8F643DBEA874C7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0B3EB362858C4A1C(::Class_3_594FF562991A7D61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_594FF562991A7D61*))((::PBYTE)hIl2Cpp + CLASS_3_1622E301AFE3C9DC___C_METHOD_1_0B3EB362858C4A1C_OFFSET))(this, a1);
	}
};
