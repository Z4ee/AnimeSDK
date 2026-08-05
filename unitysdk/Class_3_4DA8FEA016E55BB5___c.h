#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_694DE3817DF44FB7;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_4DA8FEA016E55BB5___C_METHOD_1_FBAF30DDB1F77EE3_OFFSET UNITYSDK_OFFSET(0x1440F730)
#define CLASS_3_4DA8FEA016E55BB5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1440F6E0)
#define CLASS_3_4DA8FEA016E55BB5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1440F720)

inline static constexpr unsigned int Class_3_4DA8FEA016E55BB5___c_TypeDefinitionIndex = 42570;

class Class_3_4DA8FEA016E55BB5___c : public ::System::Object
{
public:
	static ::Class_3_4DA8FEA016E55BB5___c** StaticGet___9()
	{
		return (::Class_3_4DA8FEA016E55BB5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4DA8FEA016E55BB5___c_TypeDefinitionIndex)->GetStaticField(0x47EF0);
	}
	static ::System::Action_1<::Class_3_694DE3817DF44FB7*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_694DE3817DF44FB7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_4DA8FEA016E55BB5___c_TypeDefinitionIndex)->GetStaticField(0x47EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_4DA8FEA016E55BB5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4DA8FEA016E55BB5___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FBAF30DDB1F77EE3(::Class_3_694DE3817DF44FB7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_694DE3817DF44FB7*))((::PBYTE)hIl2Cpp + CLASS_3_4DA8FEA016E55BB5___C_METHOD_1_FBAF30DDB1F77EE3_OFFSET))(this, a1);
	}
};
