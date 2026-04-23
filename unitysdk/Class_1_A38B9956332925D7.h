#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A.h"
#include "unitysdk/System/Object.h"

class Class_1_D9306091D159D56B;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_A38B9956332925D7_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19438A40)
#define CLASS_1_A38B9956332925D7_CLONE_OFFSET UNITYSDK_OFFSET(0x194385C0)
#define CLASS_1_A38B9956332925D7_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19438760)
#define CLASS_1_A38B9956332925D7_EQUALS_OFFSET UNITYSDK_OFFSET(0x19438640)
#define CLASS_1_A38B9956332925D7_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19438810)
#define CLASS_1_A38B9956332925D7_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19438C30)
#define CLASS_1_A38B9956332925D7_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19438B90)
#define CLASS_1_A38B9956332925D7_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x19438440)
#define CLASS_1_A38B9956332925D7_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19438620)
#define CLASS_1_A38B9956332925D7_METHOD_1_6E1EC2DF63D7020F_OFFSET UNITYSDK_OFFSET(0x19438630)
#define CLASS_1_A38B9956332925D7_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19438610)
#define CLASS_1_A38B9956332925D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x194384A0)
#define CLASS_1_A38B9956332925D7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19438900)
#define CLASS_1_A38B9956332925D7_WRITETO_OFFSET UNITYSDK_OFFSET(0x19438960)
#define CLASS_1_A38B9956332925D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x19438D10)
#define CLASS_1_A38B9956332925D7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19438500)
#define CLASS_1_A38B9956332925D7__CTOR_OFFSET UNITYSDK_OFFSET(0x194384B0)

inline static constexpr unsigned int Class_1_A38B9956332925D7_TypeDefinitionIndex = 24432;

class Class_1_A38B9956332925D7 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A38B9956332925D7_TypeDefinitionIndex)->GetStaticField(0x47240);
	}
	static ::Google::Protobuf::FieldCodec_1<::Class_1_D9306091D159D56B*>** StaticGet_Field_1_5()
	{
		return (::Google::Protobuf::FieldCodec_1<::Class_1_D9306091D159D56B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A38B9956332925D7_TypeDefinitionIndex)->GetStaticField(0x47248);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D9306091D159D56B*>* Field_1_6; // 0x18
	::Enum_3_4608E37A1B3D374A Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A38B9956332925D7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A38B9956332925D7* Clone()
	{
		return ((::Class_1_A38B9956332925D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_CLONE_OFFSET))(this);
	}

	::Enum_3_4608E37A1B3D374A Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D9306091D159D56B*>* Method_1_6E1EC2DF63D7020F()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D9306091D159D56B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_METHOD_1_6E1EC2DF63D7020F_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A38B9956332925D7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A38B9956332925D7*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A38B9956332925D7_MERGEFROM_1_OFFSET))(this, a1);
	}
};
