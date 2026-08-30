#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63BCB6C405BA8A1D.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D9F432CB1A34324B_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E346770)
#define CLASS_1_D9F432CB1A34324B_CLONE_OFFSET UNITYSDK_OFFSET(0x1E346240)
#define CLASS_1_D9F432CB1A34324B_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3463F0)
#define CLASS_1_D9F432CB1A34324B_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3462C0)
#define CLASS_1_D9F432CB1A34324B_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3464E0)
#define CLASS_1_D9F432CB1A34324B_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E346910)
#define CLASS_1_D9F432CB1A34324B_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3468C0)
#define CLASS_1_D9F432CB1A34324B_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E3460F0)
#define CLASS_1_D9F432CB1A34324B_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1E3462A0)
#define CLASS_1_D9F432CB1A34324B_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E3462B0)
#define CLASS_1_D9F432CB1A34324B_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1E346290)
#define CLASS_1_D9F432CB1A34324B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E346150)
#define CLASS_1_D9F432CB1A34324B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3465E0)
#define CLASS_1_D9F432CB1A34324B_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E346640)
#define CLASS_1_D9F432CB1A34324B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E346AF0)
#define CLASS_1_D9F432CB1A34324B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3461B0)
#define CLASS_1_D9F432CB1A34324B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E346160)

inline static constexpr unsigned int Class_1_D9F432CB1A34324B_TypeDefinitionIndex = 28726;

class Class_1_D9F432CB1A34324B : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F432CB1A34324B_TypeDefinitionIndex)->GetStaticField(0x531E0);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FOGGOPGEFHM()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D9F432CB1A34324B_TypeDefinitionIndex)->GetStaticField(0x531E8);
	}
	// static const ::System::Int32 FIPIBHCBHJC = 0xB; // 0x0
	// static const ::System::Int32 ALGFBEOFHBO = 0x6; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MFKHLAPFKHB; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::Enum_3_63BCB6C405BA8A1D OLKEPHJAPFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D9F432CB1A34324B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D9F432CB1A34324B*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D9F432CB1A34324B* Clone()
	{
		return ((::Class_1_D9F432CB1A34324B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_CLONE_OFFSET))(this);
	}

	::Enum_3_63BCB6C405BA8A1D Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_63BCB6C405BA8A1D(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_63BCB6C405BA8A1D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_63BCB6C405BA8A1D))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D9F432CB1A34324B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D9F432CB1A34324B*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D9F432CB1A34324B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D9F432CB1A34324B*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D9F432CB1A34324B_MERGEFROM_1_OFFSET))(this, a1);
	}
};
