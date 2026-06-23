#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define FOUNDATION_SERIALIZATIONX_GUIDFROMSERIALSTRING_OFFSET UNITYSDK_OFFSET(0x1C5D7410)
#define FOUNDATION_SERIALIZATIONX_GUIDNULLABLEFROMSERIALSTRING_OFFSET UNITYSDK_OFFSET(0x1C5D7340)
#define FOUNDATION_SERIALIZATIONX_READBBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C5D7560)
#define FOUNDATION_SERIALIZATIONX_READDATETIMEASLOCALTIME_OFFSET UNITYSDK_OFFSET(0x1C5D7AD0)
#define FOUNDATION_SERIALIZATIONX_READDATETIMEASUTC_OFFSET UNITYSDK_OFFSET(0x1C5D7A00)
#define FOUNDATION_SERIALIZATIONX_READGUIDNULLABLE_OFFSET UNITYSDK_OFFSET(0x1C5D7730)
#define FOUNDATION_SERIALIZATIONX_READGUID_OFFSET UNITYSDK_OFFSET(0x1C5D77B0)
#define FOUNDATION_SERIALIZATIONX_READVECTOR2_OFFSET UNITYSDK_OFFSET(0x1C5D7EF0)
#define FOUNDATION_SERIALIZATIONX_READVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C5D7E30)
#define FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_1_OFFSET UNITYSDK_OFFSET(0x1C5D7190)
#define FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_2_OFFSET UNITYSDK_OFFSET(0x1C5D72E0)
#define FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_OFFSET UNITYSDK_OFFSET(0x1C5D7120)
#define FOUNDATION_SERIALIZATIONX_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x1C5D7F80)
#define FOUNDATION_SERIALIZATIONX_WRITEBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1C5D74C0)
#define FOUNDATION_SERIALIZATIONX_WRITEDATETIME_OFFSET UNITYSDK_OFFSET(0x1C5D7980)
#define FOUNDATION_SERIALIZATIONX_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x1C5D7C90)
#define FOUNDATION_SERIALIZATIONX_WRITEGUID_1_OFFSET UNITYSDK_OFFSET(0x1C5D7670)
#define FOUNDATION_SERIALIZATIONX_WRITEGUID_OFFSET UNITYSDK_OFFSET(0x1C5D75E0)
#define FOUNDATION_SERIALIZATIONX_WRITEINT_OFFSET UNITYSDK_OFFSET(0x1C5D7BB0)
#define FOUNDATION_SERIALIZATIONX_WRITELONG_OFFSET UNITYSDK_OFFSET(0x1C5D7C20)
#define FOUNDATION_SERIALIZATIONX_WRITESERIALIZEDSTRING_OFFSET UNITYSDK_OFFSET(0x1C5D78C0)
#define FOUNDATION_SERIALIZATIONX_WRITEVECTOR2_OFFSET UNITYSDK_OFFSET(0x1C5D7DA0)
#define FOUNDATION_SERIALIZATIONX_WRITEVECTOR3_OFFSET UNITYSDK_OFFSET(0x1C5D7D00)

namespace Foundation
{
	inline static constexpr unsigned int SerializationX_TypeDefinitionIndex = 7955;

	class SerializationX : public ::System::Object
	{
	public:
		static ::System::String* ToStringSerial(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_OFFSET))(str);
		}

		static ::System::String* ToStringSerial_1(::System::Nullable_1<::System::Guid> guid)
		{
			return ((::System::String*(*)(::System::Nullable_1<::System::Guid>))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_1_OFFSET))(guid);
		}

		static ::System::String* ToStringSerial_2(::System::Guid guid)
		{
			return ((::System::String*(*)(::System::Guid))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_TOSTRINGSERIAL_2_OFFSET))(guid);
		}

		static ::System::Nullable_1<::System::Guid> GuidNullableFromSerialString(::System::String* str)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_GUIDNULLABLEFROMSERIALSTRING_OFFSET))(str);
		}

		static ::System::Guid GuidFromSerialString(::System::String* str)
		{
			return ((::System::Guid(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_GUIDFROMSERIALSTRING_OFFSET))(str);
		}

		static ::System::IO::BinaryWriter* WriteByteArray(::System::IO::BinaryWriter* bw, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEBYTEARRAY_OFFSET))(bw, data);
		}

		static ::Il2CppArray<::System::Byte>* ReadbByteArray(::System::IO::BinaryReader* bread)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READBBYTEARRAY_OFFSET))(bread);
		}

		static ::System::IO::BinaryWriter* WriteGuid(::System::IO::BinaryWriter* bw, ::System::Nullable_1<::System::Guid> guid)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Nullable_1<::System::Guid>))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEGUID_OFFSET))(bw, guid);
		}

		static ::System::IO::BinaryWriter* WriteGuid_1(::System::IO::BinaryWriter* bw, ::System::Guid guid)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Guid))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEGUID_1_OFFSET))(bw, guid);
		}

		static ::System::Nullable_1<::System::Guid> ReadGuidNullable(::System::IO::BinaryReader* bread)
		{
			return ((::System::Nullable_1<::System::Guid>(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READGUIDNULLABLE_OFFSET))(bread);
		}

		static ::System::Guid ReadGuid(::System::IO::BinaryReader* bread)
		{
			return ((::System::Guid(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READGUID_OFFSET))(bread);
		}

		static ::System::IO::BinaryWriter* WriteSerializedString(::System::IO::BinaryWriter* bw, ::System::String* source)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITESERIALIZEDSTRING_OFFSET))(bw, source);
		}

		static ::System::IO::BinaryWriter* WriteDateTime(::System::IO::BinaryWriter* bw, ::System::DateTime time)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::DateTime))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEDATETIME_OFFSET))(bw, time);
		}

		static ::System::DateTime ReadDateTimeAsUTC(::System::IO::BinaryReader* bread)
		{
			return ((::System::DateTime(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READDATETIMEASUTC_OFFSET))(bread);
		}

		static ::System::DateTime ReadDateTimeAsLocalTime(::System::IO::BinaryReader* bread)
		{
			return ((::System::DateTime(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READDATETIMEASLOCALTIME_OFFSET))(bread);
		}

		static ::System::IO::BinaryWriter* WriteInt(::System::IO::BinaryWriter* bw, ::System::Int32 val)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEINT_OFFSET))(bw, val);
		}

		static ::System::IO::BinaryWriter* WriteLong(::System::IO::BinaryWriter* bw, ::System::Int64 val)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITELONG_OFFSET))(bw, val);
		}

		static ::System::IO::BinaryWriter* WriteFloat(::System::IO::BinaryWriter* bw, ::System::Single val)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEFLOAT_OFFSET))(bw, val);
		}

		static ::System::IO::BinaryWriter* WriteVector3(::System::IO::BinaryWriter* bw, ::UnityEngine::Vector3 v3)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEVECTOR3_OFFSET))(bw, v3);
		}

		static ::System::IO::BinaryWriter* WriteVector2(::System::IO::BinaryWriter* bw, ::UnityEngine::Vector2 v2)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEVECTOR2_OFFSET))(bw, v2);
		}

		static ::UnityEngine::Vector3 ReadVector3(::System::IO::BinaryReader* bread)
		{
			return ((::UnityEngine::Vector3(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READVECTOR3_OFFSET))(bread);
		}

		static ::UnityEngine::Vector2 ReadVector2(::System::IO::BinaryReader* bread)
		{
			return ((::UnityEngine::Vector2(*)(::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_READVECTOR2_OFFSET))(bread);
		}

		static ::System::IO::BinaryWriter* WriteBool(::System::IO::BinaryWriter* bw, ::System::Boolean val)
		{
			return ((::System::IO::BinaryWriter*(*)(::System::IO::BinaryWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_SERIALIZATIONX_WRITEBOOL_OFFSET))(bw, val);
		}
	};
}
