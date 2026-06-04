#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ActionType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_EVENTINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0xA159DE0)
#define MIHOYO_SDK_EVENTINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xA159300)
#define MIHOYO_SDK_EVENTINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA159750)
#define MIHOYO_SDK_EVENTINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1596F0)
#define MIHOYO_SDK_EVENTINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1598B0)
#define MIHOYO_SDK_EVENTINFO_GET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA159400)
#define MIHOYO_SDK_EVENTINFO_GET_BTNNAME_OFFSET UNITYSDK_OFFSET(0xA159420)
#define MIHOYO_SDK_EVENTINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA158F80)
#define MIHOYO_SDK_EVENTINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xA1596E0)
#define MIHOYO_SDK_EVENTINFO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xA159630)
#define MIHOYO_SDK_EVENTINFO_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0xA1594D0)
#define MIHOYO_SDK_EVENTINFO_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xA159580)
#define MIHOYO_SDK_EVENTINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0xA158F20)
#define MIHOYO_SDK_EVENTINFO_GET_TIME_OFFSET UNITYSDK_OFFSET(0xA159350)
#define MIHOYO_SDK_EVENTINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0xA15A380)
#define MIHOYO_SDK_EVENTINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0xA15A0F0)
#define MIHOYO_SDK_EVENTINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xA159100)
#define MIHOYO_SDK_EVENTINFO_SET_ACTIONID_OFFSET UNITYSDK_OFFSET(0xA159410)
#define MIHOYO_SDK_EVENTINFO_SET_BTNNAME_OFFSET UNITYSDK_OFFSET(0xA159430)
#define MIHOYO_SDK_EVENTINFO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xA159640)
#define MIHOYO_SDK_EVENTINFO_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0xA1594E0)
#define MIHOYO_SDK_EVENTINFO_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0xA159590)
#define MIHOYO_SDK_EVENTINFO_SET_TIME_OFFSET UNITYSDK_OFFSET(0xA159360)
#define MIHOYO_SDK_EVENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA159B80)
#define MIHOYO_SDK_EVENTINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0xA159BE0)
#define MIHOYO_SDK_EVENTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xA15A800)
#define MIHOYO_SDK_EVENTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA1591F0)
#define MIHOYO_SDK_EVENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA159160)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 43780;

	class EventInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>**)Il2CppClass::FromTypeDefinitionIndex(EventInfo_TypeDefinitionIndex)->GetStaticField(0xC140);
		}
		static ::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>** StaticGet__map_extraInfo_codec()
		{
			return (::MiHoYo::SDK::Protobuf::Collections::MapField_2_Codec<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EventInfo_TypeDefinitionIndex)->GetStaticField(0xC148);
		}
		// static const ::System::Int32 TimeFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 ActionIdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 BtnNameFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 ModuleIdFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 ModuleNameFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 IndexFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 ExtraInfoFieldNumber = 0x7; // 0x0
		::System::String* index_; // 0x10
		::System::String* moduleId_; // 0x18
		::System::String* moduleName_; // 0x20
		::System::String* time_; // 0x28
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x30
		::System::String* btnName_; // 0x38
		::MiHoYo::SDK::ActionType actionId_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::EventInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::EventInfo* Clone()
		{
			return ((::MiHoYo::SDK::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_Time()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_TIME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ActionType get_ActionId()
		{
			return ((::MiHoYo::SDK::ActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_ACTIONID_OFFSET))(this);
		}

		::System::Void set_ActionId(::MiHoYo::SDK::ActionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_ACTIONID_OFFSET))(this, a1);
		}

		::System::String* get_BtnName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_BTNNAME_OFFSET))(this);
		}

		::System::Void set_BtnName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_BTNNAME_OFFSET))(this, a1);
		}

		::System::String* get_ModuleId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_MODULEID_OFFSET))(this, a1);
		}

		::System::String* get_ModuleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_ModuleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_MODULENAME_OFFSET))(this, a1);
		}

		::System::String* get_Index()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_SET_INDEX_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EVENTINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
