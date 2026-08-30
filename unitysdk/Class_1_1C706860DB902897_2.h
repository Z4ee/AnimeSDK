#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1C706860DB902897_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DB89520)
#define CLASS_1_1C706860DB902897_2_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB89030)
#define CLASS_1_1C706860DB902897_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DB891D0)
#define CLASS_1_1C706860DB902897_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB89120)
#define CLASS_1_1C706860DB902897_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB892D0)
#define CLASS_1_1C706860DB902897_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DB89690)
#define CLASS_1_1C706860DB902897_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DB89630)
#define CLASS_1_1C706860DB902897_2_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DB890D0)
#define CLASS_1_1C706860DB902897_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DB88F20)
#define CLASS_1_1C706860DB902897_2_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DB890E0)
#define CLASS_1_1C706860DB902897_2_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1DB89100)
#define CLASS_1_1C706860DB902897_2_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x1DB89110)
#define CLASS_1_1C706860DB902897_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1DB890F0)
#define CLASS_1_1C706860DB902897_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DB88F80)
#define CLASS_1_1C706860DB902897_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB89320)
#define CLASS_1_1C706860DB902897_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DB89380)
#define CLASS_1_1C706860DB902897_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB89880)
#define CLASS_1_1C706860DB902897_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB88FC0)
#define CLASS_1_1C706860DB902897_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB88F90)

inline static constexpr unsigned int Class_1_1C706860DB902897_2_TypeDefinitionIndex = 32465;

class Class_1_1C706860DB902897_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_2*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C706860DB902897_2_TypeDefinitionIndex)->GetStaticField(0x44190);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_IDFDCOMPPGL()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C706860DB902897_2_TypeDefinitionIndex)->GetStaticField(0x44198);
	}
	// static const ::System::Int32 ELMAAKPCAON = 0xA; // 0x0
	// static const ::System::Int32 EKJIPCEFPOG = 0x5; // 0x0
	// static const ::System::Int32 MLKLGOIOBJN = 0x2; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* PCCEBNMGAEL; // 0x10
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
	::System::Boolean BBJIDLMAPDF; // 0x20
	::System::UInt32 IOBJJKGNBLF; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1C706860DB902897_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C706860DB902897_2*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1C706860DB902897_2* Clone()
	{
		return ((::Class_1_1C706860DB902897_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1C706860DB902897_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C706860DB902897_2*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1C706860DB902897_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C706860DB902897_2*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
