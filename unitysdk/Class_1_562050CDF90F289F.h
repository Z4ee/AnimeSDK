#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_562050CDF90F289F_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8EF910)
#define CLASS_1_562050CDF90F289F_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8EF3F0)
#define CLASS_1_562050CDF90F289F_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8EF5A0)
#define CLASS_1_562050CDF90F289F_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8EF470)
#define CLASS_1_562050CDF90F289F_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8EF690)
#define CLASS_1_562050CDF90F289F_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8EFAC0)
#define CLASS_1_562050CDF90F289F_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8EFA70)
#define CLASS_1_562050CDF90F289F_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E8EF2A0)
#define CLASS_1_562050CDF90F289F_METHOD_1_4C4B9DFE092840D4_OFFSET UNITYSDK_OFFSET(0x1E8EF450)
#define CLASS_1_562050CDF90F289F_METHOD_1_554199E0076172C5_OFFSET UNITYSDK_OFFSET(0x1E8EF460)
#define CLASS_1_562050CDF90F289F_METHOD_1_7ADD5F1F5E247E3B_OFFSET UNITYSDK_OFFSET(0x1E8EF440)
#define CLASS_1_562050CDF90F289F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8EF300)
#define CLASS_1_562050CDF90F289F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8EF7A0)
#define CLASS_1_562050CDF90F289F_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8EF800)
#define CLASS_1_562050CDF90F289F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EFCA0)
#define CLASS_1_562050CDF90F289F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8EF360)
#define CLASS_1_562050CDF90F289F__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EF310)

inline static constexpr unsigned int Class_1_562050CDF90F289F_TypeDefinitionIndex = 31566;

class Class_1_562050CDF90F289F : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_562050CDF90F289F*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_562050CDF90F289F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_562050CDF90F289F_TypeDefinitionIndex)->GetStaticField(0x52780);
	}
	static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NOHPCJNNMLG()
	{
		return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_562050CDF90F289F_TypeDefinitionIndex)->GetStaticField(0x52788);
	}
	// static const ::System::Int32 FIEMKPOELCD = 0x8; // 0x0
	// static const ::System::Int32 CEDGBLDODHO = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KLDLDNJOCHJ; // 0x18
	::System::Int64 MFHNPAODGGN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_562050CDF90F289F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_562050CDF90F289F*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_562050CDF90F289F*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_562050CDF90F289F*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_562050CDF90F289F* Clone()
	{
		return ((::Class_1_562050CDF90F289F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_CLONE_OFFSET))(this);
	}

	::System::Int64 Method_1_7ADD5F1F5E247E3B()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_METHOD_1_7ADD5F1F5E247E3B_OFFSET))(this);
	}

	::System::Void Method_1_4C4B9DFE092840D4(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_METHOD_1_4C4B9DFE092840D4_OFFSET))(this, a1);
	}

	::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* Method_1_554199E0076172C5()
	{
		return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_METHOD_1_554199E0076172C5_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_562050CDF90F289F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_562050CDF90F289F*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_562050CDF90F289F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_562050CDF90F289F*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_562050CDF90F289F_MERGEFROM_1_OFFSET))(this, a1);
	}
};
