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

#define CLASS_1_075C34D03AFA1215_18_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13DF50)
#define CLASS_1_075C34D03AFA1215_18_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13DAD0)
#define CLASS_1_075C34D03AFA1215_18_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13DC50)
#define CLASS_1_075C34D03AFA1215_18_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13DB30)
#define CLASS_1_075C34D03AFA1215_18_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13DD40)
#define CLASS_1_075C34D03AFA1215_18_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13E040)
#define CLASS_1_075C34D03AFA1215_18_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13DFF0)
#define CLASS_1_075C34D03AFA1215_18_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E13D980)
#define CLASS_1_075C34D03AFA1215_18_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E13DB20)
#define CLASS_1_075C34D03AFA1215_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13D9E0)
#define CLASS_1_075C34D03AFA1215_18_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13DE40)
#define CLASS_1_075C34D03AFA1215_18_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13DEA0)
#define CLASS_1_075C34D03AFA1215_18__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13E210)
#define CLASS_1_075C34D03AFA1215_18__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13DA40)
#define CLASS_1_075C34D03AFA1215_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1E13D9F0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_18_TypeDefinitionIndex = 26688;

class Class_1_075C34D03AFA1215_18 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOBBGPGCHAL()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_18_TypeDefinitionIndex)->GetStaticField(0x425B0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_18*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_18*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_18_TypeDefinitionIndex)->GetStaticField(0x425B8);
	}
	// static const ::System::Int32 IMODNGCBMKL = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKCEEIGOLPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_18*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_18*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_18*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_18* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_18*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_18* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_18*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_18*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_18_MERGEFROM_1_OFFSET))(this, a1);
	}
};
