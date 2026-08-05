#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_34A82ADD3D230E95;
class Class_1_F50CC8D9599D41DE;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_1_OFFSET UNITYSDK_OFFSET(0x1F6B98D0)
#define CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_OFFSET UNITYSDK_OFFSET(0x1F6B9870)
#define CLASS_2_C57D8783DBBA3A62___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B9820)
#define CLASS_2_C57D8783DBBA3A62___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B9860)

inline static constexpr unsigned int Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex = 29239;

class Class_2_C57D8783DBBA3A62___c : public ::System::Object
{
public:
	static ::System::Converter_2<::Class_1_F50CC8D9599D41DE*, ::System::String*>** StaticGet___9__8_1()
	{
		return (::System::Converter_2<::Class_1_F50CC8D9599D41DE*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x24B10);
	}
	static ::System::Converter_2<::Class_1_34A82ADD3D230E95*, ::System::String*>** StaticGet___9__8_0()
	{
		return (::System::Converter_2<::Class_1_34A82ADD3D230E95*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x24B18);
	}
	static ::Class_2_C57D8783DBBA3A62___c** StaticGet___9()
	{
		return (::Class_2_C57D8783DBBA3A62___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C57D8783DBBA3A62___c_TypeDefinitionIndex)->GetStaticField(0x24B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_4782E5DF6E0B8246(::Class_1_F50CC8D9599D41DE* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_F50CC8D9599D41DE*))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_OFFSET))(this, a1);
	}

	::System::String* Method_1_4782E5DF6E0B8246_1(::Class_1_34A82ADD3D230E95* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_34A82ADD3D230E95*))((::PBYTE)hIl2Cpp + CLASS_2_C57D8783DBBA3A62___C_METHOD_1_4782E5DF6E0B8246_1_OFFSET))(this, a1);
	}
};
