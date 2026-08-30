#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_22;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F426C21C7E713E8A_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E293F50)
#define CLASS_1_F426C21C7E713E8A_CLONE_OFFSET UNITYSDK_OFFSET(0x1E293970)
#define CLASS_1_F426C21C7E713E8A_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E293C20)
#define CLASS_1_F426C21C7E713E8A_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E293A60)
#define CLASS_1_F426C21C7E713E8A_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E293DA0)
#define CLASS_1_F426C21C7E713E8A_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E294070)
#define CLASS_1_F426C21C7E713E8A_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E293FB0)
#define CLASS_1_F426C21C7E713E8A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E293A20)
#define CLASS_1_F426C21C7E713E8A_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E293870)
#define CLASS_1_F426C21C7E713E8A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E293A30)
#define CLASS_1_F426C21C7E713E8A_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E293A50)
#define CLASS_1_F426C21C7E713E8A_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E293A40)
#define CLASS_1_F426C21C7E713E8A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2938D0)
#define CLASS_1_F426C21C7E713E8A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E293DE0)
#define CLASS_1_F426C21C7E713E8A_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E293E40)
#define CLASS_1_F426C21C7E713E8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E294250)
#define CLASS_1_F426C21C7E713E8A__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2938F0)
#define CLASS_1_F426C21C7E713E8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2938E0)

inline static constexpr unsigned int Class_1_F426C21C7E713E8A_TypeDefinitionIndex = 28374;

class Class_1_F426C21C7E713E8A : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F426C21C7E713E8A*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F426C21C7E713E8A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F426C21C7E713E8A_TypeDefinitionIndex)->GetStaticField(0x39780);
	}
	// static const ::System::Int32 DLFLLLJJOKD = 0x2; // 0x0
	// static const ::System::Int32 FAODBPBHHDG = 0x1; // 0x0
	::Class_1_21DCD4640D389503_22* LLNBEBKIOLH; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean NAAKHDIOOOD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F426C21C7E713E8A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F426C21C7E713E8A*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F426C21C7E713E8A*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F426C21C7E713E8A*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F426C21C7E713E8A* Clone()
	{
		return ((::Class_1_F426C21C7E713E8A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_CLONE_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_22* Method_1_24748FC20F375725()
	{
		return ((::Class_1_21DCD4640D389503_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_21DCD4640D389503_22* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_22*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F426C21C7E713E8A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F426C21C7E713E8A*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F426C21C7E713E8A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F426C21C7E713E8A*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F426C21C7E713E8A_MERGEFROM_1_OFFSET))(this, a1);
	}
};
