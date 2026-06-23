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

#define MIHOYO_SDK_COMMONINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C8359F0)
#define MIHOYO_SDK_COMMONINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1C834C80)
#define MIHOYO_SDK_COMMONINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C835210)
#define MIHOYO_SDK_COMMONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C8351B0)
#define MIHOYO_SDK_COMMONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C8353B0)
#define MIHOYO_SDK_COMMONINFO_GET_APPVERSION_OFFSET UNITYSDK_OFFSET(0x1C835040)
#define MIHOYO_SDK_COMMONINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C8348E0)
#define MIHOYO_SDK_COMMONINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1C834F90)
#define MIHOYO_SDK_COMMONINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C834E30)
#define MIHOYO_SDK_COMMONINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1C8351A0)
#define MIHOYO_SDK_COMMONINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C834880)
#define MIHOYO_SDK_COMMONINFO_GET_PKGCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C8350F0)
#define MIHOYO_SDK_COMMONINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1C834D80)
#define MIHOYO_SDK_COMMONINFO_GET_SYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x1C834EE0)
#define MIHOYO_SDK_COMMONINFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0x1C834CD0)
#define MIHOYO_SDK_COMMONINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C835FC0)
#define MIHOYO_SDK_COMMONINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C835C70)
#define MIHOYO_SDK_COMMONINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C834A60)
#define MIHOYO_SDK_COMMONINFO_SET_APPVERSION_OFFSET UNITYSDK_OFFSET(0x1C835050)
#define MIHOYO_SDK_COMMONINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1C834FA0)
#define MIHOYO_SDK_COMMONINFO_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0x1C834E40)
#define MIHOYO_SDK_COMMONINFO_SET_PKGCHANNEL_OFFSET UNITYSDK_OFFSET(0x1C835100)
#define MIHOYO_SDK_COMMONINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1C834D90)
#define MIHOYO_SDK_COMMONINFO_SET_SYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0x1C834EF0)
#define MIHOYO_SDK_COMMONINFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0x1C834CE0)
#define MIHOYO_SDK_COMMONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C835760)
#define MIHOYO_SDK_COMMONINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C8357C0)
#define MIHOYO_SDK_COMMONINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C836590)
#define MIHOYO_SDK_COMMONINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C834B60)
#define MIHOYO_SDK_COMMONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C834AC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CommonInfo_TypeDefinitionIndex = 36753;

	class CommonInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CommonInfo_TypeDefinitionIndex)->GetStaticField(0x28570);
		}
		static ::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>** StaticGet__map_extraInfo_codec()
		{
			return (::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CommonInfo_TypeDefinitionIndex)->GetStaticField(0x28578);
		}
		// static const ::System::Int32 UserIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 PlatformFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DeviceNameFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 SystemVersionFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 DeviceIdFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 AppVersionFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 PkgChannelFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 ExtraInfoFieldNumber = 0x8; // 0x0
		::System::String* deviceId_; // 0x10
		::System::String* pkgChannel_; // 0x18
		::System::String* systemVersion_; // 0x20
		::System::String* platform_; // 0x28
		::System::String* userId_; // 0x30
		::System::String* deviceName_; // 0x38
		::System::String* appVersion_; // 0x40
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::CommonInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::CommonInfo* Clone()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_UserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_USERID_OFFSET))(this, value);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_PLATFORM_OFFSET))(this, value);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_DEVICENAME_OFFSET))(this, value);
		}

		::System::String* get_SystemVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_SYSTEMVERSION_OFFSET))(this);
		}

		::System::Void set_SystemVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_SYSTEMVERSION_OFFSET))(this, value);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::String* get_AppVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_APPVERSION_OFFSET))(this);
		}

		::System::Void set_AppVersion(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_APPVERSION_OFFSET))(this, value);
		}

		::System::String* get_PkgChannel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PKGCHANNEL_OFFSET))(this);
		}

		::System::Void set_PkgChannel(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_PKGCHANNEL_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::CommonInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::CommonInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
