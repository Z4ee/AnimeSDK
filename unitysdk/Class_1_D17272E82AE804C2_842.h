#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_842_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE470A0)
#define CLASS_1_D17272E82AE804C2_842_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE46CB0)
#define CLASS_1_D17272E82AE804C2_842_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE46E10)
#define CLASS_1_D17272E82AE804C2_842_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE46D90)
#define CLASS_1_D17272E82AE804C2_842_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE46EE0)
#define CLASS_1_D17272E82AE804C2_842_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE47280)
#define CLASS_1_D17272E82AE804C2_842_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE47230)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1DE46D50)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1DE46D70)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1DE46D30)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1DE46BF0)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1DE46D60)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1DE46D80)
#define CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1DE46D40)
#define CLASS_1_D17272E82AE804C2_842_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE46C50)
#define CLASS_1_D17272E82AE804C2_842_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE46F10)
#define CLASS_1_D17272E82AE804C2_842_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE46F70)
#define CLASS_1_D17272E82AE804C2_842__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE47440)
#define CLASS_1_D17272E82AE804C2_842__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE46C70)
#define CLASS_1_D17272E82AE804C2_842__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE46C60)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_842_TypeDefinitionIndex = 31227;

class Class_1_D17272E82AE804C2_842 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_842*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_842*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_842_TypeDefinitionIndex)->GetStaticField(0x2D570);
	}
	// static const ::System::Int32 LDHNEMHEJLL = 0x1; // 0x0
	// static const ::System::Int32 MKOCMMLMFEM = 0x5; // 0x0
	// static const ::System::Int32 KOEOEHIMOEI = 0x7; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HBEJPFMACNJ; // 0x18
	::System::UInt32 KLOONINFBHK; // 0x1C
	::System::UInt32 LJDBCGPFFDH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_842* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_842*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_842*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_842*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_842* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_842*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_842* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_842*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_842* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_842*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_842_MERGEFROM_1_OFFSET))(this, a1);
	}
};
