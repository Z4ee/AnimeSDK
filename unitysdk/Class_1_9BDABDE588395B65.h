#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_24;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_9BDABDE588395B65_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x1EBEF210)
#define CLASS_1_9BDABDE588395B65_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBEEF00)
#define CLASS_1_9BDABDE588395B65_GET_ISPARTIALSAVE_OFFSET UNITYSDK_OFFSET(0x1EBEF390)
#define CLASS_1_9BDABDE588395B65_LOAD_OFFSET UNITYSDK_OFFSET(0x1EBEEB90)
#define CLASS_1_9BDABDE588395B65_METHOD_1_80FE5793C3B79107_OFFSET UNITYSDK_OFFSET(0x1EBEF4D0)
#define CLASS_1_9BDABDE588395B65_METHOD_1_EBC1C6E91542E706_OFFSET UNITYSDK_OFFSET(0x1EBEEB20)
#define CLASS_1_9BDABDE588395B65__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBEF510)
#define CLASS_1_9BDABDE588395B65__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBEF500)

inline static constexpr unsigned int Class_1_9BDABDE588395B65_TypeDefinitionIndex = 35313;

class Class_1_9BDABDE588395B65 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_24** StaticGet_HIOIMAFGBGG()
	{
		return (::Class_0_16E4307DCC419505_24**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9BDABDE588395B65_TypeDefinitionIndex)->GetStaticField(0x40600);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_EBC1C6E91542E706(::Class_0_16E4307DCC419505_24* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_24*))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_METHOD_1_EBC1C6E91542E706_OFFSET))(a1);
	}

	::System::Void Load(::System::String* a1, ::System::Type* a2, ::System::Object*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_LOAD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Flush(::System::String* a1, ::System::Type* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_FLUSH_OFFSET))(this, a1, a2, a3);
	}

	::System::Void DeleteKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_DELETEKEY_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPartialSave()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_GET_ISPARTIALSAVE_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_24* Method_1_80FE5793C3B79107()
	{
		return ((::Class_0_16E4307DCC419505_24*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9BDABDE588395B65_METHOD_1_80FE5793C3B79107_OFFSET))();
	}
};
