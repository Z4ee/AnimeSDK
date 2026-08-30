#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_F91AD0C5A85E4AFA_30_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E913E10)
#define CLASS_1_F91AD0C5A85E4AFA_30_CLONE_OFFSET UNITYSDK_OFFSET(0x1E913910)
#define CLASS_1_F91AD0C5A85E4AFA_30_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E913AF0)
#define CLASS_1_F91AD0C5A85E4AFA_30_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9139F0)
#define CLASS_1_F91AD0C5A85E4AFA_30_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E913BF0)
#define CLASS_1_F91AD0C5A85E4AFA_30_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E913F40)
#define CLASS_1_F91AD0C5A85E4AFA_30_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E913EF0)
#define CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E9139D0)
#define CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E913980)
#define CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E913970)
#define CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E913880)
#define CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E9139E0)
#define CLASS_1_F91AD0C5A85E4AFA_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9138B0)
#define CLASS_1_F91AD0C5A85E4AFA_30_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E913CC0)
#define CLASS_1_F91AD0C5A85E4AFA_30_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E913D20)
#define CLASS_1_F91AD0C5A85E4AFA_30__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9140F0)
#define CLASS_1_F91AD0C5A85E4AFA_30__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9138D0)
#define CLASS_1_F91AD0C5A85E4AFA_30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9138C0)

inline static constexpr unsigned int Class_1_F91AD0C5A85E4AFA_30_TypeDefinitionIndex = 33114;

class Class_1_F91AD0C5A85E4AFA_30 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_30*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_30*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F91AD0C5A85E4AFA_30_TypeDefinitionIndex)->GetStaticField(0x5E00);
	}
	// static const ::System::Int32 OLMIFJKILJG = 0x3; // 0x0
	// static const ::System::Int32 HLKDEGJOKIO = 0x1; // 0x0
	::System::String* IOGCODPGEEA; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::UInt32 MDHELICKNPE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_F91AD0C5A85E4AFA_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_30*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_30*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_F91AD0C5A85E4AFA_30*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_F91AD0C5A85E4AFA_30* Clone()
	{
		return ((::Class_1_F91AD0C5A85E4AFA_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F91AD0C5A85E4AFA_30* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_30*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_F91AD0C5A85E4AFA_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F91AD0C5A85E4AFA_30*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_F91AD0C5A85E4AFA_30_MERGEFROM_1_OFFSET))(this, a1);
	}
};
