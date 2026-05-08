#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2B2FBBF856FBA49F___C_METHOD_1_EA0D7EB980EE07B3_OFFSET UNITYSDK_OFFSET(0x14A5BAE0)
#define CLASS_2_2B2FBBF856FBA49F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A5BA90)
#define CLASS_2_2B2FBBF856FBA49F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5BAD0)

inline static constexpr unsigned int Class_2_2B2FBBF856FBA49F___c_TypeDefinitionIndex = 76037;

class Class_2_2B2FBBF856FBA49F___c : public ::System::Object
{
public:
	static ::Class_2_2B2FBBF856FBA49F___c** StaticGet___9()
	{
		return (::Class_2_2B2FBBF856FBA49F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2FBBF856FBA49F___c_TypeDefinitionIndex)->GetStaticField(0x3E310);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__5_19()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2B2FBBF856FBA49F___c_TypeDefinitionIndex)->GetStaticField(0x3E318);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2B2FBBF856FBA49F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2FBBF856FBA49F___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_EA0D7EB980EE07B3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B2FBBF856FBA49F___C_METHOD_1_EA0D7EB980EE07B3_OFFSET))(this);
	}
};
