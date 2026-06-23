#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_FCA310AE514554AA___C_METHOD_1_EA0D7EB980EE07B3_OFFSET UNITYSDK_OFFSET(0x133BDA70)
#define CLASS_2_FCA310AE514554AA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x133BDA20)
#define CLASS_2_FCA310AE514554AA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x133BDA60)

inline static constexpr unsigned int Class_2_FCA310AE514554AA___c_TypeDefinitionIndex = 65809;

class Class_2_FCA310AE514554AA___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__5_19()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FCA310AE514554AA___c_TypeDefinitionIndex)->GetStaticField(0x45C00);
	}
	static ::Class_2_FCA310AE514554AA___c** StaticGet___9()
	{
		return (::Class_2_FCA310AE514554AA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FCA310AE514554AA___c_TypeDefinitionIndex)->GetStaticField(0x45C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FCA310AE514554AA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA310AE514554AA___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_EA0D7EB980EE07B3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCA310AE514554AA___C_METHOD_1_EA0D7EB980EE07B3_OFFSET))(this);
	}
};
