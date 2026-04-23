#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_82;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_378A705F2302A8CA;
class Class_1_B6E7D41F9A5F8DB4_1;
class Class_1_E61B6BD5F01F8A04;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_81D6672D0DFA2169_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B55E30)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_0261A5BE648E23F2_OFFSET UNITYSDK_OFFSET(0x17B55710)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_2306442DD3363ADB_OFFSET UNITYSDK_OFFSET(0x17B69250)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17B68A70)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x17B69180)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_A053F9BF40FAA5F0_OFFSET UNITYSDK_OFFSET(0x17B68E70)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x17B69590)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_B325FC876562A5C3_OFFSET UNITYSDK_OFFSET(0x17B68BE0)
#define CLASS_1_81D6672D0DFA2169_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x17B68AC0)
#define CLASS_1_81D6672D0DFA2169__CTOR_OFFSET UNITYSDK_OFFSET(0x17B555A0)

inline static constexpr unsigned int Class_1_81D6672D0DFA2169_TypeDefinitionIndex = 37848;

class Class_1_81D6672D0DFA2169 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_6 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0x10; // 0x0
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x10
	::Il2CppArray<::Class_0_16E4307DCC419505_82*>* Field_1_2; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_8; // 0x20
	::System::IO::MemoryStream* Field_1_5; // 0x28
	::System::String* Field_1_0; // 0x30
	::Class_1_B6E7D41F9A5F8DB4_1* Field_1_4; // 0x38
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_0261A5BE648E23F2(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_0261A5BE648E23F2_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>* Method_1_B325FC876562A5C3(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_E61B6BD5F01F8A04*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_B325FC876562A5C3_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>* Method_1_A053F9BF40FAA5F0(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_A053F9BF40FAA5F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2306442DD3363ADB(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_2306442DD3363ADB_OFFSET))(this, a1);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81D6672D0DFA2169_DISPOSE_OFFSET))(this);
	}
};
