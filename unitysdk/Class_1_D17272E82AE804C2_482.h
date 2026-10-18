#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_D17272E82AE804C2_482_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C0890)
#define CLASS_1_D17272E82AE804C2_482_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C04A0)
#define CLASS_1_D17272E82AE804C2_482_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C0600)
#define CLASS_1_D17272E82AE804C2_482_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C0580)
#define CLASS_1_D17272E82AE804C2_482_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C06D0)
#define CLASS_1_D17272E82AE804C2_482_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C0A70)
#define CLASS_1_D17272E82AE804C2_482_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C0A20)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x1E8C0540)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x1E8C0560)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x1E8C0520)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_33819E510657F52F_OFFSET UNITYSDK_OFFSET(0x1E8C03E0)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x1E8C0550)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x1E8C0570)
#define CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x1E8C0530)
#define CLASS_1_D17272E82AE804C2_482_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0440)
#define CLASS_1_D17272E82AE804C2_482_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C0700)
#define CLASS_1_D17272E82AE804C2_482_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C0760)
#define CLASS_1_D17272E82AE804C2_482__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0C20)
#define CLASS_1_D17272E82AE804C2_482__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C0460)
#define CLASS_1_D17272E82AE804C2_482__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0450)

inline static constexpr unsigned int Class_1_D17272E82AE804C2_482_TypeDefinitionIndex = 29296;

class Class_1_D17272E82AE804C2_482 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_482*>** StaticGet_CHLCMCKIGKG()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_482*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D17272E82AE804C2_482_TypeDefinitionIndex)->GetStaticField(0x2D2E0);
	}
	// static const ::System::Int32 GLIJLPOGDAK = 0x2; // 0x0
	// static const ::System::Int32 MIFCIPEBBEN = 0x3; // 0x0
	// static const ::System::Int32 KCGHFLNGIGL = 0x6; // 0x0
	::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
	::System::UInt32 EJBHLLHIAOE; // 0x18
	::System::UInt32 HIOHMLINHPC; // 0x1C
	::System::UInt32 PPNELLDGNPC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_D17272E82AE804C2_482* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_482*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_482*>* Method_1_33819E510657F52F()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_D17272E82AE804C2_482*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_33819E510657F52F_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_D17272E82AE804C2_482* Clone()
	{
		return ((::Class_1_D17272E82AE804C2_482*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_D17272E82AE804C2_482* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D17272E82AE804C2_482*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_D17272E82AE804C2_482* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_482*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_D17272E82AE804C2_482_MERGEFROM_1_OFFSET))(this, a1);
	}
};
