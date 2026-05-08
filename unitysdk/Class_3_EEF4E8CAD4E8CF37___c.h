#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FEB0042A043413D3;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_EEF4E8CAD4E8CF37___C_METHOD_1_379BE02C1A09983A_OFFSET UNITYSDK_OFFSET(0x156ACC90)
#define CLASS_3_EEF4E8CAD4E8CF37___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156ACC40)
#define CLASS_3_EEF4E8CAD4E8CF37___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156ACC80)

inline static constexpr unsigned int Class_3_EEF4E8CAD4E8CF37___c_TypeDefinitionIndex = 63095;

class Class_3_EEF4E8CAD4E8CF37___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_FEB0042A043413D3*, ::System::UInt32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::Class_2_FEB0042A043413D3*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EEF4E8CAD4E8CF37___c_TypeDefinitionIndex)->GetStaticField(0x38970);
	}
	static ::Class_3_EEF4E8CAD4E8CF37___c** StaticGet___9()
	{
		return (::Class_3_EEF4E8CAD4E8CF37___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_EEF4E8CAD4E8CF37___c_TypeDefinitionIndex)->GetStaticField(0x38978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EEF4E8CAD4E8CF37___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEF4E8CAD4E8CF37___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_379BE02C1A09983A(::Class_2_FEB0042A043413D3* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_FEB0042A043413D3*))((::PBYTE)hIl2Cpp + CLASS_3_EEF4E8CAD4E8CF37___C_METHOD_1_379BE02C1A09983A_OFFSET))(this, a1);
	}
};
