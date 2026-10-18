#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_21DCD4640D389503_12_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7238F0)
#define CLASS_1_21DCD4640D389503_12_CLONE_OFFSET UNITYSDK_OFFSET(0x1E722CA0)
#define CLASS_1_21DCD4640D389503_12_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E723030)
#define CLASS_1_21DCD4640D389503_12_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E723000)
#define CLASS_1_21DCD4640D389503_12_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E723190)
#define CLASS_1_21DCD4640D389503_12_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E723BE0)
#define CLASS_1_21DCD4640D389503_12_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E723B00)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x1E722DD0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_2_OFFSET UNITYSDK_OFFSET(0x1E722E30)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_3_OFFSET UNITYSDK_OFFSET(0x1E722E90)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_4_OFFSET UNITYSDK_OFFSET(0x1E722EF0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_5_OFFSET UNITYSDK_OFFSET(0x1E722F50)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_6_OFFSET UNITYSDK_OFFSET(0x1E722FB0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1E722D70)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x1E722DC0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_2_OFFSET UNITYSDK_OFFSET(0x1E722E20)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_3_OFFSET UNITYSDK_OFFSET(0x1E722E80)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_4_OFFSET UNITYSDK_OFFSET(0x1E722EE0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_5_OFFSET UNITYSDK_OFFSET(0x1E722F40)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_6_OFFSET UNITYSDK_OFFSET(0x1E722FA0)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1E722D60)
#define CLASS_1_21DCD4640D389503_12_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E722B60)
#define CLASS_1_21DCD4640D389503_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E722B90)
#define CLASS_1_21DCD4640D389503_12_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E723560)
#define CLASS_1_21DCD4640D389503_12_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7235C0)
#define CLASS_1_21DCD4640D389503_12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E723E70)
#define CLASS_1_21DCD4640D389503_12__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E722BF0)
#define CLASS_1_21DCD4640D389503_12__CTOR_OFFSET UNITYSDK_OFFSET(0x1E722BA0)

inline static constexpr unsigned int Class_1_21DCD4640D389503_12_TypeDefinitionIndex = 25341;

class Class_1_21DCD4640D389503_12 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_12*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_12*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_21DCD4640D389503_12_TypeDefinitionIndex)->GetStaticField(0x1DE50);
	}
	// static const ::System::Int32 OLMIFJKILJG = 0x1; // 0x0
	// static const ::System::Int32 PBBIACCKPME = 0x2; // 0x0
	// static const ::System::Int32 NJOEMFNFOHK = 0x3; // 0x0
	// static const ::System::Int32 HEGLENJEICD = 0x4; // 0x0
	// static const ::System::Int32 KEACNLCFHJJ = 0x5; // 0x0
	// static const ::System::Int32 DBKOHLFBPNI = 0x6; // 0x0
	// static const ::System::Int32 PHLPBPJCGEE = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::String* LNBEDFHAMBH; // 0x18
	::System::String* CLAHIBKBIHH; // 0x20
	::System::String* MDPFLIGGADI; // 0x28
	::System::String* OENGANOFKFC; // 0x30
	::System::String* IOGCODPGEEA; // 0x38
	::System::String* JDOJAMHCAJD; // 0x40
	::System::String* PEJBFPOEOKO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_21DCD4640D389503_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_12*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_12*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_21DCD4640D389503_12*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_21DCD4640D389503_12* Clone()
	{
		return ((::Class_1_21DCD4640D389503_12*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_2_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_2_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_3_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_3_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_4_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_4_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_5_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_5_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_126AB3935214AA22_6_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306_6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_METHOD_1_050E70FEDB783306_6_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_21DCD4640D389503_12* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_21DCD4640D389503_12*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_21DCD4640D389503_12* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_21DCD4640D389503_12*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_21DCD4640D389503_12_MERGEFROM_1_OFFSET))(this, a1);
	}
};
