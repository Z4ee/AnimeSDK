#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6C719BA8F85845D8.h"
#include "unitysdk/GameFramework/FileSystem/FileSystemAccess.h"
#include "unitysdk/System/IO/SeekOrigin.h"

namespace System { class String; }
namespace System::IO { class FileStream; }

#define CLASS_2_7577A0DE033F7A3D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AEB010)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_0DF5867274D0AA1B_OFFSET UNITYSDK_OFFSET(0x16AEAFB0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_34AD349C7C7ABFF1_OFFSET UNITYSDK_OFFSET(0x16AEAE70)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET UNITYSDK_OFFSET(0x16AEAE50)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_OFFSET UNITYSDK_OFFSET(0x16AEADD0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_A6F0FC479054D5CD_OFFSET UNITYSDK_OFFSET(0x16AEAF00)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_C274ED2FEA275C32_OFFSET UNITYSDK_OFFSET(0x16AEAE90)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_DA0C198238C58560_OFFSET UNITYSDK_OFFSET(0x16AEADF0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_E6F651A03932D8AA_OFFSET UNITYSDK_OFFSET(0x16AEAF20)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_F76C8E733990A147_OFFSET UNITYSDK_OFFSET(0x16AEAEB0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_F9FC72D0F5C99797_OFFSET UNITYSDK_OFFSET(0x16AEAED0)
#define CLASS_2_7577A0DE033F7A3D_METHOD_2_FA58824BA12F6F62_OFFSET UNITYSDK_OFFSET(0x16AEAF50)
#define CLASS_2_7577A0DE033F7A3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE2A40)

inline static constexpr unsigned int Class_2_7577A0DE033F7A3D_TypeDefinitionIndex = 33812;

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

	::System::Void Method_2_DA0C198238C58560(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_DA0C198238C58560_OFFSET))(this, a1);
	}

	::System::Int64 Method_2_5F71BE71AFD1A4FE_1()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_5F71BE71AFD1A4FE_1_OFFSET))(this);
	}

	::System::Void Method_2_34AD349C7C7ABFF1(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_34AD349C7C7ABFF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_C274ED2FEA275C32(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_C274ED2FEA275C32_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_0DF5867274D0AA1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_METHOD_2_0DF5867274D0AA1B_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7577A0DE033F7A3D_DISPOSE_OFFSET))(this);
	}
};
