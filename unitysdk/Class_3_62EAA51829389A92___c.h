#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_2A4351F9637A49DE;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_62EAA51829389A92___C_METHOD_1_8660C3A27B56FE60_OFFSET UNITYSDK_OFFSET(0xF7229E0)
#define CLASS_3_62EAA51829389A92___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF722990)
#define CLASS_3_62EAA51829389A92___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7229D0)

inline static constexpr unsigned int Class_3_62EAA51829389A92___c_TypeDefinitionIndex = 45415;

class Class_3_62EAA51829389A92___c : public ::System::Object
{
public:
	static ::Class_3_62EAA51829389A92___c** StaticGet___9()
	{
		return (::Class_3_62EAA51829389A92___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_62EAA51829389A92___c_TypeDefinitionIndex)->GetStaticField(0x4B000);
	}
	static ::System::Action_1<::Class_3_2A4351F9637A49DE*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_2A4351F9637A49DE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_62EAA51829389A92___c_TypeDefinitionIndex)->GetStaticField(0x4B008);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_62EAA51829389A92___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_62EAA51829389A92___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8660C3A27B56FE60(::Class_3_2A4351F9637A49DE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_2A4351F9637A49DE*))((::PBYTE)hIl2Cpp + CLASS_3_62EAA51829389A92___C_METHOD_1_8660C3A27B56FE60_OFFSET))(this, a1);
	}
};
