#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_81;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_838AF0FA954DA998;
class Class_1_B6E7D41F9A5F8DB4_1;
class Class_1_BF3E397EFAF143B7;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_869DBA9CC5AECBE5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1888BD70)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_05D02D2E66B728BC_OFFSET UNITYSDK_OFFSET(0x18889F90)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_0F147CC34BA80B35_OFFSET UNITYSDK_OFFSET(0x18889B10)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_2F351F2B4719D0A3_OFFSET UNITYSDK_OFFSET(0x18889120)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_7786D920B2E3A75C_OFFSET UNITYSDK_OFFSET(0x18889660)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x18888A60)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1888A580)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x18889ED0)
#define CLASS_1_869DBA9CC5AECBE5_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x18889000)
#define CLASS_1_869DBA9CC5AECBE5__CTOR_OFFSET UNITYSDK_OFFSET(0x18888BF0)

inline static constexpr unsigned int Class_1_869DBA9CC5AECBE5_TypeDefinitionIndex = 38585;

class Class_1_869DBA9CC5AECBE5 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x10; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_2; // 0x10
	::System::IO::MemoryStream* Field_1_3; // 0x18
	::Class_1_B6E7D41F9A5F8DB4_1* Field_1_4; // 0x20
	::System::String* Field_1_5; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_81*>* Field_1_6; // 0x30
	::Class_1_1B9BBF1B9A8CC806* Field_1_7; // 0x38
	::System::Boolean Field_1_8; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_2F351F2B4719D0A3(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_2F351F2B4719D0A3_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>* Method_1_7786D920B2E3A75C(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_7786D920B2E3A75C_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>* Method_1_0F147CC34BA80B35(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_0F147CC34BA80B35_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05D02D2E66B728BC(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_05D02D2E66B728BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_869DBA9CC5AECBE5_DISPOSE_OFFSET))(this);
	}
};
