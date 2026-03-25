#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FileVisitorPosMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_C553A356FBBA6FB6_METHOD_1_41A4FF3EEF9E6248_OFFSET UNITYSDK_OFFSET(0x18319460)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18318E10)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18318DC0)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_45F4D9C0E6199578_OFFSET UNITYSDK_OFFSET(0x18319350)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18318DB0)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_93B90A5DA7A49883_OFFSET UNITYSDK_OFFSET(0x18318E80)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18318E60)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_CCD4AFD1CE183FB2_OFFSET UNITYSDK_OFFSET(0x18318E90)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_E9BFA88E6006BCCD_OFFSET UNITYSDK_OFFSET(0x18318EB0)
#define CLASS_1_C553A356FBBA6FB6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18318E70)
#define CLASS_1_C553A356FBBA6FB6__CTOR_OFFSET UNITYSDK_OFFSET(0x18318DA0)

inline static constexpr unsigned int Class_1_C553A356FBBA6FB6_TypeDefinitionIndex = 9472;

class Class_1_C553A356FBBA6FB6 : public ::System::Object
{
public:
	::System::IO::Stream* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::Client::FileVisitorPosMode Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_93B90A5DA7A49883(::RPG::Client::FileVisitorPosMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FileVisitorPosMode))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_93B90A5DA7A49883_OFFSET))(this, a1);
	}

	::System::Int64 Method_1_CCD4AFD1CE183FB2()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_CCD4AFD1CE183FB2_OFFSET))(this);
	}

	::System::Boolean Method_1_E9BFA88E6006BCCD(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_E9BFA88E6006BCCD_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Int64 Method_1_45F4D9C0E6199578(::System::Int64 a1)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_45F4D9C0E6199578_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Byte>* Method_1_41A4FF3EEF9E6248(::System::Int64 a1, ::System::Int64 a2, ::Il2CppArray<::System::Byte>* a3)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_C553A356FBBA6FB6_METHOD_1_41A4FF3EEF9E6248_OFFSET))(this, a1, a2, a3);
	}
};
