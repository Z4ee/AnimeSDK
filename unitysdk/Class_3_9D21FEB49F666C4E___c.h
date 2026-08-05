#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_9D21FEB49F666C4E___C_METHOD_1_245950D4F0985AD9_OFFSET UNITYSDK_OFFSET(0x128B7270)
#define CLASS_3_9D21FEB49F666C4E___C_METHOD_1_AE9093DE1C8186A9_OFFSET UNITYSDK_OFFSET(0x128B7330)
#define CLASS_3_9D21FEB49F666C4E___C_METHOD_1_B5C7B44C609556DB_OFFSET UNITYSDK_OFFSET(0x128B7430)
#define CLASS_3_9D21FEB49F666C4E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x128B7220)
#define CLASS_3_9D21FEB49F666C4E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x128B7260)

inline static constexpr unsigned int Class_3_9D21FEB49F666C4E___c_TypeDefinitionIndex = 48423;

class Class_3_9D21FEB49F666C4E___c : public ::System::Object
{
public:
	static ::Class_3_9D21FEB49F666C4E___c** StaticGet___9()
	{
		return (::Class_3_9D21FEB49F666C4E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9D21FEB49F666C4E___c_TypeDefinitionIndex)->GetStaticField(0x38760);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_3()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9D21FEB49F666C4E___c_TypeDefinitionIndex)->GetStaticField(0x38768);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_1()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9D21FEB49F666C4E___c_TypeDefinitionIndex)->GetStaticField(0x38770);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_2()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_9D21FEB49F666C4E___c_TypeDefinitionIndex)->GetStaticField(0x38778);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_9D21FEB49F666C4E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D21FEB49F666C4E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_245950D4F0985AD9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D21FEB49F666C4E___C_METHOD_1_245950D4F0985AD9_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE9093DE1C8186A9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D21FEB49F666C4E___C_METHOD_1_AE9093DE1C8186A9_OFFSET))(this, a1);
	}

	::System::Void Method_1_B5C7B44C609556DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_9D21FEB49F666C4E___C_METHOD_1_B5C7B44C609556DB_OFFSET))(this, a1);
	}
};
