#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7B005A18003A04C3_Enum_3_3D1973FEBEEBFC47_1.h"
#include "unitysdk/System/Object.h"

class Class_1_10F56A639581CEB1_5;
class Class_1_60E3B7F7BA004DCE;
class Class_1_6DED08B7C7C749EF_2;
class Class_1_963E317C37FB5E9A;
class Class_1_9BA36423EA524C40_1;
class Class_1_A7A42CB240A0440F;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_7B005A18003A04C3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C6E2050)
#define CLASS_1_7B005A18003A04C3_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6E11C0)
#define CLASS_1_7B005A18003A04C3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C6E12C0)
#define CLASS_1_7B005A18003A04C3_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6E1260)
#define CLASS_1_7B005A18003A04C3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6E1740)
#define CLASS_1_7B005A18003A04C3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1C6E2E10)
#define CLASS_1_7B005A18003A04C3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C6E2480)
#define CLASS_1_7B005A18003A04C3_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x1C6E1240)
#define CLASS_1_7B005A18003A04C3_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1C6E0A20)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_1_OFFSET UNITYSDK_OFFSET(0x1C6E0F40)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_2_OFFSET UNITYSDK_OFFSET(0x1C6E0FC0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_3_OFFSET UNITYSDK_OFFSET(0x1C6E1040)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_4_OFFSET UNITYSDK_OFFSET(0x1C6E10C0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_5_OFFSET UNITYSDK_OFFSET(0x1C6E1140)
#define CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x1C6E0EC0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_3F08C697E838D55A_OFFSET UNITYSDK_OFFSET(0x1C6E1210)
#define CLASS_1_7B005A18003A04C3_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1C6E1250)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_1_OFFSET UNITYSDK_OFFSET(0x1C6E0FA0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_2_OFFSET UNITYSDK_OFFSET(0x1C6E1020)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_3_OFFSET UNITYSDK_OFFSET(0x1C6E10A0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_4_OFFSET UNITYSDK_OFFSET(0x1C6E1120)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_5_OFFSET UNITYSDK_OFFSET(0x1C6E11A0)
#define CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1C6E0F20)
#define CLASS_1_7B005A18003A04C3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1C6E1230)
#define CLASS_1_7B005A18003A04C3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C6E1220)
#define CLASS_1_7B005A18003A04C3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C6E0A80)
#define CLASS_1_7B005A18003A04C3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6E1BE0)
#define CLASS_1_7B005A18003A04C3_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C6E1C40)
#define CLASS_1_7B005A18003A04C3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6E34C0)
#define CLASS_1_7B005A18003A04C3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6E0AD0)
#define CLASS_1_7B005A18003A04C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E0A90)

inline static constexpr unsigned int Class_1_7B005A18003A04C3_TypeDefinitionIndex = 24842;

class Class_1_7B005A18003A04C3 : public ::System::Object
{
public:
	static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B005A18003A04C3_TypeDefinitionIndex)->GetStaticField(0x62FB0);
	}
	static ::Google::Protobuf::MessageParser_1<::Class_1_7B005A18003A04C3*>** StaticGet_Field_1_1()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_7B005A18003A04C3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7B005A18003A04C3_TypeDefinitionIndex)->GetStaticField(0x62FB8);
	}
	// static const ::System::Int32 Field_1_2 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_4 = 0x3E9; // 0x0
	// static const ::System::Int32 Field_1_5 = 0x3EA; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x3EB; // 0x0
	// static const ::System::Int32 Field_1_7 = 0x3EC; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x3ED; // 0x0
	// static const ::System::Int32 Field_1_9 = 0x3EE; // 0x0
	::System::Object* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_11; // 0x18
	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Field_1_12; // 0x20
	::Class_1_7B005A18003A04C3_Enum_3_3D1973FEBEEBFC47_1 Field_1_13; // 0x28
	::System::Boolean Field_1_14; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_7B005A18003A04C3*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_7B005A18003A04C3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_7B005A18003A04C3* Clone()
	{
		return ((::Class_1_7B005A18003A04C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_CLONE_OFFSET))(this);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* Method_1_3F08C697E838D55A()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_3F08C697E838D55A_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::Class_1_963E317C37FB5E9A* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_963E317C37FB5E9A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_963E317C37FB5E9A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Class_1_10F56A639581CEB1_5* Method_1_358A144584A5DBFC_1()
	{
		return ((::Class_1_10F56A639581CEB1_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_1(::Class_1_10F56A639581CEB1_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_10F56A639581CEB1_5*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_1_OFFSET))(this, a1);
	}

	::Class_1_9BA36423EA524C40_1* Method_1_358A144584A5DBFC_2()
	{
		return ((::Class_1_9BA36423EA524C40_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_2_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_2(::Class_1_9BA36423EA524C40_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9BA36423EA524C40_1*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_2_OFFSET))(this, a1);
	}

	::Class_1_6DED08B7C7C749EF_2* Method_1_358A144584A5DBFC_3()
	{
		return ((::Class_1_6DED08B7C7C749EF_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_3_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_3(::Class_1_6DED08B7C7C749EF_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DED08B7C7C749EF_2*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_3_OFFSET))(this, a1);
	}

	::Class_1_60E3B7F7BA004DCE* Method_1_358A144584A5DBFC_4()
	{
		return ((::Class_1_60E3B7F7BA004DCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_4_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_4(::Class_1_60E3B7F7BA004DCE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_60E3B7F7BA004DCE*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_4_OFFSET))(this, a1);
	}

	::Class_1_A7A42CB240A0440F* Method_1_358A144584A5DBFC_5()
	{
		return ((::Class_1_A7A42CB240A0440F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_358A144584A5DBFC_5_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE_5(::Class_1_A7A42CB240A0440F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7A42CB240A0440F*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_8C8625211DA811AE_5_OFFSET))(this, a1);
	}

	::Class_1_7B005A18003A04C3_Enum_3_3D1973FEBEEBFC47_1 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_7B005A18003A04C3_Enum_3_3D1973FEBEEBFC47_1(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_7B005A18003A04C3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_7B005A18003A04C3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
