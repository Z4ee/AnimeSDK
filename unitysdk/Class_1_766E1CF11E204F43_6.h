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

#define CLASS_1_766E1CF11E204F43_6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D81C6B0)
#define CLASS_1_766E1CF11E204F43_6_CLONE_OFFSET UNITYSDK_OFFSET(0x1D81C220)
#define CLASS_1_766E1CF11E204F43_6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D81C320)
#define CLASS_1_766E1CF11E204F43_6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D81C2A0)
#define CLASS_1_766E1CF11E204F43_6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D81C420)
#define CLASS_1_766E1CF11E204F43_6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D81C870)
#define CLASS_1_766E1CF11E204F43_6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D81C810)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1D81C270)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1D81C250)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1D81C290)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1D81C100)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1D81C280)
#define CLASS_1_766E1CF11E204F43_6_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1D81C260)
#define CLASS_1_766E1CF11E204F43_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D81C130)
#define CLASS_1_766E1CF11E204F43_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D81C520)
#define CLASS_1_766E1CF11E204F43_6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D81C580)
#define CLASS_1_766E1CF11E204F43_6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D81C940)
#define CLASS_1_766E1CF11E204F43_6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D81C190)
#define CLASS_1_766E1CF11E204F43_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C140)

inline static constexpr unsigned int Class_1_766E1CF11E204F43_6_TypeDefinitionIndex = 30868;

class Class_1_766E1CF11E204F43_6 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_766E1CF11E204F43_6*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_766E1CF11E204F43_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_766E1CF11E204F43_6_TypeDefinitionIndex)->GetStaticField(0x2BFE0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_APNOCHBAAEF()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_766E1CF11E204F43_6_TypeDefinitionIndex)->GetStaticField(0x2BFE8);
	}
	// static const ::System::Int32 PMEIEMBGLCB = 0x6; // 0x0
	// static const ::System::Int32 FDDDLMBHDMC = 0xC; // 0x0
	// static const ::System::Int32 CIBDNMCBMLC = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CCDAAEAOHJJ; // 0x18
	::System::UInt32 NIAOPCJHKCG; // 0x20
	::System::UInt32 IDKAAEKCFOG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_766E1CF11E204F43_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_6*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_766E1CF11E204F43_6*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_766E1CF11E204F43_6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_766E1CF11E204F43_6* Clone()
	{
		return ((::Class_1_766E1CF11E204F43_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_766E1CF11E204F43_6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_766E1CF11E204F43_6*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_766E1CF11E204F43_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_6*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_766E1CF11E204F43_6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
