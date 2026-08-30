#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FDFA365FE186E8F2_11;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7FF19F6206AF6DD7_25_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EDB4C90)
#define CLASS_1_7FF19F6206AF6DD7_25_CLONE_OFFSET UNITYSDK_OFFSET(0x1EDB47D0)
#define CLASS_1_7FF19F6206AF6DD7_25_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EDB4980)
#define CLASS_1_7FF19F6206AF6DD7_25_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EDB4830)
#define CLASS_1_7FF19F6206AF6DD7_25_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EDB4AB0)
#define CLASS_1_7FF19F6206AF6DD7_25_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EDB4E40)
#define CLASS_1_7FF19F6206AF6DD7_25_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EDB4DA0)
#define CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1EDB4800)
#define CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1EDB4680)
#define CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x1EDB4820)
#define CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1EDB4810)
#define CLASS_1_7FF19F6206AF6DD7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EDB46B0)
#define CLASS_1_7FF19F6206AF6DD7_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EDB4B20)
#define CLASS_1_7FF19F6206AF6DD7_25_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EDB4B80)
#define CLASS_1_7FF19F6206AF6DD7_25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EDB5010)
#define CLASS_1_7FF19F6206AF6DD7_25__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDB4710)
#define CLASS_1_7FF19F6206AF6DD7_25__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDB46C0)

inline static constexpr unsigned int Class_1_7FF19F6206AF6DD7_25_TypeDefinitionIndex = 27401;

class Class_1_7FF19F6206AF6DD7_25 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_11*>** StaticGet_AAHKGCJBAEA()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_FDFA365FE186E8F2_11*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_25_TypeDefinitionIndex)->GetStaticField(0x51360);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_25*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_25*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FF19F6206AF6DD7_25_TypeDefinitionIndex)->GetStaticField(0x51368);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xB; // 0x0
	// static const ::System::Int32 ENDNCBMFFMI = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_11*>* DBEKKECJOJD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7FF19F6206AF6DD7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_25*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7FF19F6206AF6DD7_25*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7FF19F6206AF6DD7_25* Clone()
	{
		return ((::Class_1_7FF19F6206AF6DD7_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_11*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FDFA365FE186E8F2_11*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7FF19F6206AF6DD7_25* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7FF19F6206AF6DD7_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_25*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7FF19F6206AF6DD7_25_MERGEFROM_1_OFFSET))(this, a1);
	}
};
