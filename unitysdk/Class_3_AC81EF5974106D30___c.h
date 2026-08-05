#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F97B015544BE936B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_AC81EF5974106D30___C_METHOD_1_EC45F90F4D7536C1_OFFSET UNITYSDK_OFFSET(0x14191BC0)
#define CLASS_3_AC81EF5974106D30___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14191B70)
#define CLASS_3_AC81EF5974106D30___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14191BB0)

inline static constexpr unsigned int Class_3_AC81EF5974106D30___c_TypeDefinitionIndex = 46230;

class Class_3_AC81EF5974106D30___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F97B015544BE936B*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::Class_3_F97B015544BE936B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AC81EF5974106D30___c_TypeDefinitionIndex)->GetStaticField(0x4EFE0);
	}
	static ::Class_3_AC81EF5974106D30___c** StaticGet___9()
	{
		return (::Class_3_AC81EF5974106D30___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_AC81EF5974106D30___c_TypeDefinitionIndex)->GetStaticField(0x4EFE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AC81EF5974106D30___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC81EF5974106D30___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC45F90F4D7536C1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_AC81EF5974106D30___C_METHOD_1_EC45F90F4D7536C1_OFFSET))(this, a1);
	}
};
