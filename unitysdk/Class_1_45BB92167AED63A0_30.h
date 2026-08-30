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

#define CLASS_1_45BB92167AED63A0_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88FD80)
#define CLASS_1_45BB92167AED63A0_30_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88F8F0)
#define CLASS_1_45BB92167AED63A0_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88FA50)
#define CLASS_1_45BB92167AED63A0_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88F950)
#define CLASS_1_45BB92167AED63A0_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88FB40)
#define CLASS_1_45BB92167AED63A0_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E88FEC0)
#define CLASS_1_45BB92167AED63A0_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88FE70)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E88F930)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E88F920)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E88F7D0)
#define CLASS_1_45BB92167AED63A0_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E88F940)
#define CLASS_1_45BB92167AED63A0_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88F800)
#define CLASS_1_45BB92167AED63A0_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88FC40)
#define CLASS_1_45BB92167AED63A0_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88FCA0)
#define CLASS_1_45BB92167AED63A0_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E890070)
#define CLASS_1_45BB92167AED63A0_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88F860)
#define CLASS_1_45BB92167AED63A0_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88F810)

inline static constexpr unsigned int Class_1_45BB92167AED63A0_30_TypeDefinitionIndex = 27139;

class Class_1_45BB92167AED63A0_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_30_TypeDefinitionIndex)->GetStaticField(0x40A50);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_DIOPCFCBHJJ()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45BB92167AED63A0_30_TypeDefinitionIndex)->GetStaticField(0x40A58);
	}
	// static const ::System::Int32 GNBGDANLDAO = 0x8; // 0x0
	// static const ::System::Int32 PLDKENJLKME = 0x1; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IOJLMOKPCGL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 NAEACGPKNNH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_45BB92167AED63A0_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_45BB92167AED63A0_30* Clone()
	{
		return ((::Class_1_45BB92167AED63A0_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_45BB92167AED63A0_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_30*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_45BB92167AED63A0_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
