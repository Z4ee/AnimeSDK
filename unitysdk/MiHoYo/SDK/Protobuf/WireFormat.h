#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x1D2926D0)
#define MIHOYO_SDK_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET UNITYSDK_OFFSET(0x1D2926C0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int WireFormat_TypeDefinitionIndex = 34298;

	class WireFormat : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::WireFormat_WireType GetTagWireType(::System::UInt32 a1)
		{
			return ((::MiHoYo::SDK::Protobuf::WireFormat_WireType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WIREFORMAT_GETTAGWIRETYPE_OFFSET))(a1);
		}

		static ::System::Int32 GetTagFieldNumber(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WIREFORMAT_GETTAGFIELDNUMBER_OFFSET))(a1);
		}
	};
}
