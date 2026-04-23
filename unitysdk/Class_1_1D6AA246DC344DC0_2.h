#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1D6AA246DC344DC0_2_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19996B50)
#define CLASS_1_1D6AA246DC344DC0_2_CLONE_OFFSET UNITYSDK_OFFSET(0x19996580)
#define CLASS_1_1D6AA246DC344DC0_2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19996850)
#define CLASS_1_1D6AA246DC344DC0_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x19996760)
#define CLASS_1_1D6AA246DC344DC0_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19996910)
#define CLASS_1_1D6AA246DC344DC0_2_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19996E40)
#define CLASS_1_1D6AA246DC344DC0_2_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19996D60)
#define CLASS_1_1D6AA246DC344DC0_2_METHOD_1_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x199966B0)
#define CLASS_1_1D6AA246DC344DC0_2_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19996600)
#define CLASS_1_1D6AA246DC344DC0_2_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x199964A0)
#define CLASS_1_1D6AA246DC344DC0_2_METHOD_1_9CE3056B66B7573D_1_OFFSET UNITYSDK_OFFSET(0x199966C0)
#define CLASS_1_1D6AA246DC344DC0_2_METHOD_1_9CE3056B66B7573D_OFFSET UNITYSDK_OFFSET(0x19996610)
#define CLASS_1_1D6AA246DC344DC0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19996500)
#define CLASS_1_1D6AA246DC344DC0_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19996A50)
#define CLASS_1_1D6AA246DC344DC0_2_WRITETO_OFFSET UNITYSDK_OFFSET(0x19996AB0)
#define CLASS_1_1D6AA246DC344DC0_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19996FE0)
#define CLASS_1_1D6AA246DC344DC0_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19996530)
#define CLASS_1_1D6AA246DC344DC0_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19996510)

inline static constexpr unsigned int Class_1_1D6AA246DC344DC0_2_TypeDefinitionIndex = 27975;

class Class_1_1D6AA246DC344DC0_2 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1D6AA246DC344DC0_2*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1D6AA246DC344DC0_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D6AA246DC344DC0_2_TypeDefinitionIndex)->GetStaticField(0x63FB0);
	}
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xD; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::System::String* Field_1_5; // 0x18
	::System::String* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1D6AA246DC344DC0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D6AA246DC344DC0_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1D6AA246DC344DC0_2*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1D6AA246DC344DC0_2*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1D6AA246DC344DC0_2* Clone()
	{
		return ((::Class_1_1D6AA246DC344DC0_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_CLONE_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_METHOD_1_9CE3056B66B7573D_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_METHOD_1_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_1_9CE3056B66B7573D_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_METHOD_1_9CE3056B66B7573D_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1D6AA246DC344DC0_2* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1D6AA246DC344DC0_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1D6AA246DC344DC0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1D6AA246DC344DC0_2*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1D6AA246DC344DC0_2_MERGEFROM_1_OFFSET))(this, a1);
	}
};
