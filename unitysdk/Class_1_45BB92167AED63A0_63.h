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

#define CLASS_1_45BB92167AED63A0_63_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E8280)
#define CLASS_1_45BB92167AED63A0_63_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E7DF0)
#define CLASS_1_45BB92167AED63A0_63_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E7F50)
#define CLASS_1_45BB92167AED63A0_63_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E7E50)
#define CLASS_1_45BB92167AED63A0_63_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E8040)
#define CLASS_1_45BB92167AED63A0_63_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E83B0)
#define CLASS_1_45BB92167AED63A0_63_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E8360)
#define CLASS_1_45BB92167AED63A0_63_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E1E7E20)
#define CLASS_1_45BB92167AED63A0_63_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E1E7E40)
#define CLASS_1_45BB92167AED63A0_63_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E1E7CD0)
#define CLASS_1_45BB92167AED63A0_63_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E1E7E30)
#define CLASS_1_45BB92167AED63A0_63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7D00)
#define CLASS_1_45BB92167AED63A0_63_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E8140)
#define CLASS_1_45BB92167AED63A0_63_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E81A0)
#define CLASS_1_45BB92167AED63A0_63__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E8570)
#define CLASS_1_45BB92167AED63A0_63__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E7D60)
#define CLASS_1_45BB92167AED63A0_63__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7D10)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_63_TypeDefinitionIndex = 30301;

class Class_1_45BB92167AED63A0_63 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_63*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_63*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_63_TypeDefinitionIndex)->GetStaticField(0x36610);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MODIEGGDDBH()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_63_TypeDefinitionIndex)->GetStaticField(0x36618);
	}
	// static const ::System::Int32 PLDKENJLKME = 0xD; // 0x0
	// static const ::System::Int32 GHAAPPEBMBH = 0x9; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJJJNMKINKP; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_63*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_63*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_63*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_63* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_63*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_63* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_63*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_63* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_63*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_63_MERGEFROM_1_OFFSET))(this, a1);
	}
};
