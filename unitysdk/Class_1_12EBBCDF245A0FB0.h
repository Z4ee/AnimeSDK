#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_12EBBCDF245A0FB0_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0CB1E0)
#define CLASS_1_12EBBCDF245A0FB0_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0CACC0)
#define CLASS_1_12EBBCDF245A0FB0_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0CAE80)
#define CLASS_1_12EBBCDF245A0FB0_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0CAD70)
#define CLASS_1_12EBBCDF245A0FB0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0CAF80)
#define CLASS_1_12EBBCDF245A0FB0_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CB270)
#define CLASS_1_12EBBCDF245A0FB0_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CB220)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x1E0CAC30)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1E0CAD40)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1E0CAD60)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1E0CAD20)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1E0CAD30)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1E0CAD50)
#define CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1E0CAD10)
#define CLASS_1_12EBBCDF245A0FB0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0CAC60)
#define CLASS_1_12EBBCDF245A0FB0_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0CAFB0)
#define CLASS_1_12EBBCDF245A0FB0_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0CB010)
#define CLASS_1_12EBBCDF245A0FB0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CB420)
#define CLASS_1_12EBBCDF245A0FB0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0CAC80)
#define CLASS_1_12EBBCDF245A0FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CAC70)

inline static constexpr unsigned int Class_1_12EBBCDF245A0FB0_TypeDefinitionIndex = 25029;

class Class_1_12EBBCDF245A0FB0 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12EBBCDF245A0FB0_TypeDefinitionIndex)->GetStaticField(0x124F0);
	}
	// static const ::System::Int32 ONGAHKAHENP = 0x1; // 0x0
	// static const ::System::Int32 HCBKMHAAGGM = 0x2; // 0x0
	// static const ::System::Int32 KBEEBCIJCKO = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::Boolean ANGJKIOCFBI; // 0x18
	::System::Boolean DLBHFFAKJEF; // 0x19
	::System::Boolean IDNGAOCKIHF; // 0x1A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_12EBBCDF245A0FB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_12EBBCDF245A0FB0*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_12EBBCDF245A0FB0* Clone()
	{
		return ((::Class_1_12EBBCDF245A0FB0*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_CLONE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_12EBBCDF245A0FB0* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_12EBBCDF245A0FB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12EBBCDF245A0FB0*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_12EBBCDF245A0FB0_MERGEFROM_1_OFFSET))(this, a1);
	}
};
