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

#define CLASS_1_4AF9832A6EE2A67F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E036320)
#define CLASS_1_4AF9832A6EE2A67F_CLONE_OFFSET UNITYSDK_OFFSET(0x1E035F20)
#define CLASS_1_4AF9832A6EE2A67F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0360E0)
#define CLASS_1_4AF9832A6EE2A67F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E035FC0)
#define CLASS_1_4AF9832A6EE2A67F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0361D0)
#define CLASS_1_4AF9832A6EE2A67F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E036410)
#define CLASS_1_4AF9832A6EE2A67F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0363C0)
#define CLASS_1_4AF9832A6EE2A67F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E035E10)
#define CLASS_1_4AF9832A6EE2A67F_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1E035FB0)
#define CLASS_1_4AF9832A6EE2A67F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E035E70)
#define CLASS_1_4AF9832A6EE2A67F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E036210)
#define CLASS_1_4AF9832A6EE2A67F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E036270)
#define CLASS_1_4AF9832A6EE2A67F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0365D0)
#define CLASS_1_4AF9832A6EE2A67F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E035EB0)
#define CLASS_1_4AF9832A6EE2A67F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E035E80)

inline static constexpr unsigned int Class_1_4AF9832A6EE2A67F_TypeDefinitionIndex = 28751;

class Class_1_4AF9832A6EE2A67F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_TypeDefinitionIndex)->GetStaticField(0x62680);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_KHMCBHCLGOP()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4AF9832A6EE2A67F_TypeDefinitionIndex)->GetStaticField(0x62688);
	}
	// static const ::System::Int32 PGDMMDENEOH = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ECMHNEICIAO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4AF9832A6EE2A67F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4AF9832A6EE2A67F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4AF9832A6EE2A67F* Clone()
	{
		return ((::Class_1_4AF9832A6EE2A67F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4AF9832A6EE2A67F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4AF9832A6EE2A67F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF9832A6EE2A67F*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4AF9832A6EE2A67F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
