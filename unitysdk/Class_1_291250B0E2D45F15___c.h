#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_12;
class Class_1_CE7DE33C23FAF30B;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_291250B0E2D45F15___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x141512F0)
#define CLASS_1_291250B0E2D45F15___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14151320)
#define CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0x14151330)
#define CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0x141516F0)

inline static constexpr unsigned int Class_1_291250B0E2D45F15___c_TypeDefinitionIndex = 62782;

class Class_1_291250B0E2D45F15___c : public ::System::Object
{
public:
	static ::Class_1_291250B0E2D45F15___c** StaticGet___9()
	{
		return (::Class_1_291250B0E2D45F15___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0xEC70);
	}
	static ::System::Func_2<::Class_1_97E659ED8D5D259C_12*, ::System::UInt32>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::Class_1_97E659ED8D5D259C_12*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0xEC78);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_12*>*, ::Class_1_CE7DE33C23FAF30B*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_12*>*, ::Class_1_CE7DE33C23FAF30B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_291250B0E2D45F15___c_TypeDefinitionIndex)->GetStaticField(0xEC80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__CTOR_OFFSET))(this);
	}

	::Class_1_CE7DE33C23FAF30B* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_12*>* a1)
	{
		return ((::Class_1_CE7DE33C23FAF30B*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, a1);
	}

	::System::UInt32 _HandlePostProcess_b__0_1(::Class_1_97E659ED8D5D259C_12* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_97E659ED8D5D259C_12*))((::PBYTE)hIl2Cpp + CLASS_1_291250B0E2D45F15___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, a1);
	}
};
