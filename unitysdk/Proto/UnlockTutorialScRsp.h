#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Tutorial; }
namespace System { class String; }

#define PROTO_UNLOCKTUTORIALSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFA47B0)
#define PROTO_UNLOCKTUTORIALSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EFA4240)
#define PROTO_UNLOCKTUTORIALSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EFA4490)
#define PROTO_UNLOCKTUTORIALSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EFA4310)
#define PROTO_UNLOCKTUTORIALSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFA4610)
#define PROTO_UNLOCKTUTORIALSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1EFA4170)
#define PROTO_UNLOCKTUTORIALSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1EFA42F0)
#define PROTO_UNLOCKTUTORIALSCRSP_GET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x1EFA42D0)
#define PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFA4920)
#define PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFA4880)
#define PROTO_UNLOCKTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EFA41A0)
#define PROTO_UNLOCKTUTORIALSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1EFA4300)
#define PROTO_UNLOCKTUTORIALSCRSP_SET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x1EFA42E0)
#define PROTO_UNLOCKTUTORIALSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFA4670)
#define PROTO_UNLOCKTUTORIALSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFA46D0)
#define PROTO_UNLOCKTUTORIALSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA4AB0)
#define PROTO_UNLOCKTUTORIALSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EFA41C0)
#define PROTO_UNLOCKTUTORIALSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA41B0)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialScRsp_TypeDefinitionIndex = 34386;

	class UnlockTutorialScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialScRsp_TypeDefinitionIndex)->GetStaticField(0x9E0);
		}
		// static const ::System::Int32 TutorialFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x5; // 0x0
		::Proto::Tutorial* tutorial_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialScRsp* Clone()
		{
			return ((::Proto::UnlockTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_CLONE_OFFSET))(this);
		}

		::Proto::Tutorial* get_Tutorial()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GET_TUTORIAL_OFFSET))(this);
		}

		::System::Void set_Tutorial(::Proto::Tutorial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_SET_TUTORIAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::UnlockTutorialScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UnlockTutorialScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
