#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_31B87651CEDF5B41;
class Class_1_8844A4E6AE686D5C_5;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_EB813CC1D00A138D_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6E0960)
#define CLASS_1_EB813CC1D00A138D_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6E02D0)
#define CLASS_1_EB813CC1D00A138D_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6E0580)
#define CLASS_1_EB813CC1D00A138D_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6E0350)
#define CLASS_1_EB813CC1D00A138D_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6E0750)
#define CLASS_1_EB813CC1D00A138D_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6E0B40)
#define CLASS_1_EB813CC1D00A138D_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6E0A50)
#define CLASS_1_EB813CC1D00A138D_2_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1E6E0320)
#define CLASS_1_EB813CC1D00A138D_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E6E00F0)
#define CLASS_1_EB813CC1D00A138D_2_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1E6E0340)
#define CLASS_1_EB813CC1D00A138D_2_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1E6E0330)
#define CLASS_1_EB813CC1D00A138D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0150)
#define CLASS_1_EB813CC1D00A138D_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6E07E0)
#define CLASS_1_EB813CC1D00A138D_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6E0840)
#define CLASS_1_EB813CC1D00A138D_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0D30)
#define CLASS_1_EB813CC1D00A138D_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6E01B0)
#define CLASS_1_EB813CC1D00A138D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6E0160)

inline static constexpr unsigned int Class_1_EB813CC1D00A138D_2_TypeDefinitionIndex = 28704;

class Class_1_EB813CC1D00A138D_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_31B87651CEDF5B41*>** StaticGet_MNOFLMANHGE()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_31B87651CEDF5B41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_2_TypeDefinitionIndex)->GetStaticField(0x10110);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EB813CC1D00A138D_2_TypeDefinitionIndex)->GetStaticField(0x10118);
	}
	// static const ::System::Int32 GOGDMMLLHHB = 0x5; // 0x0
	// static const ::System::Int32 PLPFFMKHFHI = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_31B87651CEDF5B41*>* DLMPOFHPNKH; // 0x18
	::Class_1_8844A4E6AE686D5C_5* JAKEAPOAJPI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_EB813CC1D00A138D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_2*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_EB813CC1D00A138D_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_EB813CC1D00A138D_2* Clone()
	{
		return ((::Class_1_EB813CC1D00A138D_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_CLONE_OFFSET))(this);
	}

	::Class_1_8844A4E6AE686D5C_5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_8844A4E6AE686D5C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_8844A4E6AE686D5C_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_5*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_31B87651CEDF5B41*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_31B87651CEDF5B41*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_EB813CC1D00A138D_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EB813CC1D00A138D_2*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_EB813CC1D00A138D_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB813CC1D00A138D_2*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_EB813CC1D00A138D_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
