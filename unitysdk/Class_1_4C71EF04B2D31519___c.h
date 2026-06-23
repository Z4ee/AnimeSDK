#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4EE1287F7728A8A8;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_4C71EF04B2D31519___C_METHOD_1_6CCF5C7FFB92379E_OFFSET UNITYSDK_OFFSET(0x1672E2C0)
#define CLASS_1_4C71EF04B2D31519___C_METHOD_1_C8D7695BB56F12B7_OFFSET UNITYSDK_OFFSET(0x1672E2E0)
#define CLASS_1_4C71EF04B2D31519___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1672E270)
#define CLASS_1_4C71EF04B2D31519___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1672E2B0)

inline static constexpr unsigned int Class_1_4C71EF04B2D31519___c_TypeDefinitionIndex = 72582;

class Class_1_4C71EF04B2D31519___c : public ::System::Object
{
public:
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C71EF04B2D31519___c_TypeDefinitionIndex)->GetStaticField(0x3FE90);
	}
	static ::Class_1_4C71EF04B2D31519___c** StaticGet___9()
	{
		return (::Class_1_4C71EF04B2D31519___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C71EF04B2D31519___c_TypeDefinitionIndex)->GetStaticField(0x3FE98);
	}
	static ::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::Class_1_4EE1287F7728A8A8*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::Code::Logic::Data::ScriptObject::Level::Member*, ::Class_1_4EE1287F7728A8A8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C71EF04B2D31519___c_TypeDefinitionIndex)->GetStaticField(0x3FEA0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C71EF04B2D31519___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C71EF04B2D31519___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6CCF5C7FFB92379E(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_4C71EF04B2D31519___C_METHOD_1_6CCF5C7FFB92379E_OFFSET))(this, a1);
	}

	::Class_1_4EE1287F7728A8A8* Method_1_C8D7695BB56F12B7(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::Class_1_4EE1287F7728A8A8*(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_4C71EF04B2D31519___C_METHOD_1_C8D7695BB56F12B7_OFFSET))(this, a1);
	}
};
