#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_24;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_E970EC5EEB7EA2D9_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1E55E5B0)
#define CLASS_1_E970EC5EEB7EA2D9_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E55E460)
#define CLASS_1_E970EC5EEB7EA2D9_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1E55E6F0)
#define CLASS_1_E970EC5EEB7EA2D9_LOAD_OFFSET UNITYSDK_OFFSET(0x1E55E310)
#define CLASS_1_E970EC5EEB7EA2D9_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x1E55E830)
#define CLASS_1_E970EC5EEB7EA2D9_METHOD_1_9A5BE36283614E71_OFFSET UNITYSDK_OFFSET(0x1E55E2D0)
#define CLASS_1_E970EC5EEB7EA2D9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55E870)
#define CLASS_1_E970EC5EEB7EA2D9__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55E860)

inline static constexpr unsigned int Class_1_E970EC5EEB7EA2D9_TypeDefinitionIndex = 34649;

class Class_1_E970EC5EEB7EA2D9 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_24** StaticGet_HIOIMAFGBGG()
	{
		return (::Class_0_16E4307DCC419505_24**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E970EC5EEB7EA2D9_TypeDefinitionIndex)->GetStaticField(0xBC0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9A5BE36283614E71(::Class_0_16E4307DCC419505_24* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_24*))((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_METHOD_1_9A5BE36283614E71_OFFSET))(a1);
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

	static ::Class_0_16E4307DCC419505_24* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_24*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E970EC5EEB7EA2D9_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};
