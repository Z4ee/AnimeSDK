#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_82;
class Class_1_1B9BBF1B9A8CC806;
class Class_1_378A705F2302A8CA;
class Class_1_984932EA51116DBA;
class Class_1_B6E7D41F9A5F8DB4_1;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }
namespace System::IO { class MemoryStream; }

#define CLASS_1_B819274EE4BCD0CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164BED80)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_05D02D2E66B728BC_OFFSET UNITYSDK_OFFSET(0x164BCF90)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_6539883FDABE4F6C_OFFSET UNITYSDK_OFFSET(0x164BC240)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164BBCC0)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x164BD460)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x164BCEC0)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_B325FC876562A5C3_OFFSET UNITYSDK_OFFSET(0x164BCC50)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_CB183F6576A61610_OFFSET UNITYSDK_OFFSET(0x164BC7A0)
#define CLASS_1_B819274EE4BCD0CE_METHOD_1_D38C35AD92DD9A26_OFFSET UNITYSDK_OFFSET(0x164BC120)
#define CLASS_1_B819274EE4BCD0CE__CTOR_OFFSET UNITYSDK_OFFSET(0x164BBD10)

inline static constexpr unsigned int Class_1_B819274EE4BCD0CE_TypeDefinitionIndex = 32128;

class Class_1_B819274EE4BCD0CE : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_6 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0x10; // 0x0
	::Il2CppArray<::System::Byte>* Field_1_8; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x20
	::Class_1_B6E7D41F9A5F8DB4_1* Field_1_4; // 0x28
	::Il2CppArray<::Class_0_16E4307DCC419505_82*>* Field_1_2; // 0x30
	::System::IO::MemoryStream* Field_1_5; // 0x38
	::System::Boolean Field_1_1; // 0x40

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_D38C35AD92DD9A26()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_D38C35AD92DD9A26_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>* Method_1_6539883FDABE4F6C(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4_1*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_6539883FDABE4F6C_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_984932EA51116DBA*>* Method_1_CB183F6576A61610(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_984932EA51116DBA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_CB183F6576A61610_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>* Method_1_B325FC876562A5C3(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_378A705F2302A8CA*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_B325FC876562A5C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_05D02D2E66B728BC(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_05D02D2E66B728BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B819274EE4BCD0CE_DISPOSE_OFFSET))(this);
	}
};
