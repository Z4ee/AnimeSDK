#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_27.h"
#include "unitysdk/Enum_3_DB663931210BBC27_53.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define CLASS_1_1EC1D7523DB92148_3_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19BCFEB0)
#define CLASS_1_1EC1D7523DB92148_3_CLONE_OFFSET UNITYSDK_OFFSET(0x19BCFA60)
#define CLASS_1_1EC1D7523DB92148_3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19BCFC10)
#define CLASS_1_1EC1D7523DB92148_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x19BCFB70)
#define CLASS_1_1EC1D7523DB92148_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19BCFCB0)
#define CLASS_1_1EC1D7523DB92148_3_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19BD0210)
#define CLASS_1_1EC1D7523DB92148_3_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19BD01B0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x19BCFAD0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_2_OFFSET UNITYSDK_OFFSET(0x19BCFB30)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x19BCFAB0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_3DACC45AC8150727_1_OFFSET UNITYSDK_OFFSET(0x19BCFB60)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x19BCFB00)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_685747EAFC9F7288_OFFSET UNITYSDK_OFFSET(0x19BCF9D0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET UNITYSDK_OFFSET(0x19BCFAE0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET UNITYSDK_OFFSET(0x19BCFB40)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x19BCFAC0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0x19BCFB50)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x19BCFAF0)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x19BCFB20)
#define CLASS_1_1EC1D7523DB92148_3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x19BCFB10)
#define CLASS_1_1EC1D7523DB92148_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19BCFA00)
#define CLASS_1_1EC1D7523DB92148_3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19BCFCF0)
#define CLASS_1_1EC1D7523DB92148_3_WRITETO_OFFSET UNITYSDK_OFFSET(0x19BCFD50)
#define CLASS_1_1EC1D7523DB92148_3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD02E0)
#define CLASS_1_1EC1D7523DB92148_3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BCFA20)
#define CLASS_1_1EC1D7523DB92148_3__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCFA10)

inline static constexpr unsigned int Class_1_1EC1D7523DB92148_3_TypeDefinitionIndex = 30620;

class Class_1_1EC1D7523DB92148_3 : public ::System::Object
{
public:
	static ::Google::Protobuf::MessageParser_1<::Class_1_1EC1D7523DB92148_3*>** StaticGet_Field_1_0()
	{
		return (::Google::Protobuf::MessageParser_1<::Class_1_1EC1D7523DB92148_3*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1EC1D7523DB92148_3_TypeDefinitionIndex)->GetStaticField(0x232C0);
	}
	// static const ::System::Int32 Field_1_2 = 0x7; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xC; // 0x0
	// static const ::System::Int32 Field_1_6 = 0x5; // 0x0
	// static const ::System::Int32 Field_1_8 = 0xD; // 0x0
	// static const ::System::Int32 Field_1_10 = 0x4; // 0x0
	// static const ::System::Int32 Field_1_12 = 0x3; // 0x0
	::Google::Protobuf::UnknownFieldSet* Field_1_1; // 0x10
	::Enum_3_DB663931210BBC27_53 Field_1_13; // 0x18
	::Enum_3_4608E37A1B3D374A_27 Field_1_7; // 0x1C
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::Boolean Field_1_9; // 0x28
	::System::UInt32 Field_1_11; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_1EC1D7523DB92148_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3__CTOR_1_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3__CCTOR_OFFSET))();
	}

	static ::Google::Protobuf::MessageParser_1<::Class_1_1EC1D7523DB92148_3*>* Method_1_685747EAFC9F7288()
	{
		return ((::Google::Protobuf::MessageParser_1<::Class_1_1EC1D7523DB92148_3*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_685747EAFC9F7288_OFFSET))();
	}

	::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
	{
		return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
	}

	::Class_1_1EC1D7523DB92148_3* Clone()
	{
		return ((::Class_1_1EC1D7523DB92148_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_CLONE_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_1_OFFSET))(this, a1);
	}

	::Enum_3_4608E37A1B3D374A_27 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_4608E37A1B3D374A_27(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_4608E37A1B3D374A_27 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_27))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_02A3D10A9D535169_2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_02A3D10A9D535169_2_OFFSET))(this);
	}

	::System::Void Method_1_7786DC814C2FC3BE_2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_7786DC814C2FC3BE_2_OFFSET))(this, a1);
	}

	::Enum_3_DB663931210BBC27_53 Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_DB663931210BBC27_53(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}

	::System::Void Method_1_3DACC45AC8150727_1(::Enum_3_DB663931210BBC27_53 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_53))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_METHOD_1_3DACC45AC8150727_1_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_1EC1D7523DB92148_3* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_GETHASHCODE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_TOSTRING_OFFSET))(this);
	}

	::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_WRITETO_OFFSET))(this, a1);
	}

	::System::Int32 CalculateSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_CALCULATESIZE_OFFSET))(this);
	}

	::System::Void MergeFrom(::Class_1_1EC1D7523DB92148_3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1EC1D7523DB92148_3*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_MERGEFROM_OFFSET))(this, a1);
	}

	::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLASS_1_1EC1D7523DB92148_3_MERGEFROM_1_OFFSET))(this, a1);
	}
};
