#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_810_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DCE90)
#define CLASS_1_D17272E82AE804C2_810_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DCAA0)
#define CLASS_1_D17272E82AE804C2_810_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DCC00)
#define CLASS_1_D17272E82AE804C2_810_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DCB80)
#define CLASS_1_D17272E82AE804C2_810_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DCCD0)
#define CLASS_1_D17272E82AE804C2_810_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DD070)
#define CLASS_1_D17272E82AE804C2_810_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DD020)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E4DCB40)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E4DCB60)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E4DCB20)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E4DC9E0)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E4DCB50)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E4DCB70)
#define CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E4DCB30)
#define CLASS_1_D17272E82AE804C2_810_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DCA40)
#define CLASS_1_D17272E82AE804C2_810_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DCD00)
#define CLASS_1_D17272E82AE804C2_810_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DCD60)
#define CLASS_1_D17272E82AE804C2_810__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD210)
#define CLASS_1_D17272E82AE804C2_810__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DCA60)
#define CLASS_1_D17272E82AE804C2_810__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DCA50)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_810_TypeDefinitionIndex = 31477;

class Class_1_D17272E82AE804C2_810 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_810_TypeDefinitionIndex)->GetStaticField(0x20E60);
	}
	// static const ::System::Int32 BDDGFOPHBML = 0x2; // 0x0
	// static const ::System::Int32 AKFFJEHMCCB = 0x3; // 0x0
	// static const ::System::Int32 MOBAGOHLJCH = 0xE; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 HHCEMNIBHIE; // 0x18
	::System::UInt32 LHDGGNKAOHJ; // 0x1C
	::System::UInt32 GEMFJILOPLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_810*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_810* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_810*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_810* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_810*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_810_MERGEFROM_1_OFFSET))(this, a1);
	}
};
