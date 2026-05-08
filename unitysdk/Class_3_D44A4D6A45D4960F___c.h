#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_D44A4D6A45D4960F___C_METHOD_1_ABE0890995E5B794_OFFSET UNITYSDK_OFFSET(0x106ABDC0)
#define CLASS_3_D44A4D6A45D4960F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x106ABD70)
#define CLASS_3_D44A4D6A45D4960F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x106ABDB0)

inline static constexpr unsigned int Class_3_D44A4D6A45D4960F___c_TypeDefinitionIndex = 44741;

class Class_3_D44A4D6A45D4960F___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D44A4D6A45D4960F___c_TypeDefinitionIndex)->GetStaticField(0x2A530);
	}
	static ::Class_3_D44A4D6A45D4960F___c** StaticGet___9()
	{
		return (::Class_3_D44A4D6A45D4960F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D44A4D6A45D4960F___c_TypeDefinitionIndex)->GetStaticField(0x2A538);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D44A4D6A45D4960F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D44A4D6A45D4960F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_ABE0890995E5B794(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D44A4D6A45D4960F___C_METHOD_1_ABE0890995E5B794_OFFSET))(this, a1);
	}
};
