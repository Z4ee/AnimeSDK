#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2_Codec; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_6A016EB9D6190C4D_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17B2E0F0)
#define CLASS_1_6A016EB9D6190C4D_CLONE_OFFSET UNITYSDK_OFFSET(0x17B2DD00)
#define CLASS_1_6A016EB9D6190C4D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17B2DE10)
#define CLASS_1_6A016EB9D6190C4D_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B2DDB0)
#define CLASS_1_6A016EB9D6190C4D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B2DEE0)
#define CLASS_1_6A016EB9D6190C4D_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17B2E340)
#define CLASS_1_6A016EB9D6190C4D_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17B2E2C0)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x17B2DD80)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x17B2DD50)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x17B2DD90)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x17B2DD60)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_EA98AC27B86895E5_OFFSET UNITYSDK_OFFSET(0x17B2DD70)
#define CLASS_1_6A016EB9D6190C4D_METHOD_1_F64A1871C5AC5ACE_OFFSET UNITYSDK_OFFSET(0x17B2DDA0)
#define CLASS_1_6A016EB9D6190C4D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17B2DBB0)
#define CLASS_1_6A016EB9D6190C4D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B2DF40)
#define CLASS_1_6A016EB9D6190C4D_WRITETO_OFFSET UNITYSDK_OFFSET(0x17B2DFA0)
#define CLASS_1_6A016EB9D6190C4D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B2E4A0)
#define CLASS_1_6A016EB9D6190C4D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B2DC30)
#define CLASS_1_6A016EB9D6190C4D__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2DBC0)

inline static constexpr unsigned int Class_1_6A016EB9D6190C4D_TypeDefinitionIndex = 23093;

class Class_1_6A016EB9D6190C4D : public ::System::Object
{
public:
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>** StaticGet_Field_1_4()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A016EB9D6190C4D_TypeDefinitionIndex)->GetStaticField(0x35C30);
	}
	static ::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>** StaticGet_Field_1_9()
	{
		return (::Google::Protobuf::Collections::MapField_2_Codec<::System::UInt32, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A016EB9D6190C4D_TypeDefinitionIndex)->GetStaticField(0x35C38);
	}
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0x6; // 0x0
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Field_1_10; // 0x10
	::Google::Protobuf::UnknownFieldSet* Field_1_0; // 0x18
	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_7; // 0x28
	::System::UInt32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_6A016EB9D6190C4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D__CCTOR_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_6A016EB9D6190C4D* Clone()
	{
		return ((::Class_1_6A016EB9D6190C4D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* Method_1_EA98AC27B86895E5()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_EA98AC27B86895E5_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>* Method_1_F64A1871C5AC5ACE()
	{
		return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Double>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_METHOD_1_F64A1871C5AC5ACE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_6A016EB9D6190C4D* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_6A016EB9D6190C4D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A016EB9D6190C4D*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_6A016EB9D6190C4D_MERGEFROM_1_OFFSET))(this, a1);
	}
};
