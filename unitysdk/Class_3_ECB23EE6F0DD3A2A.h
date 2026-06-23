#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

class Class_1_24527869B3D2620F;

#define CLASS_3_ECB23EE6F0DD3A2A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF7D5C0)
#define CLASS_3_ECB23EE6F0DD3A2A_FLUSH_OFFSET UNITYSDK_OFFSET(0x1CF7D100)
#define CLASS_3_ECB23EE6F0DD3A2A_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1CF7CF00)
#define CLASS_3_ECB23EE6F0DD3A2A_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1CF7CF10)
#define CLASS_3_ECB23EE6F0DD3A2A_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1CF7CF20)
#define CLASS_3_ECB23EE6F0DD3A2A_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1CF7CF30)
#define CLASS_3_ECB23EE6F0DD3A2A_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CF7D030)
#define CLASS_3_ECB23EE6F0DD3A2A_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1CF7CF90)
#define CLASS_3_ECB23EE6F0DD3A2A_METHOD_3_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1CF7D620)
#define CLASS_3_ECB23EE6F0DD3A2A_READ_OFFSET UNITYSDK_OFFSET(0x1CF7D150)
#define CLASS_3_ECB23EE6F0DD3A2A_SEEK_OFFSET UNITYSDK_OFFSET(0x1CF7D380)
#define CLASS_3_ECB23EE6F0DD3A2A_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1CF7D490)
#define CLASS_3_ECB23EE6F0DD3A2A_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1CF7D050)
#define CLASS_3_ECB23EE6F0DD3A2A_WRITE_OFFSET UNITYSDK_OFFSET(0x1CF7D520)
#define CLASS_3_ECB23EE6F0DD3A2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6E610)

inline static constexpr unsigned int Class_3_ECB23EE6F0DD3A2A_TypeDefinitionIndex = 33888;

class Class_3_ECB23EE6F0DD3A2A : public ::System::IO::Stream
{
public:
	::Class_1_24527869B3D2620F* Field_3_0; // 0x28
	::System::Int32 Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x34

	::System::Void _ctor(::Class_1_24527869B3D2620F* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24527869B3D2620F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_CanRead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_GET_CANREAD_OFFSET))(this);
	}

	::System::Boolean get_CanSeek()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_GET_CANSEEK_OFFSET))(this);
	}

	::System::Boolean get_CanWrite()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_GET_CANWRITE_OFFSET))(this);
	}

	::System::Int64 get_Length()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_GET_LENGTH_OFFSET))(this);
	}

	::System::Int64 get_Position()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_SET_POSITION_OFFSET))(this, a1);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_FLUSH_OFFSET))(this);
	}

	::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_READ_OFFSET))(this, a1, a2, a3);
	}

	::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_SEEK_OFFSET))(this, a1, a2);
	}

	::System::Void SetLength(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_SETLENGTH_OFFSET))(this, a1);
	}

	::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_WRITE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_DISPOSE_OFFSET))(this, a1);
	}

	::System::Void Method_3_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_METHOD_3_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ECB23EE6F0DD3A2A_METHOD_3_9681042564541CD6_OFFSET))(this);
	}
};
