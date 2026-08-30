#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_19_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E603C10)
#define CLASS_1_12EBBCDF245A0FB0_19_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6037F0)
#define CLASS_1_12EBBCDF245A0FB0_19_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E603940)
#define CLASS_1_12EBBCDF245A0FB0_19_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E603860)
#define CLASS_1_12EBBCDF245A0FB0_19_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E603AC0)
#define CLASS_1_12EBBCDF245A0FB0_19_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E603C70)
#define CLASS_1_12EBBCDF245A0FB0_19_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E603C40)
#define CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E603770)
#define CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E603850)
#define CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E603840)
#define CLASS_1_12EBBCDF245A0FB0_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6037A0)
#define CLASS_1_12EBBCDF245A0FB0_19_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E603AF0)
#define CLASS_1_12EBBCDF245A0FB0_19_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E603B50)
#define CLASS_1_12EBBCDF245A0FB0_19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E603DD0)
#define CLASS_1_12EBBCDF245A0FB0_19__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6037C0)
#define CLASS_1_12EBBCDF245A0FB0_19__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6037B0)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_19_TypeDefinitionIndex = 31194;

class Class_1_12EBBCDF245A0FB0_19 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_19*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_19_TypeDefinitionIndex)->GetStaticField(0x30940);
	}
	// static const ::System::Int32 GFOAADDNLKF = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean KJFDGOJFJLK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_19*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_19*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0_19*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0_19* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0_19* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_19*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0_19*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_19_MERGEFROM_1_OFFSET))(this, a1);
	}
};
