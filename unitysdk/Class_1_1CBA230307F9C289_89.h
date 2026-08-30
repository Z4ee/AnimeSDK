#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_28.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1CBA230307F9C289_89_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4F0790)
#define CLASS_1_1CBA230307F9C289_89_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4F0340)
#define CLASS_1_1CBA230307F9C289_89_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4F04D0)
#define CLASS_1_1CBA230307F9C289_89_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4F03F0)
#define CLASS_1_1CBA230307F9C289_89_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4F05A0)
#define CLASS_1_1CBA230307F9C289_89_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4F09B0)
#define CLASS_1_1CBA230307F9C289_89_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4F0960)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E4F03B0)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E4F0390)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E4F03E0)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E4F02B0)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E4F03C0)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E4F03A0)
#define CLASS_1_1CBA230307F9C289_89_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E4F03D0)
#define CLASS_1_1CBA230307F9C289_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4F02E0)
#define CLASS_1_1CBA230307F9C289_89_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4F05D0)
#define CLASS_1_1CBA230307F9C289_89_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4F0630)
#define CLASS_1_1CBA230307F9C289_89__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F0B50)
#define CLASS_1_1CBA230307F9C289_89__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4F0300)
#define CLASS_1_1CBA230307F9C289_89__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F02F0)

inline static constexpr unsigned int Class_1_1CBA230307F9C289_89_TypeDefinitionIndex = 32940;

class Class_1_1CBA230307F9C289_89 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_89*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_89*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CBA230307F9C289_89_TypeDefinitionIndex)->GetStaticField(0x1EDB0);
	}
	// static const ::System::Int32 KHGFOJEHAPF = 0xE; // 0x0
	// static const ::System::Int32 CABPIEHDIGJ = 0xC; // 0x0
	// static const ::System::Int32 ELFGGGHJCFC = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Enum_3_ED790DAC948A65A9_28 ADOPAOCMEOG; // 0x18
	::System::UInt32 EOGANAPKHOG; // 0x1C
	::System::UInt32 CBFKOHEJNJJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1CBA230307F9C289_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_89*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_89*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1CBA230307F9C289_89*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1CBA230307F9C289_89* Clone()
	{
		return ((::Class_1_1CBA230307F9C289_89*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_ED790DAC948A65A9_28 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_ED790DAC948A65A9_28(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_ED790DAC948A65A9_28 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_28))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1CBA230307F9C289_89* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1CBA230307F9C289_89*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1CBA230307F9C289_89* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_89*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1CBA230307F9C289_89_MERGEFROM_1_OFFSET))(this, a1);
	}
};
