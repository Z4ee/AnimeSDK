#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET UNITYSDK_OFFSET(0x185225E0)
#define MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x18520A10)
#define MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET UNITYSDK_OFFSET(0x18522400)
#define MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET UNITYSDK_OFFSET(0x185224B0)
#define MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x185220C0)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x18522740)
#define MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x18522090)
#define MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x18522670)
#define MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET UNITYSDK_OFFSET(0x18522600)

namespace Mono::Security
{
	inline static constexpr unsigned int BitConverterLE_TypeDefinitionIndex = 2248;

	class BitConverterLE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* GetUIntBytes(::System::Byte* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETUINTBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetULongBytes(::System::Byte* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETULONGBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* GetBytes_1(::System::Int64 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_GETBYTES_1_OFFSET))(a1);
		}

		static ::System::Void UShortFromBytes(::System::Byte* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_USHORTFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void UIntFromBytes(::System::Byte* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_UINTFROMBYTES_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ToInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOINT32_OFFSET))(a1, a2);
		}

		static ::System::UInt16 ToUInt16(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT16_OFFSET))(a1, a2);
		}

		static ::System::UInt32 ToUInt32(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_BITCONVERTERLE_TOUINT32_OFFSET))(a1, a2);
		}
	};
}
