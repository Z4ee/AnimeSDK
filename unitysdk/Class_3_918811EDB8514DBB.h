#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define CLASS_3_918811EDB8514DBB_FLUSH_OFFSET UNITYSDK_OFFSET(0x1831B0D0)
#define CLASS_3_918811EDB8514DBB_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1831B000)
#define CLASS_3_918811EDB8514DBB_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1831B010)
#define CLASS_3_918811EDB8514DBB_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1831B020)
#define CLASS_3_918811EDB8514DBB_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1831B030)
#define CLASS_3_918811EDB8514DBB_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1831B040)
#define CLASS_3_918811EDB8514DBB_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1831B190)
#define CLASS_3_918811EDB8514DBB_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1831B170)
#define CLASS_3_918811EDB8514DBB_READ_OFFSET UNITYSDK_OFFSET(0x1831B0F0)
#define CLASS_3_918811EDB8514DBB_SEEK_OFFSET UNITYSDK_OFFSET(0x1831B070)
#define CLASS_3_918811EDB8514DBB_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1831B0E0)
#define CLASS_3_918811EDB8514DBB_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1831B050)
#define CLASS_3_918811EDB8514DBB_WRITE_OFFSET UNITYSDK_OFFSET(0x1831B160)
#define CLASS_3_918811EDB8514DBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1831B1B0)

inline static constexpr unsigned int Class_3_918811EDB8514DBB_TypeDefinitionIndex = 9473;

class Class_3_918811EDB8514DBB : public ::System::IO::Stream
{
public:
	::Il2CppArray<::System::Byte>* Field_3_3; // 0x28
	::System::Int64 Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38
	::System::Int64 Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB__CTOR_OFFSET))(this);
	}

	::System::Boolean get_CanRead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_GET_CANREAD_OFFSET))(this);
	}

	::System::Boolean get_CanSeek()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_GET_CANSEEK_OFFSET))(this);
	}

	::System::Boolean get_CanWrite()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_GET_CANWRITE_OFFSET))(this);
	}

	::System::Int64 get_Length()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_GET_LENGTH_OFFSET))(this);
	}

	::System::Int64 get_Position()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_SET_POSITION_OFFSET))(this, a1);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_FLUSH_OFFSET))(this);
	}

	::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_SEEK_OFFSET))(this, a1, a2);
	}

	::System::Void SetLength(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_SETLENGTH_OFFSET))(this, a1);
	}

	::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_READ_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_WRITE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_918811EDB8514DBB_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}
};
