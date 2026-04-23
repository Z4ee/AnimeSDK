#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0864311C6F08EEE8.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { template <typename T> class UnmanagedStructArray_1; }
namespace System { class String; }

#define CLASS_1_A2C0E2DA337C8F35_METHOD_1_51F2A0D4561DF575_OFFSET UNITYSDK_OFFSET(0x17AF4FC0)
#define CLASS_1_A2C0E2DA337C8F35_METHOD_1_5A40846717484B96_OFFSET UNITYSDK_OFFSET(0x17AF4F70)
#define CLASS_1_A2C0E2DA337C8F35_METHOD_1_E5106B288F3BCE27_OFFSET UNITYSDK_OFFSET(0x17AF51C0)
#define CLASS_1_A2C0E2DA337C8F35__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF5300)

inline static constexpr unsigned int Class_1_A2C0E2DA337C8F35_TypeDefinitionIndex = 37693;

class Class_1_A2C0E2DA337C8F35 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2C0E2DA337C8F35__CTOR_OFFSET))(this);
	}

	static ::System::Int64 Method_1_5A40846717484B96(::System::String* a1)
	{
		return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2C0E2DA337C8F35_METHOD_1_5A40846717484B96_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_51F2A0D4561DF575(::System::String* a1)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A2C0E2DA337C8F35_METHOD_1_51F2A0D4561DF575_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_E5106B288F3BCE27(::RPG::GameCore::UnmanagedStructArray_1<::Struct_2_0864311C6F08EEE8>* a1, ::System::UInt64 a2)
	{
		return ((::System::Int32(*)(::RPG::GameCore::UnmanagedStructArray_1<::Struct_2_0864311C6F08EEE8>*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_A2C0E2DA337C8F35_METHOD_1_E5106B288F3BCE27_OFFSET))(a1, a2);
	}
};
