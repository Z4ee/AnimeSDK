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

#define CLASS_1_A67459655C467518_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9EF840)
#define CLASS_1_A67459655C467518_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9EF280)
#define CLASS_1_A67459655C467518_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D9EF310)
#define CLASS_1_A67459655C467518_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9EF2E0)
#define CLASS_1_A67459655C467518_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D9EF510)
#define CLASS_1_A67459655C467518_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9EF930)
#define CLASS_1_A67459655C467518_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9EF8D0)
#define CLASS_1_A67459655C467518_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D9EF2D0)
#define CLASS_1_A67459655C467518_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D9EF160)
#define CLASS_1_A67459655C467518_METHOD_1_8633AE51B23EBDFD_OFFSET UNITYSDK_OFFSET(0x1D9EF2C0)
#define CLASS_1_A67459655C467518_METHOD_1_C229FF62B898C0B2_OFFSET UNITYSDK_OFFSET(0x1D9EF2B0)
#define CLASS_1_A67459655C467518_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D9EF190)
#define CLASS_1_A67459655C467518_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9EF700)
#define CLASS_1_A67459655C467518_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D9EF760)
#define CLASS_1_A67459655C467518__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EFB40)
#define CLASS_1_A67459655C467518__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D9EF1F0)
#define CLASS_1_A67459655C467518__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EF1A0)

inline static constexpr unsigned int Class_1_A67459655C467518_TypeDefinitionIndex = 25124;

class Class_1_A67459655C467518 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IJFMKNJNPJA()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A67459655C467518_TypeDefinitionIndex)->GetStaticField(0x160E0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_A67459655C467518*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_A67459655C467518*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A67459655C467518_TypeDefinitionIndex)->GetStaticField(0x160E8);
	}
	// static const ::System::Int32 IJOMFDBAGLF = 0x1; // 0x0
	// static const ::System::Int32 OJNAEOAFHAN = 0x2; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AEFONHHNKDD; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Double AHCDDPBAHMD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_A67459655C467518* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A67459655C467518*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_A67459655C467518*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_A67459655C467518*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_A67459655C467518* Clone()
	{
		return ((::Class_1_A67459655C467518*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_CLONE_OFFSET))(this);
	}

	::System::Double Method_1_C229FF62B898C0B2()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_METHOD_1_C229FF62B898C0B2_OFFSET))(this);
	}

	::System::Void Method_1_8633AE51B23EBDFD(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_METHOD_1_8633AE51B23EBDFD_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A67459655C467518* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A67459655C467518*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_A67459655C467518* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A67459655C467518*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_A67459655C467518_MERGEFROM_1_OFFSET))(this, a1);
	}
};
