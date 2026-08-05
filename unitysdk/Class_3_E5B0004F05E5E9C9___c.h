#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5E8CBAB081D19E17;
class Class_3_D6DA183EF60F02C8;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_E5B0004F05E5E9C9___C_METHOD_1_6C9D34CCDB693A6D_OFFSET UNITYSDK_OFFSET(0x1AC24560)
#define CLASS_3_E5B0004F05E5E9C9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC24510)
#define CLASS_3_E5B0004F05E5E9C9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC24550)

inline static constexpr unsigned int Class_3_E5B0004F05E5E9C9___c_TypeDefinitionIndex = 46159;

class Class_3_E5B0004F05E5E9C9___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_D6DA183EF60F02C8*, ::Class_3_5E8CBAB081D19E17*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::Class_3_D6DA183EF60F02C8*, ::Class_3_5E8CBAB081D19E17*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E5B0004F05E5E9C9___c_TypeDefinitionIndex)->GetStaticField(0x34910);
	}
	static ::Class_3_E5B0004F05E5E9C9___c** StaticGet___9()
	{
		return (::Class_3_E5B0004F05E5E9C9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E5B0004F05E5E9C9___c_TypeDefinitionIndex)->GetStaticField(0x34918);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C9D34CCDB693A6D(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_5E8CBAB081D19E17* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_5E8CBAB081D19E17*))((::PBYTE)hIl2Cpp + CLASS_3_E5B0004F05E5E9C9___C_METHOD_1_6C9D34CCDB693A6D_OFFSET))(this, a1, a2);
	}
};
