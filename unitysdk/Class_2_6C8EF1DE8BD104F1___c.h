#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6C8EF1DE8BD104F1___C_METHOD_1_EA0D7EB980EE07B3_OFFSET UNITYSDK_OFFSET(0x12088A40)
#define CLASS_2_6C8EF1DE8BD104F1___C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12088A30)
#define CLASS_2_6C8EF1DE8BD104F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120889E0)
#define CLASS_2_6C8EF1DE8BD104F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12088A20)

inline static constexpr unsigned int Class_2_6C8EF1DE8BD104F1___c_TypeDefinitionIndex = 42322;

class Class_2_6C8EF1DE8BD104F1___c : public ::System::Object
{
public:
	static ::Class_2_6C8EF1DE8BD104F1___c** StaticGet___9()
	{
		return (::Class_2_6C8EF1DE8BD104F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C8EF1DE8BD104F1___c_TypeDefinitionIndex)->GetStaticField(0x3F810);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__7_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C8EF1DE8BD104F1___c_TypeDefinitionIndex)->GetStaticField(0x3F818);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C8EF1DE8BD104F1___c_TypeDefinitionIndex)->GetStaticField(0x3F820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C8EF1DE8BD104F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C8EF1DE8BD104F1___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C8EF1DE8BD104F1___C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_EA0D7EB980EE07B3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C8EF1DE8BD104F1___C_METHOD_1_EA0D7EB980EE07B3_OFFSET))(this);
	}
};
