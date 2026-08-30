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

#define CLASS_1_075C34D03AFA1215_77_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4FD650)
#define CLASS_1_075C34D03AFA1215_77_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4FD250)
#define CLASS_1_075C34D03AFA1215_77_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4FD380)
#define CLASS_1_075C34D03AFA1215_77_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4FD290)
#define CLASS_1_075C34D03AFA1215_77_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4FD470)
#define CLASS_1_075C34D03AFA1215_77_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4FD710)
#define CLASS_1_075C34D03AFA1215_77_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4FD6C0)
#define CLASS_1_075C34D03AFA1215_77_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E4FD280)
#define CLASS_1_075C34D03AFA1215_77_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4FD130)
#define CLASS_1_075C34D03AFA1215_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4FD160)
#define CLASS_1_075C34D03AFA1215_77_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4FD570)
#define CLASS_1_075C34D03AFA1215_77_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4FD5D0)
#define CLASS_1_075C34D03AFA1215_77__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FD8B0)
#define CLASS_1_075C34D03AFA1215_77__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4FD1C0)
#define CLASS_1_075C34D03AFA1215_77__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FD170)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_77_TypeDefinitionIndex = 30850;

class Class_1_075C34D03AFA1215_77 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CMBILFBLHHA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_77_TypeDefinitionIndex)->GetStaticField(0x5CA20);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_77_TypeDefinitionIndex)->GetStaticField(0x5CA28);
	}
	// static const ::System::Int32 HLBJDPHKNOB = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAJOJEOLBHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_77*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_77* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_77*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_77*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_77_MERGEFROM_1_OFFSET))(this, a1);
	}
};
