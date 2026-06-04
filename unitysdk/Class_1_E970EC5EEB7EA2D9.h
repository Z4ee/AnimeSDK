#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_E970EC5EEB7EA2D9_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1ABE64D0)
#define CLASS_1_E970EC5EEB7EA2D9_FLUSH_OFFSET UNITYSDK_OFFSET(0x1ABE63C0)
#define CLASS_1_E970EC5EEB7EA2D9_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1ABE65C0)
#define CLASS_1_E970EC5EEB7EA2D9_LOAD_OFFSET UNITYSDK_OFFSET(0x1ABE62B0)
#define CLASS_1_E970EC5EEB7EA2D9_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x1ABE66B0)
#define CLASS_1_E970EC5EEB7EA2D9_METHOD_1_9A5BE36283614E71_OFFSET UNITYSDK_OFFSET(0x1ABE6270)
#define CLASS_1_E970EC5EEB7EA2D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABE66F0)
#define CLASS_1_E970EC5EEB7EA2D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABE66E0)

inline static constexpr unsigned int Class_1_E970EC5EEB7EA2D9_TypeDefinitionIndex = 33512;

class Class_1_E970EC5EEB7EA2D9 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_22** StaticGet_Field_1_0()
	{
		return (::Class_0_16E4307DCC419505_22**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E970EC5EEB7EA2D9_TypeDefinitionIndex)->GetStaticField(0xD80);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9A5BE36283614E71(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_METHOD_1_9A5BE36283614E71_OFFSET))(a1);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_GET_ISPARTIALSAVE_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_22* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_22*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};
