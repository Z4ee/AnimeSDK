#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D18F1D061EEF5E67.h"
#include "unitysdk/System/Object.h"

class Class_1_077219EE5F3510E3;
class Class_2_14986121AA61AD99;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_13897C6414229108_METHOD_1_AE946DBF6F46E0F2_OFFSET UNITYSDK_OFFSET(0x14BA6440)
#define CLASS_1_13897C6414229108_METHOD_1_D4506E2299C17A75_OFFSET UNITYSDK_OFFSET(0x14BA5620)
#define CLASS_1_13897C6414229108_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x14BA63D0)
#define CLASS_1_13897C6414229108_METHOD_1_FE794B7E4E441446_OFFSET UNITYSDK_OFFSET(0x14BA61D0)
#define CLASS_1_13897C6414229108__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA5440)

inline static constexpr unsigned int Class_1_13897C6414229108_TypeDefinitionIndex = 81081;

class Class_1_13897C6414229108 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_D18F1D061EEF5E67>* Field_1_19; // 0x10
	::MoleMole::Config::ConfigPosRot* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_15; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_13; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_14; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_1_11; // 0x40
	::System::String* Field_1_6; // 0x48
	::System::Int32 Field_1_2; // 0x50
	::System::Boolean Field_1_8; // 0x54
	::System::Boolean Field_1_9; // 0x55
	::System::Boolean Field_1_10; // 0x56
	::System::Single Field_1_0; // 0x58
	::System::Single Field_1_7; // 0x5C
	::System::Int32 Field_1_1; // 0x60
	::System::Int32 Field_1_12; // 0x64

	::System::Void _ctor(::Class_2_14986121AA61AD99* a1, ::Class_1_077219EE5F3510E3* a2, ::Class_1_077219EE5F3510E3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_1_077219EE5F3510E3*, ::Class_1_077219EE5F3510E3*))((::PBYTE)hIl2Cpp + CLASS_1_13897C6414229108__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_FE794B7E4E441446(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_13897C6414229108_METHOD_1_FE794B7E4E441446_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D4506E2299C17A75(::Class_2_14986121AA61AD99* a1, ::Class_1_077219EE5F3510E3* a2, ::Class_1_077219EE5F3510E3* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_14986121AA61AD99*, ::Class_1_077219EE5F3510E3*, ::Class_1_077219EE5F3510E3*))((::PBYTE)hIl2Cpp + CLASS_1_13897C6414229108_METHOD_1_D4506E2299C17A75_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13897C6414229108_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Boolean Method_1_AE946DBF6F46E0F2(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13897C6414229108_METHOD_1_AE946DBF6F46E0F2_OFFSET))(this, a1);
	}
};
