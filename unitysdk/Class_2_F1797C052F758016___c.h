#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_F1797C052F758016___C_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1297C330)
#define CLASS_2_F1797C052F758016___C_METHOD_1_DDA3FF7E936EA742_OFFSET UNITYSDK_OFFSET(0x1297C340)
#define CLASS_2_F1797C052F758016___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1297C320)
#define CLASS_2_F1797C052F758016___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1297C2D0)
#define CLASS_2_F1797C052F758016___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1297C310)

inline static constexpr unsigned int Class_2_F1797C052F758016___c_TypeDefinitionIndex = 41265;

class Class_2_F1797C052F758016___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__53_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F1797C052F758016___c_TypeDefinitionIndex)->GetStaticField(0x3DB80);
	}
	static ::Class_2_F1797C052F758016___c** StaticGet___9()
	{
		return (::Class_2_F1797C052F758016___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F1797C052F758016___c_TypeDefinitionIndex)->GetStaticField(0x3DB88);
	}
	static ::System::Func_1<::System::Int32>** StaticGet___9__52_0()
	{
		return (::System::Func_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F1797C052F758016___c_TypeDefinitionIndex)->GetStaticField(0x3DB90);
	}
	static ::System::Func_1<::MoleMole::ZipLineSubSystem*>** StaticGet___9__52_1()
	{
		return (::System::Func_1<::MoleMole::ZipLineSubSystem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F1797C052F758016___c_TypeDefinitionIndex)->GetStaticField(0x3DB98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F1797C052F758016___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1797C052F758016___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1797C052F758016___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1797C052F758016___C_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::MoleMole::ZipLineSubSystem* Method_1_DDA3FF7E936EA742()
	{
		return ((::MoleMole::ZipLineSubSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1797C052F758016___C_METHOD_1_DDA3FF7E936EA742_OFFSET))(this);
	}
};
