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

#define CLASS_1_F487A56015EDF324_5_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD89860)
#define CLASS_1_F487A56015EDF324_5_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD89360)
#define CLASS_1_F487A56015EDF324_5_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD894A0)
#define CLASS_1_F487A56015EDF324_5_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD89400)
#define CLASS_1_F487A56015EDF324_5_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD895A0)
#define CLASS_1_F487A56015EDF324_5_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD89A50)
#define CLASS_1_F487A56015EDF324_5_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD899F0)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DD893E0)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DD893B0)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DD89200)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DD893D0)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DD893F0)
#define CLASS_1_F487A56015EDF324_5_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DD893C0)
#define CLASS_1_F487A56015EDF324_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD89260)
#define CLASS_1_F487A56015EDF324_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD896A0)
#define CLASS_1_F487A56015EDF324_5_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD89700)
#define CLASS_1_F487A56015EDF324_5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD89B40)
#define CLASS_1_F487A56015EDF324_5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD892C0)
#define CLASS_1_F487A56015EDF324_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD89270)

inline static constexpr unsigned int Class_1_F487A56015EDF324_5_TypeDefinitionIndex = 28967;

class Class_1_F487A56015EDF324_5 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AJCOHOOLCKE()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_5_TypeDefinitionIndex)->GetStaticField(0x17C10);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_5*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F487A56015EDF324_5_TypeDefinitionIndex)->GetStaticField(0x17C18);
	}
	// static const ::System::Int32 MJJGNBCFCOH = 0x1; // 0x0
	// static const ::System::Int32 ILMIAONPGHC = 0xB; // 0x0
	// static const ::System::Int32 BDHJLOLMAKK = 0x8; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEPJNFLCIHP; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 ODCKBAEKGJG; // 0x20
	::System::UInt32 MJIMFDKFGDE; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F487A56015EDF324_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_5*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_5*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F487A56015EDF324_5*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F487A56015EDF324_5* Clone()
	{
		return ((::Class_1_F487A56015EDF324_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F487A56015EDF324_5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F487A56015EDF324_5*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F487A56015EDF324_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F487A56015EDF324_5*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F487A56015EDF324_5_MERGEFROM_1_OFFSET))(this, a1);
	}
};
