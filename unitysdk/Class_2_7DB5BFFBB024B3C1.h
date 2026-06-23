#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_BE149A7D6310B037;

#define CLASS_2_7DB5BFFBB024B3C1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1674E950)
#define CLASS_2_7DB5BFFBB024B3C1_METHOD_2_2450CFC043E97F54_1_OFFSET UNITYSDK_OFFSET(0x1674ED80)
#define CLASS_2_7DB5BFFBB024B3C1_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x1674E8B0)
#define CLASS_2_7DB5BFFBB024B3C1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1674EC40)
#define CLASS_2_7DB5BFFBB024B3C1_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x1674EA70)
#define CLASS_2_7DB5BFFBB024B3C1_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x1674EB90)
#define CLASS_2_7DB5BFFBB024B3C1_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1674C7A0)
#define CLASS_2_7DB5BFFBB024B3C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1674EA60)
#define CLASS_2_7DB5BFFBB024B3C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1674EA40)

inline static constexpr unsigned int Class_2_7DB5BFFBB024B3C1_TypeDefinitionIndex = 58332;

class Class_2_7DB5BFFBB024B3C1 : public ::Foundation::SingletonDisposable_1<::Class_2_7DB5BFFBB024B3C1*>
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_7DB5BFFBB024B3C1_TypeDefinitionIndex)->GetStaticField(0xF700);
	}
	::Il2CppArray<::Class_1_BE149A7D6310B037*>* Field_2_3; // 0x10
	::System::Boolean Field_2_0; // 0x18
	::System::Boolean Field_2_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DB5BFFBB024B3C1_METHOD_2_2450CFC043E97F54_1_OFFSET))(this);
	}
};
