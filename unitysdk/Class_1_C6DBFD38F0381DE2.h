#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_301;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_12D5907B47EC4BD7_OFFSET UNITYSDK_OFFSET(0xCD28410)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_2D2F7565C73621C5_OFFSET UNITYSDK_OFFSET(0xCD28310)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_4A3C439C854E1378_OFFSET UNITYSDK_OFFSET(0xCD286B0)
#define CLASS_1_C6DBFD38F0381DE2_METHOD_1_7E9D3AF98F02F1F9_OFFSET UNITYSDK_OFFSET(0xCD28700)
#define CLASS_1_C6DBFD38F0381DE2__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD28930)
#define CLASS_1_C6DBFD38F0381DE2__CTOR_OFFSET UNITYSDK_OFFSET(0xCD28920)

inline static constexpr unsigned int Class_1_C6DBFD38F0381DE2_TypeDefinitionIndex = 44467;

class Class_1_C6DBFD38F0381DE2 : public ::System::Object
{
public:
	static ::Class_1_C6DBFD38F0381DE2** StaticGet_Field_1_0()
	{
		return (::Class_1_C6DBFD38F0381DE2**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6DBFD38F0381DE2_TypeDefinitionIndex)->GetStaticField(0x6B0F0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2__CCTOR_OFFSET))();
	}

	::UnityEngine::Object* Method_1_2D2F7565C73621C5(::System::String* a1, ::System::Type* a2)
	{
		return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_2D2F7565C73621C5_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_301* Method_1_12D5907B47EC4BD7(::System::String* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_301*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_12D5907B47EC4BD7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4A3C439C854E1378(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_4A3C439C854E1378_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E9D3AF98F02F1F9(::Class_0_16E4307DCC419505_301* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301*))((::PBYTE)hIl2Cpp + CLASS_1_C6DBFD38F0381DE2_METHOD_1_7E9D3AF98F02F1F9_OFFSET))(this, a1);
	}
};
