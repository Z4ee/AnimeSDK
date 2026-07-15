#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_3DD471F282DD1D78_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C42A410)
#define CLASS_1_3DD471F282DD1D78_CLONE_OFFSET UNITYSDK_OFFSET(0x1C42A080)
#define CLASS_1_3DD471F282DD1D78_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C42A200)
#define CLASS_1_3DD471F282DD1D78_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C42A110)
#define CLASS_1_3DD471F282DD1D78_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C42A2F0)
#define CLASS_1_3DD471F282DD1D78_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C42A4D0)
#define CLASS_1_3DD471F282DD1D78_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C42A480)
#define CLASS_1_3DD471F282DD1D78_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1C429FA0)
#define CLASS_1_3DD471F282DD1D78_METHOD_1_AA415D46E3167651_OFFSET UNITYSDK_OFFSET(0x1C42A100)
#define CLASS_1_3DD471F282DD1D78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C429FD0)
#define CLASS_1_3DD471F282DD1D78_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C42A330)
#define CLASS_1_3DD471F282DD1D78_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C42A390)
#define CLASS_1_3DD471F282DD1D78__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C42A660)
#define CLASS_1_3DD471F282DD1D78__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C42A010)
#define CLASS_1_3DD471F282DD1D78__CTOR_OFFSET UNITYSDK_OFFSET(0x1C429FE0)

inline static constexpr unsigned int Class_1_3DD471F282DD1D78_TypeDefinitionIndex = 31641;

class Class_1_3DD471F282DD1D78 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_3DD471F282DD1D78*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_3DD471F282DD1D78*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DD471F282DD1D78_TypeDefinitionIndex)->GetStaticField(0x25F20);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3DD471F282DD1D78_TypeDefinitionIndex)->GetStaticField(0x25F28);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3DD471F282DD1D78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DD471F282DD1D78*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_3DD471F282DD1D78*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_3DD471F282DD1D78*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_3DD471F282DD1D78* Clone()
	{
		return ((::Class_1_3DD471F282DD1D78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* Method_1_AA415D46E3167651()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_METHOD_1_AA415D46E3167651_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_3DD471F282DD1D78* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_3DD471F282DD1D78*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_3DD471F282DD1D78* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DD471F282DD1D78*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_3DD471F282DD1D78_MERGEFROM_1_OFFSET))(this, a1);
	}
};
