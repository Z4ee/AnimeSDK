#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Item; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_9818E83AC45FF17F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19B5AE60)
#define CLASS_1_9818E83AC45FF17F_CLONE_OFFSET UNITYSDK_OFFSET(0x19B5A940)
#define CLASS_1_9818E83AC45FF17F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19B5AB80)
#define CLASS_1_9818E83AC45FF17F_EQUALS_OFFSET UNITYSDK_OFFSET(0x19B5AA10)
#define CLASS_1_9818E83AC45FF17F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19B5ACB0)
#define CLASS_1_9818E83AC45FF17F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19B5B0A0)
#define CLASS_1_9818E83AC45FF17F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19B5AF20)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_05C52192594385BB_OFFSET UNITYSDK_OFFSET(0x19B5A9F0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_246E6D0E25F98E80_OFFSET UNITYSDK_OFFSET(0x19B5AA00)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19B5A7D0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x19B5A9E0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x19B5A9C0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x19B5A9D0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x19B5A9B0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19B5A9A0)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19B5A990)
#define CLASS_1_9818E83AC45FF17F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19B5A830)
#define CLASS_1_9818E83AC45FF17F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19B5AD30)
#define CLASS_1_9818E83AC45FF17F_WRITETO_OFFSET UNITYSDK_OFFSET(0x19B5AD90)
#define CLASS_1_9818E83AC45FF17F__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B5B1F0)
#define CLASS_1_9818E83AC45FF17F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19B5A850)
#define CLASS_1_9818E83AC45FF17F__CTOR_OFFSET UNITYSDK_OFFSET(0x19B5A840)

inline static constexpr unsigned int Class_1_9818E83AC45FF17F_TypeDefinitionIndex = 27376;

class Class_1_9818E83AC45FF17F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9818E83AC45FF17F_TypeDefinitionIndex)->GetStaticField(0x1F70);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	::Proto::ItemList* Field_1_5; // 0x10
	::Proto::ItemList* Field_1_7; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x20
	::Proto::Item* Field_1_9; // 0x28
	::System::Boolean Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_9818E83AC45FF17F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9818E83AC45FF17F*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_9818E83AC45FF17F* Clone()
	{
		return ((::Class_1_9818E83AC45FF17F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Proto::Item* Method_1_05C52192594385BB()
	{
		return ((::Proto::Item*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_05C52192594385BB_OFFSET))(this);
	}

	::System::Void Method_1_246E6D0E25F98E80(::Proto::Item* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::Item*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_METHOD_1_246E6D0E25F98E80_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_9818E83AC45FF17F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9818E83AC45FF17F*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_9818E83AC45FF17F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9818E83AC45FF17F*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_9818E83AC45FF17F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
