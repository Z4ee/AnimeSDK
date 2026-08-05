#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_236;
class Class_3_594FF562991A7D61;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_D29575FB1230CD01___C_METHOD_1_0B3EB362858C4A1C_OFFSET UNITYSDK_OFFSET(0xE583E60)
#define CLASS_3_D29575FB1230CD01___C_METHOD_1_44FD645673EB0E72_OFFSET UNITYSDK_OFFSET(0xE583EF0)
#define CLASS_3_D29575FB1230CD01___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE583E10)
#define CLASS_3_D29575FB1230CD01___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE583E50)

inline static constexpr unsigned int Class_3_D29575FB1230CD01___c_TypeDefinitionIndex = 49103;

class Class_3_D29575FB1230CD01___c : public ::System::Object
{
public:
	static ::Class_3_D29575FB1230CD01___c** StaticGet___9()
	{
		return (::Class_3_D29575FB1230CD01___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D29575FB1230CD01___c_TypeDefinitionIndex)->GetStaticField(0x377D0);
	}
	static ::System::Action_1<::Class_3_594FF562991A7D61*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_594FF562991A7D61*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D29575FB1230CD01___c_TypeDefinitionIndex)->GetStaticField(0x377D8);
	}
	static ::System::Comparison_1<::Class_0_16E4307DCC419505_236*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::Class_0_16E4307DCC419505_236*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D29575FB1230CD01___c_TypeDefinitionIndex)->GetStaticField(0x377E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D29575FB1230CD01___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D29575FB1230CD01___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0B3EB362858C4A1C(::Class_3_594FF562991A7D61* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_594FF562991A7D61*))((::PBYTE)hIl2Cpp + CLASS_3_D29575FB1230CD01___C_METHOD_1_0B3EB362858C4A1C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_44FD645673EB0E72(::Class_0_16E4307DCC419505_236* a1, ::Class_0_16E4307DCC419505_236* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_236*, ::Class_0_16E4307DCC419505_236*))((::PBYTE)hIl2Cpp + CLASS_3_D29575FB1230CD01___C_METHOD_1_44FD645673EB0E72_OFFSET))(this, a1, a2);
	}
};
