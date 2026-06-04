#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_81;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_838AF0FA954DA998;
class Class_1_B6E7D41F9A5F8DB4;
class Class_1_BF3E397EFAF143B7;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_4975F51D6A28CA98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188ABAF0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_0F147CC34BA80B35_OFFSET UNITYSDK_OFFSET(0x188A9DB0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_51E2051F9A44A10F_OFFSET UNITYSDK_OFFSET(0x188A95A0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_7786D920B2E3A75C_1_OFFSET UNITYSDK_OFFSET(0x188A9A20)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_7786D920B2E3A75C_OFFSET UNITYSDK_OFFSET(0x188A96A0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x188A91F0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x188AA590)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x188AA0C0)
#define CLASS_1_4975F51D6A28CA98_METHOD_1_C3B16D8A3C1F9B56_OFFSET UNITYSDK_OFFSET(0x188AA180)
#define CLASS_1_4975F51D6A28CA98__CTOR_OFFSET UNITYSDK_OFFSET(0x188A9240)

inline static constexpr unsigned int Class_1_4975F51D6A28CA98_TypeDefinitionIndex = 38584;

class Class_1_4975F51D6A28CA98 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x10; // 0x0
	::System::String* Field_1_2; // 0x10
	::Class_1_B6E7D41F9A5F8DB4* Field_1_3; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_4; // 0x20
	::Il2CppArray<::Class_0_16E4307DCC419505_81*>* Field_1_5; // 0x28
	::Class_1_1B9BBF1B9A8CC806* Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_51E2051F9A44A10F()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_51E2051F9A44A10F_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_7786D920B2E3A75C(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_7786D920B2E3A75C_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>* Method_1_7786D920B2E3A75C_1(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_BF3E397EFAF143B7*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_7786D920B2E3A75C_1_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>* Method_1_0F147CC34BA80B35(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_838AF0FA954DA998*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_0F147CC34BA80B35_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C3B16D8A3C1F9B56(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_C3B16D8A3C1F9B56_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4975F51D6A28CA98_DISPOSE_OFFSET))(this);
	}
};
