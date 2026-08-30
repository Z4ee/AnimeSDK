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

#define CLASS_1_333B902B2174BECA_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E242420)
#define CLASS_1_333B902B2174BECA_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1E241E30)
#define CLASS_1_333B902B2174BECA_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E241F40)
#define CLASS_1_333B902B2174BECA_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E241EE0)
#define CLASS_1_333B902B2174BECA_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E242060)
#define CLASS_1_333B902B2174BECA_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E242680)
#define CLASS_1_333B902B2174BECA_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E242610)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E241EC0)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E241E90)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E241C30)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E241EB0)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E241E80)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E241ED0)
#define CLASS_1_333B902B2174BECA_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E241EA0)
#define CLASS_1_333B902B2174BECA_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E241C90)
#define CLASS_1_333B902B2174BECA_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E242230)
#define CLASS_1_333B902B2174BECA_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E242290)
#define CLASS_1_333B902B2174BECA_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2427D0)
#define CLASS_1_333B902B2174BECA_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E241D30)
#define CLASS_1_333B902B2174BECA_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E241CA0)

inline static constexpr unsigned int Class_1_333B902B2174BECA_6_TypeDefinitionIndex = 31927;

class Class_1_333B902B2174BECA_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IDNOBCIMDIK()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_6_TypeDefinitionIndex)->GetStaticField(0x15720);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_6*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_6_TypeDefinitionIndex)->GetStaticField(0x15728);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOIAEPPBIKJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_333B902B2174BECA_6_TypeDefinitionIndex)->GetStaticField(0x15730);
	}
	// static const ::System::Int32 BEEEEPNOBGE = 0xC; // 0x0
	// static const ::System::Int32 KOEOEHIMOEI = 0x1; // 0x0
	// static const ::System::Int32 GDIIKEMJCLN = 0x8; // 0x0
	// static const ::System::Int32 JJDOFLLPDJE = 0x5; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FOHLIPBMDLF; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLPNNHNLABP; // 0x20
	::System::UInt32 NPFBAFODCBI; // 0x28
	::System::UInt32 LJDBCGPFFDH; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_333B902B2174BECA_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_6*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_333B902B2174BECA_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_333B902B2174BECA_6* Clone()
	{
		return ((::Class_1_333B902B2174BECA_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_333B902B2174BECA_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_333B902B2174BECA_6*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_333B902B2174BECA_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_333B902B2174BECA_6*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_333B902B2174BECA_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
