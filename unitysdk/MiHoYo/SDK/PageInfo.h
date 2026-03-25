#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PAGEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x855AB50)
#define MIHOYO_SDK_PAGEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x8559F60)
#define MIHOYO_SDK_PAGEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x855A440)
#define MIHOYO_SDK_PAGEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x855A3E0)
#define MIHOYO_SDK_PAGEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x855A5C0)
#define MIHOYO_SDK_PAGEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x8559BE0)
#define MIHOYO_SDK_PAGEINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x855A3D0)
#define MIHOYO_SDK_PAGEINFO_GET_PAGENAME_OFFSET UNITYSDK_OFFSET(0x855A060)
#define MIHOYO_SDK_PAGEINFO_GET_PAGEPATH_OFFSET UNITYSDK_OFFSET(0x8559FB0)
#define MIHOYO_SDK_PAGEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x8559B80)
#define MIHOYO_SDK_PAGEINFO_GET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x855A320)
#define MIHOYO_SDK_PAGEINFO_GET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0x855A270)
#define MIHOYO_SDK_PAGEINFO_GET_SUBPAGENAME_OFFSET UNITYSDK_OFFSET(0x855A1C0)
#define MIHOYO_SDK_PAGEINFO_GET_SUBPAGEPATH_OFFSET UNITYSDK_OFFSET(0x855A110)
#define MIHOYO_SDK_PAGEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x855B070)
#define MIHOYO_SDK_PAGEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x855AD80)
#define MIHOYO_SDK_PAGEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x8559D60)
#define MIHOYO_SDK_PAGEINFO_SET_PAGENAME_OFFSET UNITYSDK_OFFSET(0x855A070)
#define MIHOYO_SDK_PAGEINFO_SET_PAGEPATH_OFFSET UNITYSDK_OFFSET(0x8559FC0)
#define MIHOYO_SDK_PAGEINFO_SET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0x855A330)
#define MIHOYO_SDK_PAGEINFO_SET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0x855A280)
#define MIHOYO_SDK_PAGEINFO_SET_SUBPAGENAME_OFFSET UNITYSDK_OFFSET(0x855A1D0)
#define MIHOYO_SDK_PAGEINFO_SET_SUBPAGEPATH_OFFSET UNITYSDK_OFFSET(0x855A120)
#define MIHOYO_SDK_PAGEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x855A900)
#define MIHOYO_SDK_PAGEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x855A960)
#define MIHOYO_SDK_PAGEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x855B580)
#define MIHOYO_SDK_PAGEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8559E50)
#define MIHOYO_SDK_PAGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8559DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PageInfo_TypeDefinitionIndex = 37128;

	class PageInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>** StaticGet__map_extraInfo_codec()
		{
			return (::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PageInfo_TypeDefinitionIndex)->GetStaticField(0x13080);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::PageInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::PageInfo*>**)Il2CppClass::FromTypeDefinitionIndex(PageInfo_TypeDefinitionIndex)->GetStaticField(0x13088);
		}
		// static const ::System::Int32 PagePathFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 PageNameFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 SubPagePathFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 SubPageNameFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 SourcePathFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 SourceNameFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ExtraInfoFieldNumber = 0x7; // 0x0
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x10
		::System::String* sourcePath_; // 0x18
		::System::String* pagePath_; // 0x20
		::System::String* subPagePath_; // 0x28
		::System::String* subPageName_; // 0x30
		::System::String* pageName_; // 0x38
		::System::String* sourceName_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::PageInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::PageInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::PageInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* Clone()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_PagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PAGEPATH_OFFSET))(this);
		}

		::System::Void set_PagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_PAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_PageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PAGENAME_OFFSET))(this);
		}

		::System::Void set_PageName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_PAGENAME_OFFSET))(this, value);
		}

		::System::String* get_SubPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SUBPAGEPATH_OFFSET))(this);
		}

		::System::Void set_SubPagePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SUBPAGEPATH_OFFSET))(this, value);
		}

		::System::String* get_SubPageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SUBPAGENAME_OFFSET))(this);
		}

		::System::Void set_SubPageName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SUBPAGENAME_OFFSET))(this, value);
		}

		::System::String* get_SourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SOURCEPATH_OFFSET))(this);
		}

		::System::Void set_SourcePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SOURCEPATH_OFFSET))(this, value);
		}

		::System::String* get_SourceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SOURCENAME_OFFSET))(this);
		}

		::System::Void set_SourceName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SOURCENAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::PageInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::PageInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
