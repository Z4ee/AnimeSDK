#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_4D052AB586FDB247_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DECDA10)
#define CLASS_1_4D052AB586FDB247_1_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBD9B0)
#define CLASS_1_4D052AB586FDB247_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DECD6E0)
#define CLASS_1_4D052AB586FDB247_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DECD680)
#define CLASS_1_4D052AB586FDB247_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBDE70)
#define CLASS_1_4D052AB586FDB247_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DECDBE0)
#define CLASS_1_4D052AB586FDB247_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBE560)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DECD660)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DECD640)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DECD4E0)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1DECD630)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DECD670)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DECD650)
#define CLASS_1_4D052AB586FDB247_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1DECD620)
#define CLASS_1_4D052AB586FDB247_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DECD540)
#define CLASS_1_4D052AB586FDB247_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DECD810)
#define CLASS_1_4D052AB586FDB247_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DECD870)
#define CLASS_1_4D052AB586FDB247_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECDD40)
#define CLASS_1_4D052AB586FDB247_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECD550)
#define CLASS_1_4D052AB586FDB247_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE4F0)

inline static constexpr unsigned int Class_1_4D052AB586FDB247_1_TypeDefinitionIndex = 27871;

class Class_1_4D052AB586FDB247_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_EACOGCDFMEO()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D052AB586FDB247_1_TypeDefinitionIndex)->GetStaticField(0x3D050);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_4D052AB586FDB247_1*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_4D052AB586FDB247_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D052AB586FDB247_1_TypeDefinitionIndex)->GetStaticField(0x3D058);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KMKLAMBNPOG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4D052AB586FDB247_1_TypeDefinitionIndex)->GetStaticField(0x3D060);
	}
	// static const ::System::Int32 JKHDOMFNJPI = 0x4; // 0x0
	// static const ::System::Int32 JLEFNNLJPLE = 0x6; // 0x0
	// static const ::System::Int32 LMJEMIIGGNH = 0xC; // 0x0
	// static const ::System::Int32 PFPJMEJFKFH = 0x9; // 0x0
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLHACIPADPA; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* OAKLMFEAKHA; // 0x18
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
	::System::UInt32 FJBLKPNOKAF; // 0x28
	::System::UInt32 MHKCOPMBDKK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_4D052AB586FDB247_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D052AB586FDB247_1*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_4D052AB586FDB247_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_4D052AB586FDB247_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_4D052AB586FDB247_1* Clone()
	{
		return ((::Class_1_4D052AB586FDB247_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_4D052AB586FDB247_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_4D052AB586FDB247_1*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_4D052AB586FDB247_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D052AB586FDB247_1*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_4D052AB586FDB247_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
