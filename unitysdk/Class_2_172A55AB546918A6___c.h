#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6B9BA8441E94A95A;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System { template <typename T> class Predicate_1; }

#define CLASS_2_172A55AB546918A6___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x1068DB80)
#define CLASS_2_172A55AB546918A6___C_METHOD_1_08FA67828C2BF0E2_OFFSET UNITYSDK_OFFSET(0x1068DA70)
#define CLASS_2_172A55AB546918A6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1068DA20)
#define CLASS_2_172A55AB546918A6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1068DA60)

inline static constexpr unsigned int Class_2_172A55AB546918A6___c_TypeDefinitionIndex = 60872;

class Class_2_172A55AB546918A6___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__57_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_172A55AB546918A6___c_TypeDefinitionIndex)->GetStaticField(0x37810);
	}
	static ::Class_2_172A55AB546918A6___c** StaticGet___9()
	{
		return (::Class_2_172A55AB546918A6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_172A55AB546918A6___c_TypeDefinitionIndex)->GetStaticField(0x37818);
	}
	static ::System::Predicate_1<::Class_1_6B9BA8441E94A95A*>** StaticGet___9__59_0()
	{
		return (::System::Predicate_1<::Class_1_6B9BA8441E94A95A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_172A55AB546918A6___c_TypeDefinitionIndex)->GetStaticField(0x37820);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_172A55AB546918A6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_172A55AB546918A6___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_08FA67828C2BF0E2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_172A55AB546918A6___C_METHOD_1_08FA67828C2BF0E2_OFFSET))(this);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_6B9BA8441E94A95A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6B9BA8441E94A95A*))((::PBYTE)hIl2Cpp + CLASS_2_172A55AB546918A6___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
