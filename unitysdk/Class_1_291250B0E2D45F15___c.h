#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_14;
class Class_1_ECA7330E4319C171;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_291250B0E2D45F15___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x186CCE10)
#define CLASS_1_291250B0E2D45F15___C__CTOR_OFFSET UNITYSDK_OFFSET(0x186CCE40)
#define CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x186CCE50)
#define CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0x186CD1B0)

inline static constexpr unsigned int Class_1_291250B0E2D45F15___c_TypeDefinitionIndex = 67144;

class Class_1_291250B0E2D45F15___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_14*>*, ::Class_1_ECA7330E4319C171*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_14*>*, ::Class_1_ECA7330E4319C171*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0x21E80);
	}
	static ::System::Func_2<::Class_1_97E659ED8D5D259C_14*, ::System::UInt32>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_1_97E659ED8D5D259C_14*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0x21E88);
	}
	static ::Class_1_291250B0E2D45F15___c** StaticGet___9()
	{
		return (::Class_1_291250B0E2D45F15___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0x21E90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__CTOR_OFFSET))(this);
	}

	::Class_1_ECA7330E4319C171* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_14*>* a1)
	{
		return ((::Class_1_ECA7330E4319C171*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_14*>*))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
	}

	::System::UInt32 _HandlePostProcess_b__0_1(::Class_1_97E659ED8D5D259C_14* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_97E659ED8D5D259C_14*))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, a1);
	}
};
