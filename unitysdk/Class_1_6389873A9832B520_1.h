#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6389873A9832B520_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C0F580)
#define CLASS_1_6389873A9832B520_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C0F180)
#define CLASS_1_6389873A9832B520_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C0F260)
#define CLASS_1_6389873A9832B520_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C0F230)
#define CLASS_1_6389873A9832B520_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C0F3D0)
#define CLASS_1_6389873A9832B520_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C0F7F0)
#define CLASS_1_6389873A9832B520_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C0F670)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET UNITYSDK_OFFSET(0x17C0F1E0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_2_OFFSET UNITYSDK_OFFSET(0x17C0F200)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_3_OFFSET UNITYSDK_OFFSET(0x17C0F220)
#define CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x17C0F1C0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET UNITYSDK_OFFSET(0x17C0F1D0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET UNITYSDK_OFFSET(0x17C0F1F0)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET UNITYSDK_OFFSET(0x17C0F210)
#define CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x17C0F1B0)
#define CLASS_1_6389873A9832B520_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C0F050)
#define CLASS_1_6389873A9832B520_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C0F450)
#define CLASS_1_6389873A9832B520_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C0F4B0)
#define CLASS_1_6389873A9832B520_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C0F070)
#define CLASS_1_6389873A9832B520_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0F060)

inline static constexpr unsigned int Class_1_6389873A9832B520_1_TypeDefinitionIndex = 27094;

class Class_1_6389873A9832B520_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0x9; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_5 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x7; // 0x0
	::Proto::ItemList* Field_1_4; // 0x10
	::Proto::ItemList* Field_1_8; // 0x18
	::Proto::ItemList* Field_1_6; // 0x20
	::Proto::ItemList* Field_1_2; // 0x28
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6389873A9832B520_1* Clone()
	{
		return ((::Class_1_6389873A9832B520_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_CLONE_OFFSET))(this);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_1()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_1_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_1(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_1_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_2()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_2_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_2(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_2_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3_3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_6BD2A2909D8CFAD3_3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58_3(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_METHOD_1_686CBC4FBD0AAA58_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6389873A9832B520_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6389873A9832B520_1*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6389873A9832B520_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
