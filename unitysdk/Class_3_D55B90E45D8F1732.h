#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

#define CLASS_3_D55B90E45D8F1732_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EBCD190)
#define CLASS_3_D55B90E45D8F1732_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1EBCCE90)
#define CLASS_3_D55B90E45D8F1732_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1EBCCEA0)
#define CLASS_3_D55B90E45D8F1732_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1EBCCEB0)
#define CLASS_3_D55B90E45D8F1732_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1EBCCEC0)
#define CLASS_3_D55B90E45D8F1732_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBCCED0)
#define CLASS_3_D55B90E45D8F1732_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1EBCD830)
#define CLASS_3_D55B90E45D8F1732_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1EBCD7E0)
#define CLASS_3_D55B90E45D8F1732_READ_OFFSET UNITYSDK_OFFSET(0x1EBCD3B0)
#define CLASS_3_D55B90E45D8F1732_SEEK_OFFSET UNITYSDK_OFFSET(0x1EBCD0E0)
#define CLASS_3_D55B90E45D8F1732_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1EBCD360)
#define CLASS_3_D55B90E45D8F1732_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBCCEE0)
#define CLASS_3_D55B90E45D8F1732_WRITE_OFFSET UNITYSDK_OFFSET(0x1EBCD5F0)
#define CLASS_3_D55B90E45D8F1732__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBCD890)

inline static constexpr unsigned int Class_3_D55B90E45D8F1732_TypeDefinitionIndex = 35240;

class Class_3_D55B90E45D8F1732 : public ::System::IO::Stream
{
public:
	::Il2CppArray<::System::Byte>* PMIBLDJPBCB; // 0x28
	::System::Boolean DLGFMPNEHGO; // 0x30
	::System::Int64 MIFKHBDOGLN; // 0x38
	::System::Int64 HDHPNOOMAGE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732__CTOR_OFFSET))(this);
	}

	::System::Boolean get_CanRead()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_GET_CANREAD_OFFSET))(this);
	}

	::System::Boolean get_CanSeek()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_GET_CANSEEK_OFFSET))(this);
	}

	::System::Boolean get_CanWrite()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_GET_CANWRITE_OFFSET))(this);
	}

	::System::Int64 get_Length()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_GET_LENGTH_OFFSET))(this);
	}

	::System::Int64 get_Position()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_SET_POSITION_OFFSET))(this, a1);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_FLUSH_OFFSET))(this);
	}

	::System::Int64 Seek(::System::Int64 a1, ::System::IO::SeekOrigin a2)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_SEEK_OFFSET))(this, a1, a2);
	}

	::System::Void SetLength(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_SETLENGTH_OFFSET))(this, a1);
	}

	::System::Int32 Read(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_READ_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Write(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_WRITE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D55B90E45D8F1732_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
	}
};
