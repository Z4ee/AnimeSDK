#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B9E8C2EEAA5C96EC;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8E457B48C75D1A3E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1676EB00)
#define CLASS_1_8E457B48C75D1A3E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1676EB30)
#define CLASS_1_8E457B48C75D1A3E___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1676EB40)

inline static constexpr unsigned int Class_1_8E457B48C75D1A3E___c_TypeDefinitionIndex = 73223;

class Class_1_8E457B48C75D1A3E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_B9E8C2EEAA5C96EC*>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::Class_2_B9E8C2EEAA5C96EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E457B48C75D1A3E___c_TypeDefinitionIndex)->GetStaticField(0x2DF50);
	}
	static ::Class_1_8E457B48C75D1A3E___c** StaticGet___9()
	{
		return (::Class_1_8E457B48C75D1A3E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8E457B48C75D1A3E___c_TypeDefinitionIndex)->GetStaticField(0x2DF58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __InitializeWindowController_b__2_0(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_2_B9E8C2EEAA5C96EC* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_2_B9E8C2EEAA5C96EC*))((::PBYTE)hIl2Cpp + CLASS_1_8E457B48C75D1A3E___C___INITIALIZEWINDOWCONTROLLER_B__2_0_OFFSET))(this, a1, a2);
	}
};
