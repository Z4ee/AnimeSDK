#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_284D32FB02E8E03B;

#define CLASS_1_284D32FB02E8E03B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1947CEB0)
#define CLASS_1_284D32FB02E8E03B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1947CEE0)
#define CLASS_1_284D32FB02E8E03B___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1947CEF0)

inline static constexpr unsigned int Class_1_284D32FB02E8E03B___c_TypeDefinitionIndex = 31520;

class Class_1_284D32FB02E8E03B___c : public ::System::Object
{
public:
	static ::Class_1_284D32FB02E8E03B___c** StaticGet___9()
	{
		return (::Class_1_284D32FB02E8E03B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_284D32FB02E8E03B___c_TypeDefinitionIndex)->GetStaticField(0x4B940);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_284D32FB02E8E03B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284D32FB02E8E03B___C__CTOR_OFFSET))(this);
	}

	::Class_1_284D32FB02E8E03B* __cctor_b__42_0()
	{
		return ((::Class_1_284D32FB02E8E03B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_284D32FB02E8E03B___C___CCTOR_B__42_0_OFFSET))(this);
	}
};
