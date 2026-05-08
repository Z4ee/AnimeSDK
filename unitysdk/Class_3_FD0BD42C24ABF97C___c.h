#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_FD0BD42C24ABF97C;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_FD0BD42C24ABF97C___C_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x1C48EF00)
#define CLASS_3_FD0BD42C24ABF97C___C_METHOD_1_63E22A79D2DA8C7B_OFFSET UNITYSDK_OFFSET(0x1C48EF60)
#define CLASS_3_FD0BD42C24ABF97C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C48EEB0)
#define CLASS_3_FD0BD42C24ABF97C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C48EEF0)

inline static constexpr unsigned int Class_3_FD0BD42C24ABF97C___c_TypeDefinitionIndex = 9219;

class Class_3_FD0BD42C24ABF97C___c : public ::System::Object
{
public:
	static ::Class_3_FD0BD42C24ABF97C___c** StaticGet___9()
	{
		return (::Class_3_FD0BD42C24ABF97C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FD0BD42C24ABF97C___c_TypeDefinitionIndex)->GetStaticField(0x8440);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__38_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_FD0BD42C24ABF97C___c_TypeDefinitionIndex)->GetStaticField(0x8448);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_FD0BD42C24ABF97C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD0BD42C24ABF97C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FD0BD42C24ABF97C___C_METHOD_1_2DC90EE759C8637B_OFFSET))(this, a1);
	}

	::Class_3_FD0BD42C24ABF97C* Method_1_63E22A79D2DA8C7B()
	{
		return ((::Class_3_FD0BD42C24ABF97C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FD0BD42C24ABF97C___C_METHOD_1_63E22A79D2DA8C7B_OFFSET))(this);
	}
};
