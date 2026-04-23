#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class CommonInfo; }
namespace MiHoYo::SDK { class EventInfo; }
namespace MiHoYo::SDK { class PageInfo; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_TRACKINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x8DD32A0)
#define MIHOYO_SDK_TRACKINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x8DD2D90)
#define MIHOYO_SDK_TRACKINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8DD3070)
#define MIHOYO_SDK_TRACKINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x8DD2F60)
#define MIHOYO_SDK_TRACKINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8DD3150)
#define MIHOYO_SDK_TRACKINFO_GET_COMMONINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F20)
#define MIHOYO_SDK_TRACKINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x8DD2A70)
#define MIHOYO_SDK_TRACKINFO_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F40)
#define MIHOYO_SDK_TRACKINFO_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F00)
#define MIHOYO_SDK_TRACKINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x8DD2A10)
#define MIHOYO_SDK_TRACKINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x8DD3600)
#define MIHOYO_SDK_TRACKINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x8DD3370)
#define MIHOYO_SDK_TRACKINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x8DD2BF0)
#define MIHOYO_SDK_TRACKINFO_SET_COMMONINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F30)
#define MIHOYO_SDK_TRACKINFO_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F50)
#define MIHOYO_SDK_TRACKINFO_SET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x8DD2F10)
#define MIHOYO_SDK_TRACKINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8DD31B0)
#define MIHOYO_SDK_TRACKINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x8DD3210)
#define MIHOYO_SDK_TRACKINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD3940)
#define MIHOYO_SDK_TRACKINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8DD2C60)
#define MIHOYO_SDK_TRACKINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD2C50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TrackInfo_TypeDefinitionIndex = 42971;

	class TrackInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TrackInfo_TypeDefinitionIndex)->GetStaticField(0x4E290);
		}
		// static const ::System::Int32 PageInfoFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 CommonInfoFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 EventInfoFieldNumber = 0x3; // 0x0
		::MiHoYo::SDK::EventInfo* eventInfo_; // 0x10
		::MiHoYo::SDK::CommonInfo* commonInfo_; // 0x18
		::MiHoYo::SDK::PageInfo* pageInfo_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::TrackInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::TrackInfo* Clone()
		{
			return ((::MiHoYo::SDK::TrackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* get_PageInfo()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_PAGEINFO_OFFSET))(this);
		}

		::System::Void set_PageInfo(::MiHoYo::SDK::PageInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_PAGEINFO_OFFSET))(this, value);
		}

		::MiHoYo::SDK::CommonInfo* get_CommonInfo()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_COMMONINFO_OFFSET))(this);
		}

		::System::Void set_CommonInfo(::MiHoYo::SDK::CommonInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_COMMONINFO_OFFSET))(this, value);
		}

		::MiHoYo::SDK::EventInfo* get_EventInfo()
		{
			return ((::MiHoYo::SDK::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void set_EventInfo(::MiHoYo::SDK::EventInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_EVENTINFO_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::TrackInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::TrackInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
