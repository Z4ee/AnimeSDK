#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_8473D83AC5F6E9C0_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17C04BF0)
#define CLASS_1_8473D83AC5F6E9C0_1_CLONE_OFFSET UNITYSDK_OFFSET(0x17C04810)
#define CLASS_1_8473D83AC5F6E9C0_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17C049A0)
#define CLASS_1_8473D83AC5F6E9C0_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x17C04910)
#define CLASS_1_8473D83AC5F6E9C0_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17C04A30)
#define CLASS_1_8473D83AC5F6E9C0_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17C04F10)
#define CLASS_1_8473D83AC5F6E9C0_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17C04EB0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17C048B0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17C04870)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_3163C288F3AE2966_1_OFFSET UNITYSDK_OFFSET(0x17C04900)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_3163C288F3AE2966_OFFSET UNITYSDK_OFFSET(0x17C048A0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17C048C0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17C04880)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17C048E0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_CE81D059476B1F49_1_OFFSET UNITYSDK_OFFSET(0x17C048F0)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x17C04890)
#define CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17C048D0)
#define CLASS_1_8473D83AC5F6E9C0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17C047B0)
#define CLASS_1_8473D83AC5F6E9C0_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17C04A90)
#define CLASS_1_8473D83AC5F6E9C0_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C04AF0)
#define CLASS_1_8473D83AC5F6E9C0_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17C047D0)
#define CLASS_1_8473D83AC5F6E9C0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C047C0)

inline static constexpr unsigned int Class_1_8473D83AC5F6E9C0_1_TypeDefinitionIndex = 24390;

class Class_1_8473D83AC5F6E9C0_1 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_1 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::System::UInt64 Field_1_4; // 0x18
	::System::UInt64 Field_1_10; // 0x20
	::System::Boolean Field_1_8; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_8473D83AC5F6E9C0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8473D83AC5F6E9C0_1*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1__CTOR_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_8473D83AC5F6E9C0_1* Clone()
	{
		return ((::Class_1_8473D83AC5F6E9C0_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_3163C288F3AE2966_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49_1()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_CE81D059476B1F49_1_OFFSET))(this);
	}

	::System::Void Method_1_3163C288F3AE2966_1(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_METHOD_1_3163C288F3AE2966_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_8473D83AC5F6E9C0_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8473D83AC5F6E9C0_1*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_8473D83AC5F6E9C0_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8473D83AC5F6E9C0_1*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_8473D83AC5F6E9C0_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
