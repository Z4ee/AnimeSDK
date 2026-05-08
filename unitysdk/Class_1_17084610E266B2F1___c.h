#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D366ED82D8A1F916;
class Class_1_E25AA19765F0B270;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define CLASS_1_17084610E266B2F1___C_METHOD_1_521FF42A136F3888_1_OFFSET UNITYSDK_OFFSET(0x1195AE00)
#define CLASS_1_17084610E266B2F1___C_METHOD_1_521FF42A136F3888_OFFSET UNITYSDK_OFFSET(0x1195ADB0)
#define CLASS_1_17084610E266B2F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1195AD60)
#define CLASS_1_17084610E266B2F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1195ADA0)

inline static constexpr unsigned int Class_1_17084610E266B2F1___c_TypeDefinitionIndex = 38272;

class Class_1_17084610E266B2F1___c : public ::System::Object
{
public:
	static ::System::Converter_2<::Class_1_E25AA19765F0B270*, ::System::String*>** StaticGet___9__61_0()
	{
		return (::System::Converter_2<::Class_1_E25AA19765F0B270*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x2AB50);
	}
	static ::System::Converter_2<::Class_1_D366ED82D8A1F916*, ::System::String*>** StaticGet___9__61_1()
	{
		return (::System::Converter_2<::Class_1_D366ED82D8A1F916*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x2AB58);
	}
	static ::Class_1_17084610E266B2F1___c** StaticGet___9()
	{
		return (::Class_1_17084610E266B2F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17084610E266B2F1___c_TypeDefinitionIndex)->GetStaticField(0x2AB60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_521FF42A136F3888(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C_METHOD_1_521FF42A136F3888_OFFSET))(this, a1);
	}

	::System::String* Method_1_521FF42A136F3888_1(::Class_1_E25AA19765F0B270* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_E25AA19765F0B270*))((::PBYTE)hIl2Cpp + CLASS_1_17084610E266B2F1___C_METHOD_1_521FF42A136F3888_1_OFFSET))(this, a1);
	}
};
