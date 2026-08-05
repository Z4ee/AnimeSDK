#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/DataConverter.h"

#define MONO_DATACONVERTER_COPYCONVERTER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x1CD2F900)
#define MONO_DATACONVERTER_COPYCONVERTER_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1CD2FDE0)
#define MONO_DATACONVERTER_COPYCONVERTER_GETINT16_OFFSET UNITYSDK_OFFSET(0x1CD301D0)
#define MONO_DATACONVERTER_COPYCONVERTER_GETINT32_OFFSET UNITYSDK_OFFSET(0x1CD2FF30)
#define MONO_DATACONVERTER_COPYCONVERTER_GETINT64_OFFSET UNITYSDK_OFFSET(0x1CD2FC40)
#define MONO_DATACONVERTER_COPYCONVERTER_GETUINT16_OFFSET UNITYSDK_OFFSET(0x1CD302F0)
#define MONO_DATACONVERTER_COPYCONVERTER_GETUINT32_OFFSET UNITYSDK_OFFSET(0x1CD30080)
#define MONO_DATACONVERTER_COPYCONVERTER_GETUINT64_OFFSET UNITYSDK_OFFSET(0x1CD2FAA0)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_1_OFFSET UNITYSDK_OFFSET(0x1CD30470)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_2_OFFSET UNITYSDK_OFFSET(0x1CD304D0)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_3_OFFSET UNITYSDK_OFFSET(0x1CD30520)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_4_OFFSET UNITYSDK_OFFSET(0x1CD30570)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_5_OFFSET UNITYSDK_OFFSET(0x1CD305C0)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_6_OFFSET UNITYSDK_OFFSET(0x1CD30610)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_7_OFFSET UNITYSDK_OFFSET(0x1CD30660)
#define MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_OFFSET UNITYSDK_OFFSET(0x1CD30410)
#define MONO_DATACONVERTER_COPYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD306B0)

namespace Mono
{
	inline static constexpr unsigned int DataConverter_CopyConverter_TypeDefinitionIndex = 5;

	class DataConverter_CopyConverter : public ::Mono::DataConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Double GetDouble(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETDOUBLE_OFFSET))(this, data, index);
		}

		::System::UInt64 GetUInt64(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::UInt64(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETUINT64_OFFSET))(this, data, index);
		}

		::System::Int64 GetInt64(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETINT64_OFFSET))(this, data, index);
		}

		::System::Single GetFloat(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETFLOAT_OFFSET))(this, data, index);
		}

		::System::Int32 GetInt32(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETINT32_OFFSET))(this, data, index);
		}

		::System::UInt32 GetUInt32(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETUINT32_OFFSET))(this, data, index);
		}

		::System::Int16 GetInt16(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::Int16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETINT16_OFFSET))(this, data, index);
		}

		::System::UInt16 GetUInt16(::Il2CppArray<::System::Byte>* data, ::System::Int32 index)
		{
			return ((::System::UInt16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_GETUINT16_OFFSET))(this, data, index);
		}

		::System::Void PutBytes(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_1(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_1_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_2(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_2_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_3(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_3_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_4(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_4_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_5(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_5_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_6(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_6_OFFSET))(this, dest, destIdx, value);
		}

		::System::Void PutBytes_7(::Il2CppArray<::System::Byte>* dest, ::System::Int32 destIdx, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + MONO_DATACONVERTER_COPYCONVERTER_PUTBYTES_7_OFFSET))(this, dest, destIdx, value);
		}
	};
}
