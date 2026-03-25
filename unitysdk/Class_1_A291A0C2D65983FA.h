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

#define CLASS_1_A291A0C2D65983FA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17CF9D90)
#define CLASS_1_A291A0C2D65983FA_CLONE_OFFSET UNITYSDK_OFFSET(0x17CF9960)
#define CLASS_1_A291A0C2D65983FA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CF9B00)
#define CLASS_1_A291A0C2D65983FA_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CF9A20)
#define CLASS_1_A291A0C2D65983FA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CF9BB0)
#define CLASS_1_A291A0C2D65983FA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17CF9F90)
#define CLASS_1_A291A0C2D65983FA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17CF9F20)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17CF99D0)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17CF99B0)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17CF99E0)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17CF99C0)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x17CF9A00)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17CF9A10)
#define CLASS_1_A291A0C2D65983FA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17CF99F0)
#define CLASS_1_A291A0C2D65983FA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17CF98A0)
#define CLASS_1_A291A0C2D65983FA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CF9C00)
#define CLASS_1_A291A0C2D65983FA_WRITETO_OFFSET UNITYSDK_OFFSET(0x17CF9C60)
#define CLASS_1_A291A0C2D65983FA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CFA0A0)
#define CLASS_1_A291A0C2D65983FA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17CF98E0)
#define CLASS_1_A291A0C2D65983FA__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF98B0)

inline static constexpr unsigned int Class_1_A291A0C2D65983FA_TypeDefinitionIndex = 24738;

class Class_1_A291A0C2D65983FA : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_8()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A291A0C2D65983FA_TypeDefinitionIndex)->GetStaticField(0xFE90);
	}
	// static const ::System::Int32 Field_1_1 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_3 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_9; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::System::UInt32 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A291A0C2D65983FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A291A0C2D65983FA* Clone()
	{
		return ((::Class_1_A291A0C2D65983FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A291A0C2D65983FA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A291A0C2D65983FA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A291A0C2D65983FA*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A291A0C2D65983FA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
