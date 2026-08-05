#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_BE149A7D6310B037;

#define CLASS_2_1ACE59DBA4EB3CB5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x135E8160)
#define CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_2450CFC043E97F54_1_OFFSET UNITYSDK_OFFSET(0x135E8590)
#define CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x135E80C0)
#define CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x135E8280)
#define CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0x135E83C0)
#define CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x135E84E0)
#define CLASS_2_1ACE59DBA4EB3CB5_ONCREATE_OFFSET UNITYSDK_OFFSET(0x135E5ED0)
#define CLASS_2_1ACE59DBA4EB3CB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x135E8270)
#define CLASS_2_1ACE59DBA4EB3CB5__CTOR_OFFSET UNITYSDK_OFFSET(0x135E8250)

inline static constexpr unsigned int Class_2_1ACE59DBA4EB3CB5_TypeDefinitionIndex = 90843;

class Class_2_1ACE59DBA4EB3CB5 : public ::Foundation::SingletonDisposable_1<::Class_2_1ACE59DBA4EB3CB5*>
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_1ACE59DBA4EB3CB5_TypeDefinitionIndex)->GetStaticField(0x127C0);
	}
	::Il2CppArray<::Class_1_BE149A7D6310B037*>* Field_2_0; // 0x10
	::System::Boolean Field_2_3; // 0x18
	::System::Boolean Field_2_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_937F8473216A3162()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_937F8473216A3162_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_2450CFC043E97F54_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ACE59DBA4EB3CB5_METHOD_2_2450CFC043E97F54_1_OFFSET))(this);
	}
};
