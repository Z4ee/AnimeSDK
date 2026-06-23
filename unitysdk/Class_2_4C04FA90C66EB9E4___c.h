#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4C04FA90C66EB9E4___C_METHOD_1_EB974738829A6BF5_OFFSET UNITYSDK_OFFSET(0x1B582230)
#define CLASS_2_4C04FA90C66EB9E4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5821E0)
#define CLASS_2_4C04FA90C66EB9E4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B582220)

inline static constexpr unsigned int Class_2_4C04FA90C66EB9E4___c_TypeDefinitionIndex = 61134;

class Class_2_4C04FA90C66EB9E4___c : public ::System::Object
{
public:
	static ::Class_2_4C04FA90C66EB9E4___c** StaticGet___9()
	{
		return (::Class_2_4C04FA90C66EB9E4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C04FA90C66EB9E4___c_TypeDefinitionIndex)->GetStaticField(0x41CD0);
	}
	static ::System::Comparison_1<::System::Boolean>** StaticGet___9__47_0()
	{
		return (::System::Comparison_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C04FA90C66EB9E4___c_TypeDefinitionIndex)->GetStaticField(0x41CD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4C04FA90C66EB9E4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C04FA90C66EB9E4___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EB974738829A6BF5(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C04FA90C66EB9E4___C_METHOD_1_EB974738829A6BF5_OFFSET))(this, a1, a2);
	}
};
