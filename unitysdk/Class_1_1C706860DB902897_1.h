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

#define CLASS_1_1C706860DB902897_1_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x197ABE20)
#define CLASS_1_1C706860DB902897_1_CLONE_OFFSET UNITYSDK_OFFSET(0x197AB970)
#define CLASS_1_1C706860DB902897_1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x197ABB40)
#define CLASS_1_1C706860DB902897_1_EQUALS_OFFSET UNITYSDK_OFFSET(0x197ABA50)
#define CLASS_1_1C706860DB902897_1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x197ABC00)
#define CLASS_1_1C706860DB902897_1_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x197AC090)
#define CLASS_1_1C706860DB902897_1_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x197AC020)
#define CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x197ABA00)
#define CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x197ABA20)
#define CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x197AB9C0)
#define CLASS_1_1C706860DB902897_1_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x197AB850)
#define CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x197ABA10)
#define CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x197ABA30)
#define CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x197AB9D0)
#define CLASS_1_1C706860DB902897_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x197AB9F0)
#define CLASS_1_1C706860DB902897_1_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x197ABA40)
#define CLASS_1_1C706860DB902897_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x197AB9E0)
#define CLASS_1_1C706860DB902897_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x197AB8B0)
#define CLASS_1_1C706860DB902897_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x197ABC60)
#define CLASS_1_1C706860DB902897_1_WRITETO_OFFSET UNITYSDK_OFFSET(0x197ABCC0)
#define CLASS_1_1C706860DB902897_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x197AC1B0)
#define CLASS_1_1C706860DB902897_1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x197AB8F0)
#define CLASS_1_1C706860DB902897_1__CTOR_OFFSET UNITYSDK_OFFSET(0x197AB8C0)

inline static constexpr unsigned int Class_1_1C706860DB902897_1_TypeDefinitionIndex = 27446;

class Class_1_1C706860DB902897_1 : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_11()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C706860DB902897_1_TypeDefinitionIndex)->GetStaticField(0x7D00);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_1*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1C706860DB902897_1_TypeDefinitionIndex)->GetStaticField(0x7D08);
	}
	// static const ::System::Int32 Field_1_2 = 0x6; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x8; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xB; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x1; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_12; // 0x18
	::System::UInt32 Field_1_9; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::UInt32 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_1*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1C706860DB902897_1*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1C706860DB902897_1* Clone()
	{
		return ((::Class_1_1C706860DB902897_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1C706860DB902897_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C706860DB902897_1*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1C706860DB902897_1_MERGEFROM_1_OFFSET))(this, a1);
	}
};
