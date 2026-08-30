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

#define CLASS_1_075C34D03AFA1215_73_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9CDE10)
#define CLASS_1_075C34D03AFA1215_73_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9CD990)
#define CLASS_1_075C34D03AFA1215_73_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9CDB10)
#define CLASS_1_075C34D03AFA1215_73_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9CD9F0)
#define CLASS_1_075C34D03AFA1215_73_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9CDC00)
#define CLASS_1_075C34D03AFA1215_73_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9CDF00)
#define CLASS_1_075C34D03AFA1215_73_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9CDEB0)
#define CLASS_1_075C34D03AFA1215_73_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1D9CD840)
#define CLASS_1_075C34D03AFA1215_73_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D9CD9E0)
#define CLASS_1_075C34D03AFA1215_73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9CD8A0)
#define CLASS_1_075C34D03AFA1215_73_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9CDD00)
#define CLASS_1_075C34D03AFA1215_73_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9CDD60)
#define CLASS_1_075C34D03AFA1215_73__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9CE0D0)
#define CLASS_1_075C34D03AFA1215_73__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9CD900)
#define CLASS_1_075C34D03AFA1215_73__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CD8B0)

inline static constexpr unsigned int Class_1_075C34D03AFA1215_73_TypeDefinitionIndex = 30434;

class Class_1_075C34D03AFA1215_73 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_73*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_73*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_73_TypeDefinitionIndex)->GetStaticField(0x12730);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NDCOOABFHKG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_075C34D03AFA1215_73_TypeDefinitionIndex)->GetStaticField(0x12738);
	}
	// static const ::System::Int32 LJIGBOOPPLJ = 0x4; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFHGILEDGFL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_075C34D03AFA1215_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_73*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_73*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_075C34D03AFA1215_73*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_075C34D03AFA1215_73* Clone()
	{
		return ((::Class_1_075C34D03AFA1215_73*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_075C34D03AFA1215_73* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_075C34D03AFA1215_73*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_075C34D03AFA1215_73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_73*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_075C34D03AFA1215_73_MERGEFROM_1_OFFSET))(this, a1);
	}
};
