#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_ABDB3311926B458C___C_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x155A0F80)
#define CLASS_3_ABDB3311926B458C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x155A0F30)
#define CLASS_3_ABDB3311926B458C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x155A0F70)

inline static constexpr unsigned int Class_3_ABDB3311926B458C___c_TypeDefinitionIndex = 81576;

class Class_3_ABDB3311926B458C___c : public ::System::Object
{
public:
	static ::Class_3_ABDB3311926B458C___c** StaticGet___9()
	{
		return (::Class_3_ABDB3311926B458C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ABDB3311926B458C___c_TypeDefinitionIndex)->GetStaticField(0x49120);
	}
	static ::System::Action** StaticGet___9__47_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_ABDB3311926B458C___c_TypeDefinitionIndex)->GetStaticField(0x49128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_ABDB3311926B458C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABDB3311926B458C___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABDB3311926B458C___C_METHOD_1_CEA32FF190776922_OFFSET))(this);
	}
};
