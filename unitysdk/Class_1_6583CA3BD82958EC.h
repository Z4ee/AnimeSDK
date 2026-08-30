#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class String; }

#define CLASS_1_6583CA3BD82958EC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5016B0)
#define CLASS_1_6583CA3BD82958EC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E501080)
#define CLASS_1_6583CA3BD82958EC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5012C0)
#define CLASS_1_6583CA3BD82958EC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E501190)
#define CLASS_1_6583CA3BD82958EC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E501440)
#define CLASS_1_6583CA3BD82958EC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E501830)
#define CLASS_1_6583CA3BD82958EC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E501790)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E501130)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E500F90)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_686CBC4FBD0AAA58_OFFSET UNITYSDK_OFFSET(0x1E501160)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_6BD2A2909D8CFAD3_OFFSET UNITYSDK_OFFSET(0x1E501150)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E501140)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E501180)
#define CLASS_1_6583CA3BD82958EC_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E501170)
#define CLASS_1_6583CA3BD82958EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E500FF0)
#define CLASS_1_6583CA3BD82958EC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5014E0)
#define CLASS_1_6583CA3BD82958EC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E501540)
#define CLASS_1_6583CA3BD82958EC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E501A10)
#define CLASS_1_6583CA3BD82958EC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E501010)
#define CLASS_1_6583CA3BD82958EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E501000)

inline static constexpr unsigned int Class_1_6583CA3BD82958EC_TypeDefinitionIndex = 26161;

class Class_1_6583CA3BD82958EC : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_6583CA3BD82958EC*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_6583CA3BD82958EC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6583CA3BD82958EC_TypeDefinitionIndex)->GetStaticField(0x21820);
	}
	// static const ::System::Int32 OOGFOPMFOHP = 0xF; // 0x0
	// static const ::System::Int32 DPPAFBAHEFH = 0xC; // 0x0
	// static const ::System::Int32 OMCPIPGCDIP = 0x4; // 0x0
	::Proto::ItemList* DALKEINMPBH; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 GKOHBFHOFKN; // 0x20
	::System::Boolean HONCCGDMBBL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6583CA3BD82958EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6583CA3BD82958EC*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_6583CA3BD82958EC*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_6583CA3BD82958EC*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6583CA3BD82958EC* Clone()
	{
		return ((::Class_1_6583CA3BD82958EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Proto::ItemList* Method_1_6BD2A2909D8CFAD3()
	{
		return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_6BD2A2909D8CFAD3_OFFSET))(this);
	}

	::System::Void Method_1_686CBC4FBD0AAA58(::Proto::ItemList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_686CBC4FBD0AAA58_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6583CA3BD82958EC* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6583CA3BD82958EC*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6583CA3BD82958EC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6583CA3BD82958EC*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6583CA3BD82958EC_MERGEFROM_1_OFFSET))(this, a1);
	}
};
