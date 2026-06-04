#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_314;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLASS_1_21F587D23CBE0F72_METHOD_1_007D8B8E7E0B6BE5_OFFSET UNITYSDK_OFFSET(0xC1FB260)
#define CLASS_1_21F587D23CBE0F72_METHOD_1_12D5907B47EC4BD7_OFFSET UNITYSDK_OFFSET(0xC1FB360)
#define CLASS_1_21F587D23CBE0F72_METHOD_1_77AEE527F78C8D21_OFFSET UNITYSDK_OFFSET(0xC1FB620)
#define CLASS_1_21F587D23CBE0F72_METHOD_1_7E9D3AF98F02F1F9_OFFSET UNITYSDK_OFFSET(0xC1FB670)
#define CLASS_1_21F587D23CBE0F72__CCTOR_OFFSET UNITYSDK_OFFSET(0xC1FB8B0)
#define CLASS_1_21F587D23CBE0F72__CTOR_OFFSET UNITYSDK_OFFSET(0xC1FB8A0)

inline static constexpr unsigned int Class_1_21F587D23CBE0F72_TypeDefinitionIndex = 45013;

class Class_1_21F587D23CBE0F72 : public ::System::Object
{
public:
	static ::Class_1_21F587D23CBE0F72** StaticGet_Field_1_0()
	{
		return (::Class_1_21F587D23CBE0F72**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21F587D23CBE0F72_TypeDefinitionIndex)->GetStaticField(0x683F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72__CCTOR_OFFSET))();
	}

	::UnityEngine::Object* Method_1_007D8B8E7E0B6BE5(::System::String* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72_METHOD_1_007D8B8E7E0B6BE5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_314* Method_1_12D5907B47EC4BD7(::System::String* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_314*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72_METHOD_1_12D5907B47EC4BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_77AEE527F78C8D21(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72_METHOD_1_77AEE527F78C8D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E9D3AF98F02F1F9(::Class_0_16E4307DCC419505_314* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_314*))((::PBYTE)hIl2Cpp + CLASS_1_21F587D23CBE0F72_METHOD_1_7E9D3AF98F02F1F9_OFFSET))(this, a1);
	}
};
