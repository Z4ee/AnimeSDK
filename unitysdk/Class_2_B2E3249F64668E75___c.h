#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_B2E3249F64668E75___C_METHOD_1_7BBF135FC9E2C20B_OFFSET UNITYSDK_OFFSET(0x178A0BF0)
#define CLASS_2_B2E3249F64668E75___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178A0BA0)
#define CLASS_2_B2E3249F64668E75___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178A0BE0)

inline static constexpr unsigned int Class_2_B2E3249F64668E75___c_TypeDefinitionIndex = 75394;

class Class_2_B2E3249F64668E75___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__5_19()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B2E3249F64668E75___c_TypeDefinitionIndex)->GetStaticField(0x44020);
	}
	static ::Class_2_B2E3249F64668E75___c** StaticGet___9()
	{
		return (::Class_2_B2E3249F64668E75___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B2E3249F64668E75___c_TypeDefinitionIndex)->GetStaticField(0x44028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B2E3249F64668E75___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2E3249F64668E75___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_7BBF135FC9E2C20B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2E3249F64668E75___C_METHOD_1_7BBF135FC9E2C20B_OFFSET))(this);
	}
};
