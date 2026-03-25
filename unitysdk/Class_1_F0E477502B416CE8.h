#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F0E477502B416CE8_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1803B6F0)
#define CLASS_1_F0E477502B416CE8_CLONE_OFFSET UNITYSDK_OFFSET(0x1803B280)
#define CLASS_1_F0E477502B416CE8_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1803B440)
#define CLASS_1_F0E477502B416CE8_EQUALS_OFFSET UNITYSDK_OFFSET(0x1803B360)
#define CLASS_1_F0E477502B416CE8_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1803B4F0)
#define CLASS_1_F0E477502B416CE8_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1803B9E0)
#define CLASS_1_F0E477502B416CE8_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1803B970)
#define CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1803B2F0)
#define CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1803B320)
#define CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_3_OFFSET UNITYSDK_OFFSET(0x1803B340)
#define CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1803B2D0)
#define CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1803B300)
#define CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1803B330)
#define CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_3_OFFSET UNITYSDK_OFFSET(0x1803B350)
#define CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1803B2E0)
#define CLASS_1_F0E477502B416CE8_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1803B310)
#define CLASS_1_F0E477502B416CE8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1803B1C0)
#define CLASS_1_F0E477502B416CE8_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1803B540)
#define CLASS_1_F0E477502B416CE8_WRITETO_OFFSET UNITYSDK_OFFSET(0x1803B5A0)
#define CLASS_1_F0E477502B416CE8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1803BAF0)
#define CLASS_1_F0E477502B416CE8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1803B200)
#define CLASS_1_F0E477502B416CE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1803B1D0)

inline static constexpr unsigned int Class_1_F0E477502B416CE8_TypeDefinitionIndex = 26282;

class Class_1_F0E477502B416CE8 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_6()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F0E477502B416CE8_TypeDefinitionIndex)->GetStaticField(0x30090);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xA; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_4; // 0x24
	::System::UInt32 Field_1_11; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F0E477502B416CE8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E477502B416CE8*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F0E477502B416CE8* Clone()
	{
		return ((::Class_1_F0E477502B416CE8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_02A3D10A9D535169_3_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_METHOD_1_7786DC814C2FC3BE_3_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F0E477502B416CE8* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F0E477502B416CE8*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F0E477502B416CE8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E477502B416CE8*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F0E477502B416CE8_MERGEFROM_1_OFFSET))(this, a1);
	}
};
