#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_333B902B2174BECA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_071D0EF220D742B6_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A97B870)
#define CLASS_1_071D0EF220D742B6_CLONE_OFFSET UNITYSDK_OFFSET(0x1A97B4D0)
#define CLASS_1_071D0EF220D742B6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A97B640)
#define CLASS_1_071D0EF220D742B6_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A97B530)
#define CLASS_1_071D0EF220D742B6_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A97B6F0)
#define CLASS_1_071D0EF220D742B6_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A97B980)
#define CLASS_1_071D0EF220D742B6_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A97B910)
#define CLASS_1_071D0EF220D742B6_METHOD_1_217A4C673B33B3F5_OFFSET UNITYSDK_OFFSET(0x1A97B520)
#define CLASS_1_071D0EF220D742B6_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1A97B360)
#define CLASS_1_071D0EF220D742B6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A97B3C0)
#define CLASS_1_071D0EF220D742B6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A97B760)
#define CLASS_1_071D0EF220D742B6_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A97B7C0)
#define CLASS_1_071D0EF220D742B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A97BB40)
#define CLASS_1_071D0EF220D742B6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A97B420)
#define CLASS_1_071D0EF220D742B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97B3D0)

inline static constexpr unsigned int Class_1_071D0EF220D742B6_TypeDefinitionIndex = 23780;

class Class_1_071D0EF220D742B6 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_333B902B2174BECA*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::Class_1_333B902B2174BECA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071D0EF220D742B6_TypeDefinitionIndex)->GetStaticField(0x57DF0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_071D0EF220D742B6_TypeDefinitionIndex)->GetStaticField(0x57DF8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_333B902B2174BECA*>* Field_1_3; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_4; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_071D0EF220D742B6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_071D0EF220D742B6* Clone()
	{
		return ((::Class_1_071D0EF220D742B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_333B902B2174BECA*>* Method_1_217A4C673B33B3F5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_333B902B2174BECA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_METHOD_1_217A4C673B33B3F5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_071D0EF220D742B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_071D0EF220D742B6*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_071D0EF220D742B6_MERGEFROM_1_OFFSET))(this, a1);
	}
};
