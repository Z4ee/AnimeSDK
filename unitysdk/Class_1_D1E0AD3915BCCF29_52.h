#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D1E0AD3915BCCF29_52_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x195CBCF0)
#define CLASS_1_D1E0AD3915BCCF29_52_CLONE_OFFSET UNITYSDK_OFFSET(0x195CB9A0)
#define CLASS_1_D1E0AD3915BCCF29_52_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x195CBB30)
#define CLASS_1_D1E0AD3915BCCF29_52_EQUALS_OFFSET UNITYSDK_OFFSET(0x195CBA80)
#define CLASS_1_D1E0AD3915BCCF29_52_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x195CBBA0)
#define CLASS_1_D1E0AD3915BCCF29_52_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x195CBEF0)
#define CLASS_1_D1E0AD3915BCCF29_52_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x195CBEA0)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x195CBA60)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x195CBA40)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x195CB8E0)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x195CBA70)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x195CBA50)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x195CBA30)
#define CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x195CBA20)
#define CLASS_1_D1E0AD3915BCCF29_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x195CB940)
#define CLASS_1_D1E0AD3915BCCF29_52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x195CBBD0)
#define CLASS_1_D1E0AD3915BCCF29_52_WRITETO_OFFSET UNITYSDK_OFFSET(0x195CBC30)
#define CLASS_1_D1E0AD3915BCCF29_52__CCTOR_OFFSET UNITYSDK_OFFSET(0x195CBFA0)
#define CLASS_1_D1E0AD3915BCCF29_52__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195CB960)
#define CLASS_1_D1E0AD3915BCCF29_52__CTOR_OFFSET UNITYSDK_OFFSET(0x195CB950)

inline static constexpr unsigned int Class_1_D1E0AD3915BCCF29_52_TypeDefinitionIndex = 28117;

class Class_1_D1E0AD3915BCCF29_52 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_52*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_52*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1E0AD3915BCCF29_52_TypeDefinitionIndex)->GetStaticField(0x545D0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::UInt32 Field_1_7; // 0x18
	::System::UInt32 Field_1_5; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D1E0AD3915BCCF29_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_52*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_52*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D1E0AD3915BCCF29_52*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D1E0AD3915BCCF29_52* Clone()
	{
		return ((::Class_1_D1E0AD3915BCCF29_52*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_CLONE_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D1E0AD3915BCCF29_52* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_52*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D1E0AD3915BCCF29_52* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_52*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D1E0AD3915BCCF29_52_MERGEFROM_1_OFFSET))(this, a1);
	}
};
