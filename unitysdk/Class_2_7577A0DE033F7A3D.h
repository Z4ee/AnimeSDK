#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6C719BA8F85845D8.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"

namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_2_7577A0DE033F7A3D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F3A010)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18F39F90)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_48E1FFF9FE7B3B38_OFFSET UNITYSDK_OFFSET(0x18F39E70)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET UNITYSDK_OFFSET(0x18F39E30)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_OFFSET UNITYSDK_OFFSET(0x18F39DB0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_A6F0FC479054D5CD_OFFSET UNITYSDK_OFFSET(0x18F39EE0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_E6F651A03932D8AA_OFFSET UNITYSDK_OFFSET(0x18F39F00)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_ECF953F59626BE38_OFFSET UNITYSDK_OFFSET(0x18F39DD0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_F0B66044D1A23935_OFFSET UNITYSDK_OFFSET(0x18F39E50)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_F76C8E733990A147_OFFSET UNITYSDK_OFFSET(0x18F39E90)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_F9FC72D0F5C99797_OFFSET UNITYSDK_OFFSET(0x18F39EB0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x18F39F30)
#define CLASS_2_7577A0DE033F7A3D__CTOR_OFFSET UNITYSDK_OFFSET(0x18F38D30)

inline static constexpr unsigned int Class_2_7577A0DE033F7A3D_TypeDefinitionIndex = 40436;

class Class_2_7577A0DE033F7A3D : public ::Class_1_6C719BA8F85845D8
{
public:
	::System::IO::FileStream* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1, ::GameFramework::FileSystem::FileSystemAccess a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::GameFramework::FileSystem::FileSystemAccess, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int64 Method_2_5F71BE71AFD1A4FE()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_OFFSET))(this);
	}

	::System::Void Method_2_ECF953F59626BE38(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_ECF953F59626BE38_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_5F71BE71AFD1A4FE_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET))(this);
	}

	::System::Void Method_2_F0B66044D1A23935(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_F0B66044D1A23935_OFFSET))(this, a1);
	}

	::System::Void Method_2_48E1FFF9FE7B3B38(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_48E1FFF9FE7B3B38_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_F76C8E733990A147()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_F76C8E733990A147_OFFSET))(this);
	}

	::System::Int32 Method_2_F9FC72D0F5C99797(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_F9FC72D0F5C99797_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A6F0FC479054D5CD(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_A6F0FC479054D5CD_OFFSET))(this, a1);
	}

	::System::Void Method_2_E6F651A03932D8AA(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_E6F651A03932D8AA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_FA58824BA12F6F62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_FA58824BA12F6F62_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_DISPOSE_OFFSET))(this);
	}
};
