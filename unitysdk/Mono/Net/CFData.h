#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFObject.h"

#define MONO_NET_CFDATA_CFDATACREATE_OFFSET UNITYSDK_OFFSET(0x19EE14C0)
#define MONO_NET_CFDATA_CFDATAGETBYTEPTR_OFFSET UNITYSDK_OFFSET(0x19EE1800)
#define MONO_NET_CFDATA_CFDATAGETLENGTH_OFFSET UNITYSDK_OFFSET(0x19EE1780)
#define MONO_NET_CFDATA_FROMDATA_1_OFFSET UNITYSDK_OFFSET(0x19EE1630)
#define MONO_NET_CFDATA_FROMDATA_OFFSET UNITYSDK_OFFSET(0x19EE1550)
#define MONO_NET_CFDATA_GET_BYTES_OFFSET UNITYSDK_OFFSET(0x19EE1880)
#define MONO_NET_CFDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EE1900)
#define MONO_NET_CFDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x19EE1700)
#define MONO_NET_CFDATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19EE1A60)
#define MONO_NET_CFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE1430)

namespace Mono::Net
{
	inline static constexpr unsigned int CFData_TypeDefinitionIndex = 2591;

	class CFData : public ::Mono::Net::CFObject
	{
	public:
		::System::Void _ctor(::System::IntPtr handle, ::System::Boolean own)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA__CTOR_OFFSET))(this, handle, own);
		}

		static ::System::IntPtr CFDataCreate(::System::IntPtr allocator, ::System::IntPtr bytes, ::System::IntPtr length)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_CFDATACREATE_OFFSET))(allocator, bytes, length);
		}

		static ::Mono::Net::CFData* FromData(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::Mono::Net::CFData*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_FROMDATA_OFFSET))(buffer);
		}

		static ::Mono::Net::CFData* FromData_1(::System::IntPtr buffer, ::System::IntPtr length)
		{
			return ((::Mono::Net::CFData*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_FROMDATA_1_OFFSET))(buffer, length);
		}

		::System::IntPtr get_Length()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_GET_LENGTH_OFFSET))(this);
		}

		static ::System::IntPtr CFDataGetLength(::System::IntPtr theData)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_CFDATAGETLENGTH_OFFSET))(theData);
		}

		static ::System::IntPtr CFDataGetBytePtr(::System::IntPtr theData)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_CFDATAGETBYTEPTR_OFFSET))(theData);
		}

		::System::IntPtr get_Bytes()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_GET_BYTES_OFFSET))(this);
		}

		::System::Byte get_Item(::System::Int64 idx)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_GET_ITEM_OFFSET))(this, idx);
		}

		::System::Void set_Item(::System::Int64 idx, ::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_NET_CFDATA_SET_ITEM_OFFSET))(this, idx, value);
		}
	};
}
