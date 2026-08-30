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

#define CLASS_1_20A5FC2DE45BF4AF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F9E50)
#define CLASS_1_20A5FC2DE45BF4AF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F9800)
#define CLASS_1_20A5FC2DE45BF4AF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F9930)
#define CLASS_1_20A5FC2DE45BF4AF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F98D0)
#define CLASS_1_20A5FC2DE45BF4AF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F99D0)
#define CLASS_1_20A5FC2DE45BF4AF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FA080)
#define CLASS_1_20A5FC2DE45BF4AF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FA000)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E0F9870)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E0F9850)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E0F9600)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_554199E0076172C5_1_OFFSET UNITYSDK_OFFSET(0x1E0F98A0)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E0F9890)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E0F9880)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E0F9860)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E0F98C0)
#define CLASS_1_20A5FC2DE45BF4AF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E0F98B0)
#define CLASS_1_20A5FC2DE45BF4AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F9660)
#define CLASS_1_20A5FC2DE45BF4AF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F9BA0)
#define CLASS_1_20A5FC2DE45BF4AF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F9C00)
#define CLASS_1_20A5FC2DE45BF4AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FA1F0)
#define CLASS_1_20A5FC2DE45BF4AF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F9700)
#define CLASS_1_20A5FC2DE45BF4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F9670)

inline static constexpr unsigned int Class_1_20A5FC2DE45BF4AF_TypeDefinitionIndex = 28953;

class Class_1_20A5FC2DE45BF4AF : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_20A5FC2DE45BF4AF*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_20A5FC2DE45BF4AF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A5FC2DE45BF4AF_TypeDefinitionIndex)->GetStaticField(0x3DC10);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KMKPCNECENO()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A5FC2DE45BF4AF_TypeDefinitionIndex)->GetStaticField(0x3DC18);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CIHLCECLEHB()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A5FC2DE45BF4AF_TypeDefinitionIndex)->GetStaticField(0x3DC20);
	}
	// static const ::System::Int32 BDHJLOLMAKK = 0xC; // 0x0
	// static const ::System::Int32 MJJGNBCFCOH = 0x7; // 0x0
	// static const ::System::Int32 OJEDECBAMOI = 0x9; // 0x0
	// static const ::System::Int32 MAKPBLFEMOF = 0x2; // 0x0
	// static const ::System::Int32 KLCJLOABNBH = 0xE; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FDJMHALCAMG; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGCJAODKJFK; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::Boolean BIFOCPDIOBP; // 0x28
	::System::UInt32 ODCKBAEKGJG; // 0x2C
	::System::UInt32 MJIMFDKFGDE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_20A5FC2DE45BF4AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20A5FC2DE45BF4AF*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_20A5FC2DE45BF4AF*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_20A5FC2DE45BF4AF*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_20A5FC2DE45BF4AF* Clone()
	{
		return ((::Class_1_20A5FC2DE45BF4AF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5_1()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_554199E0076172C5_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_20A5FC2DE45BF4AF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_20A5FC2DE45BF4AF*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_20A5FC2DE45BF4AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_20A5FC2DE45BF4AF*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_20A5FC2DE45BF4AF_MERGEFROM_1_OFFSET))(this, a1);
	}
};
