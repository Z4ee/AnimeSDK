#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_2A9E2AE107165F68___C_METHOD_1_019433AA5F044915_OFFSET UNITYSDK_OFFSET(0x10807B30)
#define CLASS_2_2A9E2AE107165F68___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10807AE0)
#define CLASS_2_2A9E2AE107165F68___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10807B20)

inline static constexpr unsigned int Class_2_2A9E2AE107165F68___c_TypeDefinitionIndex = 50756;

class Class_2_2A9E2AE107165F68___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__13_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A9E2AE107165F68___c_TypeDefinitionIndex)->GetStaticField(0x32D60);
	}
	static ::Class_2_2A9E2AE107165F68___c** StaticGet___9()
	{
		return (::Class_2_2A9E2AE107165F68___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2A9E2AE107165F68___c_TypeDefinitionIndex)->GetStaticField(0x32D68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2A9E2AE107165F68___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A9E2AE107165F68___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_019433AA5F044915()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A9E2AE107165F68___C_METHOD_1_019433AA5F044915_OFFSET))(this);
	}
};
