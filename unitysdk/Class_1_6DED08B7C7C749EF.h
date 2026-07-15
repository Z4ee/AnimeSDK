#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6DED08B7C7C749EF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1CF54950)
#define CLASS_1_6DED08B7C7C749EF_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF54320)
#define CLASS_1_6DED08B7C7C749EF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CF54530)
#define CLASS_1_6DED08B7C7C749EF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CF543E0)
#define CLASS_1_6DED08B7C7C749EF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CF54650)
#define CLASS_1_6DED08B7C7C749EF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1CF54AA0)
#define CLASS_1_6DED08B7C7C749EF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1CF54A40)
#define CLASS_1_6DED08B7C7C749EF_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1CF54390)
#define CLASS_1_6DED08B7C7C749EF_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1CF54380)
#define CLASS_1_6DED08B7C7C749EF_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1CF541B0)
#define CLASS_1_6DED08B7C7C749EF_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1CF54370)
#define CLASS_1_6DED08B7C7C749EF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CF54210)
#define CLASS_1_6DED08B7C7C749EF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF547D0)
#define CLASS_1_6DED08B7C7C749EF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1CF54830)
#define CLASS_1_6DED08B7C7C749EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF54CA0)
#define CLASS_1_6DED08B7C7C749EF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CF54280)
#define CLASS_1_6DED08B7C7C749EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF54220)

inline static constexpr unsigned int Class_1_6DED08B7C7C749EF_TypeDefinitionIndex = 24322;

class Class_1_6DED08B7C7C749EF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_TypeDefinitionIndex)->GetStaticField(0x31A40);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DED08B7C7C749EF_TypeDefinitionIndex)->GetStaticField(0x31A48);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::Google::Protobuf::UnknownFieldSet* Field_1_6; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6DED08B7C7C749EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6DED08B7C7C749EF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6DED08B7C7C749EF* Clone()
	{
		return ((::Class_1_6DED08B7C7C749EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6DED08B7C7C749EF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6DED08B7C7C749EF*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6DED08B7C7C749EF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6DED08B7C7C749EF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
