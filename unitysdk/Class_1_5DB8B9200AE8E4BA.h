#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_3;
namespace System { class String; }

#define CLASS_1_5DB8B9200AE8E4BA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x19F45B90)
#define CLASS_1_5DB8B9200AE8E4BA_METHOD_1_448DDBB0F35B17A6_OFFSET UNITYSDK_OFFSET(0x19F45F40)
#define CLASS_1_5DB8B9200AE8E4BA_METHOD_1_EBC1C6E91542E706_OFFSET UNITYSDK_OFFSET(0x19F45BC0)
#define CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_1_OFFSET UNITYSDK_OFFSET(0x19F45D20)
#define CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_2_OFFSET UNITYSDK_OFFSET(0x19F45E30)
#define CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x19F45C20)
#define CLASS_1_5DB8B9200AE8E4BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F46060)
#define CLASS_1_5DB8B9200AE8E4BA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F46050)

inline static constexpr unsigned int Class_1_5DB8B9200AE8E4BA_TypeDefinitionIndex = 6824;

class Class_1_5DB8B9200AE8E4BA : public ::System::Object
{
public:
	static ::Class_1_5DB8B9200AE8E4BA** StaticGet__Default_k__BackingField()
	{
		return (::Class_1_5DB8B9200AE8E4BA**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5DB8B9200AE8E4BA_TypeDefinitionIndex)->GetStaticField(0x6860);
	}
	::Class_0_16E4307DCC419505_3* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA__CCTOR_OFFSET))();
	}

	static ::Class_1_5DB8B9200AE8E4BA* get_Default()
	{
		return ((::Class_1_5DB8B9200AE8E4BA*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_GET_DEFAULT_OFFSET))();
	}

	static ::System::Void Method_1_EBC1C6E91542E706(::Class_0_16E4307DCC419505_3* a1)
	{
		return ((::System::Void(*)(::Class_0_16E4307DCC419505_3*))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_METHOD_1_EBC1C6E91542E706_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA383E53DEC53851_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_FA383E53DEC53851_2(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_METHOD_1_FA383E53DEC53851_2_OFFSET))(a1);
	}

	static ::System::Void Method_1_448DDBB0F35B17A6(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5DB8B9200AE8E4BA_METHOD_1_448DDBB0F35B17A6_OFFSET))(a1, a2);
	}
};
