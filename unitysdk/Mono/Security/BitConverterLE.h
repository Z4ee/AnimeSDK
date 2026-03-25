#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x1613A9E0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x16138BD0)
#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x1613A640)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x1613A790)
#define MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x1613A340)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x1613ABE0)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x1613A310)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1613AAA0)
#define MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x1613AA00)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_TypeDefinitionIndex = 2247;

	class BitConverterLE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::System::Byte* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::System::Byte* bytes)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET))(bytes);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Int64 value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET))(value);
		}

		static ::System::Void UShortFromBytes(::System::Byte* dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Void UIntFromBytes(::System::Byte* dst, ::Il2CppArray<::System::Byte>* src, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET))(dst, src, startIndex);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET))(value, startIndex);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET))(value, startIndex);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* value, ::System::Int32 startIndex)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET))(value, startIndex);
		}
	};
}
