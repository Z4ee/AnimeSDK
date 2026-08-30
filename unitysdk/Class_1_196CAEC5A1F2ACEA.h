#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_196CAEC5A1F2ACEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74A510)
#define CLASS_1_196CAEC5A1F2ACEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E749F90)
#define CLASS_1_196CAEC5A1F2ACEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74A0B0)
#define CLASS_1_196CAEC5A1F2ACEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74A050)
#define CLASS_1_196CAEC5A1F2ACEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74A2A0)
#define CLASS_1_196CAEC5A1F2ACEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74A610)
#define CLASS_1_196CAEC5A1F2ACEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74A5C0)
#define CLASS_1_196CAEC5A1F2ACEA_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E74A010)
#define CLASS_1_196CAEC5A1F2ACEA_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E749ED0)
#define CLASS_1_196CAEC5A1F2ACEA_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1E74A030)
#define CLASS_1_196CAEC5A1F2ACEA_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E74A020)
#define CLASS_1_196CAEC5A1F2ACEA_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x1E74A040)
#define CLASS_1_196CAEC5A1F2ACEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E749F30)
#define CLASS_1_196CAEC5A1F2ACEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74A3C0)
#define CLASS_1_196CAEC5A1F2ACEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74A420)
#define CLASS_1_196CAEC5A1F2ACEA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74A790)
#define CLASS_1_196CAEC5A1F2ACEA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E749F50)
#define CLASS_1_196CAEC5A1F2ACEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E749F40)

inline static constexpr unsigned int Class_1_196CAEC5A1F2ACEA_TypeDefinitionIndex = 24913;

class Class_1_196CAEC5A1F2ACEA : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_196CAEC5A1F2ACEA_TypeDefinitionIndex)->GetStaticField(0x393F0);
	}
	// static const ::System::Int32 OPDHMAOPEGB = 0x1; // 0x0
	// static const ::System::Int32 JLAAHBJNEML = 0x2; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EPDPJFHAJND; // 0x18
	::System::Single DFKHBNCHKBI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_196CAEC5A1F2ACEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_196CAEC5A1F2ACEA*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_196CAEC5A1F2ACEA* Clone()
	{
		return ((::Class_1_196CAEC5A1F2ACEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_196CAEC5A1F2ACEA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_196CAEC5A1F2ACEA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_196CAEC5A1F2ACEA*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_196CAEC5A1F2ACEA_MERGEFROM_1_OFFSET))(this, a1);
	}
};
