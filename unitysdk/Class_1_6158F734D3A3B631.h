#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_92C4F468C62D6105;

#define CLASS_1_6158F734D3A3B631_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x938F830)
#define CLASS_1_6158F734D3A3B631_METHOD_1_E3B685AB7ADF59C2_OFFSET UNITYSDK_OFFSET(0x938F8A0)
#define CLASS_1_6158F734D3A3B631__CCTOR_OFFSET UNITYSDK_OFFSET(0x938F9C0)
#define CLASS_1_6158F734D3A3B631__CTOR_OFFSET UNITYSDK_OFFSET(0x938F890)

inline static constexpr unsigned int Class_1_6158F734D3A3B631_TypeDefinitionIndex = 69334;

class Class_1_6158F734D3A3B631 : public ::System::Object
{
public:
	static ::Class_1_6158F734D3A3B631** StaticGet_Field_1_0()
	{
		return (::Class_1_6158F734D3A3B631**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6158F734D3A3B631_TypeDefinitionIndex)->GetStaticField(0x5BF40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6158F734D3A3B631__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6158F734D3A3B631__CCTOR_OFFSET))();
	}

	static ::Class_1_6158F734D3A3B631* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_6158F734D3A3B631*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6158F734D3A3B631_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_E3B685AB7ADF59C2(::Class_2_92C4F468C62D6105* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_92C4F468C62D6105*))((::PBYTE)hIl2Cpp + CLASS_1_6158F734D3A3B631_METHOD_1_E3B685AB7ADF59C2_OFFSET))(this, a1);
	}
};
