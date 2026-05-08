#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_AE9093DE1C8186A9_OFFSET UNITYSDK_OFFSET(0xF9EDCF0)
#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_OFFSET UNITYSDK_OFFSET(0xF9EDB00)
#define CLASS_3_F26B9595A0E67A04___C_METHOD_1_DDC23CBB045C6F29_OFFSET UNITYSDK_OFFSET(0xF9EDC20)
#define CLASS_3_F26B9595A0E67A04___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9EDAB0)
#define CLASS_3_F26B9595A0E67A04___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9EDAF0)

inline static constexpr unsigned int Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex = 63257;

class Class_3_F26B9595A0E67A04___c : public ::System::Object
{
public:
	static ::Class_3_F26B9595A0E67A04___c** StaticGet___9()
	{
		return (::Class_3_F26B9595A0E67A04___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x42E90);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_2()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x42E98);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_4()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x42EA0);
	}
	static ::System::Action_1<::System::EventArgs*>** StaticGet___9__31_3()
	{
		return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F26B9595A0E67A04___c_TypeDefinitionIndex)->GetStaticField(0x42EA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B5C7B44C609556DB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_B5C7B44C609556DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_DDC23CBB045C6F29(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_DDC23CBB045C6F29_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE9093DE1C8186A9(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_F26B9595A0E67A04___C_METHOD_1_AE9093DE1C8186A9_OFFSET))(this, a1);
	}
};
