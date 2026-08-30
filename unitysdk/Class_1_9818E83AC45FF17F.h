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

#define CLASS_1_9818E83AC45FF17F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1ED3DFC0)
#define CLASS_1_9818E83AC45FF17F_CLONE_OFFSET UNITYSDK_OFFSET(0x1ED3D6C0)
#define CLASS_1_9818E83AC45FF17F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1ED3D980)
#define CLASS_1_9818E83AC45FF17F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED3D790)
#define CLASS_1_9818E83AC45FF17F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED3DC50)
#define CLASS_1_9818E83AC45FF17F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED3E200)
#define CLASS_1_9818E83AC45FF17F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1ED3E080)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_05C52192594385BB_OFFSET UNITYSDK_OFFSET(0x1ED3D770)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_246E6D0E25F98E80_OFFSET UNITYSDK_OFFSET(0x1ED3D780)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1ED3D550)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x1ED3D760)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1ED3D740)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x1ED3D750)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1ED3D730)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1ED3D720)
#define CLASS_1_9818E83AC45FF17F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1ED3D710)
#define CLASS_1_9818E83AC45FF17F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1ED3D5B0)
#define CLASS_1_9818E83AC45FF17F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1ED3DD90)
#define CLASS_1_9818E83AC45FF17F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1ED3DDF0)
#define CLASS_1_9818E83AC45FF17F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED3E350)
#define CLASS_1_9818E83AC45FF17F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED3D5D0)
#define CLASS_1_9818E83AC45FF17F__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED3D5C0)

inline static constexpr unsigned int Class_1_9818E83AC45FF17F_TypeDefinitionIndex = 28566;

class Class_1_9818E83AC45FF17F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_9818E83AC45FF17F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9818E83AC45FF17F_TypeDefinitionIndex)->GetStaticField(0x410F0);
	}
	// static const ::System::Int32 OOLLDLHKDOH = 0xD; // 0x0
	// static const ::System::Int32 KOKPPJDDOAH = 0x6; // 0x0
	// static const ::System::Int32 OFMLLNDPBAM = 0x1; // 0x0
	// static const ::System::Int32 PFJLHDMLHIE = 0x7; // 0x0
	::Proto::ItemList* DDCFGAMIIHN; // 0x10
	::Proto::Item* KFPOEJMNAHG; // 0x18
	::Proto::ItemList* HOPONLNEGOA; // 0x20
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
	::System::Boolean DHMADBLCKKD; // 0x30

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
