#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_A6EB908668FE306E___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x117CCCA0)
#define CLASS_3_A6EB908668FE306E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x117CCC50)
#define CLASS_3_A6EB908668FE306E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x117CCC90)

inline static constexpr unsigned int Class_3_A6EB908668FE306E___c_TypeDefinitionIndex = 83866;

class Class_3_A6EB908668FE306E___c : public ::System::Object
{
public:
	static ::Class_3_A6EB908668FE306E___c** StaticGet___9()
	{
		return (::Class_3_A6EB908668FE306E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A6EB908668FE306E___c_TypeDefinitionIndex)->GetStaticField(0x39640);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A6EB908668FE306E___c_TypeDefinitionIndex)->GetStaticField(0x39648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6EB908668FE306E___C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
