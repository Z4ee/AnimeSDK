#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_95D2CEDB3F77EDE5.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"

namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_2_E639865015C305EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF59280)
#define CLASS_2_E639865015C305EC_METHOD_2_12E60817582102D9_OFFSET UNITYSDK_OFFSET(0x1EF59080)
#define CLASS_2_E639865015C305EC_METHOD_2_48E1FFF9FE7B3B38_OFFSET UNITYSDK_OFFSET(0x1EF59040)
#define CLASS_2_E639865015C305EC_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET UNITYSDK_OFFSET(0x1EF59000)
#define CLASS_2_E639865015C305EC_METHOD_2_5F71BE71AFD1A4FE_OFFSET UNITYSDK_OFFSET(0x1EF58F80)
#define CLASS_2_E639865015C305EC_METHOD_2_A6F0FC479054D5CD_OFFSET UNITYSDK_OFFSET(0x1EF59130)
#define CLASS_2_E639865015C305EC_METHOD_2_A897F362D169DCF4_OFFSET UNITYSDK_OFFSET(0x1EF59150)
#define CLASS_2_E639865015C305EC_METHOD_2_ECF953F59626BE38_OFFSET UNITYSDK_OFFSET(0x1EF58FA0)
#define CLASS_2_E639865015C305EC_METHOD_2_F0B66044D1A23935_OFFSET UNITYSDK_OFFSET(0x1EF59020)
#define CLASS_2_E639865015C305EC_METHOD_2_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1EF59260)
#define CLASS_2_E639865015C305EC_METHOD_2_F76C8E733990A147_OFFSET UNITYSDK_OFFSET(0x1EF59060)
#define CLASS_2_E639865015C305EC_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x1EF59200)
#define CLASS_2_E639865015C305EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF57F10)

inline static constexpr unsigned int Class_2_E639865015C305EC_TypeDefinitionIndex = 42211;

class Class_2_E639865015C305EC : public ::Class_1_95D2CEDB3F77EDE5
{
public:
	::System::IO::FileStream* EOMMIOPCNIC; // 0x10

	::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int64 Method_2_5F71BE71AFD1A4FE()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_5F71BE71AFD1A4FE_OFFSET))(this);
	}

	::System::Void Method_2_ECF953F59626BE38(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_ECF953F59626BE38_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_5F71BE71AFD1A4FE_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET))(this);
	}

	::System::Void Method_2_F0B66044D1A23935(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_F0B66044D1A23935_OFFSET))(this, a1);
	}

	::System::Void Method_2_48E1FFF9FE7B3B38(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_48E1FFF9FE7B3B38_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_F76C8E733990A147()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_F76C8E733990A147_OFFSET))(this);
	}

	::System::Int32 Method_2_12E60817582102D9(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_12E60817582102D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A6F0FC479054D5CD(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_A6F0FC479054D5CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A897F362D169DCF4(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_A897F362D169DCF4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_METHOD_2_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E639865015C305EC_DISPOSE_OFFSET))(this);
	}
};
