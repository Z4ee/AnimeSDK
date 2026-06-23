#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_B136CFD8FB6B8F37.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class Class_1_FA9271BA53EF73F8;
namespace MoleMole::Config { class SenseRangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_20F4A6C8C8CA9A96_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E29680)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x19E29860)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_B11C4F8AEDB8E6C4_OFFSET UNITYSDK_OFFSET(0x19E297C0)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_1_OFFSET UNITYSDK_OFFSET(0x19E29980)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_2_OFFSET UNITYSDK_OFFSET(0x19E29A00)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x19E29740)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19E29640)
#define CLASS_2_20F4A6C8C8CA9A96_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19E29600)
#define CLASS_2_20F4A6C8C8CA9A96_ONCREATE_OFFSET UNITYSDK_OFFSET(0x19E295C0)
#define CLASS_2_20F4A6C8C8CA9A96_UPDATE_OFFSET UNITYSDK_OFFSET(0x19E296C0)
#define CLASS_2_20F4A6C8C8CA9A96__CTOR_OFFSET UNITYSDK_OFFSET(0x19E29720)

inline static constexpr unsigned int Class_2_20F4A6C8C8CA9A96_TypeDefinitionIndex = 47474;

class Class_2_20F4A6C8C8CA9A96 : public ::Foundation::SingletonDisposable_1<::Class_2_20F4A6C8C8CA9A96*>
{
public:
	::Unity::Jobs::JobHandle Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_UPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_B136CFD8FB6B8F37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::Struct_2_B136CFD8FB6B8F37 Method_2_B11C4F8AEDB8E6C4(::System::Collections::Generic::List_1<::MoleMole::Config::SenseRangeConfig*>* a1, ::Class_1_FA9271BA53EF73F8* a2, ::System::Boolean a3)
	{
		return ((::Struct_2_B136CFD8FB6B8F37(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::SenseRangeConfig*>*, ::Class_1_FA9271BA53EF73F8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_B11C4F8AEDB8E6C4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90_1(::Struct_2_B136CFD8FB6B8F37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCCEF225A11BDA90_2(::Struct_2_B136CFD8FB6B8F37 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B136CFD8FB6B8F37))((::PBYTE)hIl2Cpp + CLASS_2_20F4A6C8C8CA9A96_METHOD_2_BCCEF225A11BDA90_2_OFFSET))(this, a1);
	}
};
