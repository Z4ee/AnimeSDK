#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_100;
class Class_1_0AF9A5CCF0C0D579_1;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_838AF0FA954DA998;
class Class_1_BF3E397EFAF143B7;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_A9D78DB0603F657A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E26F90)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x12E24F50)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_1ECC242658BCEB1C_OFFSET UNITYSDK_OFFSET(0x12E24420)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_20D03B249439DD92_OFFSET UNITYSDK_OFFSET(0x12E246B0)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_749F4AA747DBDEA7_OFFSET UNITYSDK_OFFSET(0x12E23980)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12E234F0)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_A1339EC5662B08C8_OFFSET UNITYSDK_OFFSET(0x12E23DE0)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_B17926DB102ADEB5_OFFSET UNITYSDK_OFFSET(0x12E23A10)
#define CLASS_1_A9D78DB0603F657A_METHOD_1_C391C8EAFA3E6FB7_OFFSET UNITYSDK_OFFSET(0x12E240F0)
#define CLASS_1_A9D78DB0603F657A__CTOR_OFFSET UNITYSDK_OFFSET(0x12E23680)

inline static constexpr unsigned int Class_1_A9D78DB0603F657A_TypeDefinitionIndex = 39393;

class Class_1_A9D78DB0603F657A : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x10; // 0x0
	::System::String* Field_1_2; // 0x10
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x18
	::Class_1_0AF9A5CCF0C0D579_1* Field_1_4; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_100*>* Field_1_5; // 0x28
	::System::IO::MemoryStream* Field_1_6; // 0x30
	::Il2CppArray<::System::Byte>* Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579_1*>* Method_1_749F4AA747DBDEA7()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_749F4AA747DBDEA7_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579_1*>* Method_1_B17926DB102ADEB5(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_0AF9A5CCF0C0D579_1*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_B17926DB102ADEB5_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>* Method_1_A1339EC5662B08C8(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_A1339EC5662B08C8_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>* Method_1_C391C8EAFA3E6FB7(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_C391C8EAFA3E6FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1ECC242658BCEB1C(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_1ECC242658BCEB1C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_20D03B249439DD92(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_20D03B249439DD92_OFFSET))(this, a1);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9D78DB0603F657A_DISPOSE_OFFSET))(this);
	}
};
