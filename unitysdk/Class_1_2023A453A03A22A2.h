#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_386F69445B9E38D2;
namespace RPG::Client { class MessageContentBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2023A453A03A22A2_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0x164D7830)
#define CLASS_1_2023A453A03A22A2_GET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0x164D7810)
#define CLASS_1_2023A453A03A22A2_GET_ID_OFFSET UNITYSDK_OFFSET(0x164D77F0)
#define CLASS_1_2023A453A03A22A2_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x164D7840)
#define CLASS_1_2023A453A03A22A2_GET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0x164D7850)
#define CLASS_1_2023A453A03A22A2_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x164D7870)
#define CLASS_1_2023A453A03A22A2_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x164D7890)
#define CLASS_1_2023A453A03A22A2_METHOD_1_3845AD389B8E1E47_OFFSET UNITYSDK_OFFSET(0x164D79E0)
#define CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x164D7940)
#define CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x164D7990)
#define CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x164D78F0)
#define CLASS_1_2023A453A03A22A2_METHOD_1_6905B0491E7122CF_1_OFFSET UNITYSDK_OFFSET(0x19B3DCB0)
#define CLASS_1_2023A453A03A22A2_METHOD_1_6905B0491E7122CF_OFFSET UNITYSDK_OFFSET(0x164D7BF0)
#define CLASS_1_2023A453A03A22A2_METHOD_1_7952C32242C5A7A5_OFFSET UNITYSDK_OFFSET(0x164D7AF0)
#define CLASS_1_2023A453A03A22A2_METHOD_1_BDE3028FCE2D9EC3_OFFSET UNITYSDK_OFFSET(0x19B3DE10)
#define CLASS_1_2023A453A03A22A2_SET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0x164D7820)
#define CLASS_1_2023A453A03A22A2_SET_ID_OFFSET UNITYSDK_OFFSET(0x164D7800)
#define CLASS_1_2023A453A03A22A2_SET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0x164D7860)
#define CLASS_1_2023A453A03A22A2_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x164D7880)
#define CLASS_1_2023A453A03A22A2__CTOR_OFFSET UNITYSDK_OFFSET(0x164D76C0)

inline static constexpr unsigned int Class_1_2023A453A03A22A2_TypeDefinitionIndex = 78965;

class Class_1_2023A453A03A22A2 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* _NextItemIDs_k__BackingField; // 0x10
	::RPG::Client::MessageContentBlock* _ContentBlock_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x20
	::RPG::GameCore::LimaoNewsMessageSenderType _Sender_k__BackingField; // 0x28
	::System::Boolean _IsLastMessage_k__BackingField; // 0x2C
	::System::UInt32 _ID_k__BackingField; // 0x30

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::MessageContentBlock* get_ContentBlock()
	{
		return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_CONTENTBLOCK_OFFSET))(this);
	}

	::System::Void set_ContentBlock(::RPG::Client::MessageContentBlock* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_SET_CONTENTBLOCK_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_BLOCKS_OFFSET))(this);
	}

	::System::Boolean get_IsLastMessage()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_ISLASTMESSAGE_OFFSET))(this);
	}

	::Il2CppArray<::System::UInt32>* get_NextItemIDs()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_NEXTITEMIDS_OFFSET))(this);
	}

	::System::Void set_NextItemIDs(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_SET_NEXTITEMIDS_OFFSET))(this, a1);
	}

	::RPG::GameCore::LimaoNewsMessageSenderType get_Sender()
	{
		return ((::RPG::GameCore::LimaoNewsMessageSenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_GET_SENDER_OFFSET))(this);
	}

	::System::Void set_Sender(::RPG::GameCore::LimaoNewsMessageSenderType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsMessageSenderType))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_SET_SENDER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Boolean Method_1_3845AD389B8E1E47()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_3845AD389B8E1E47_OFFSET))(this);
	}

	::System::UInt32 Method_1_7952C32242C5A7A5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_7952C32242C5A7A5_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_6905B0491E7122CF()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_6905B0491E7122CF_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_6905B0491E7122CF_1()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_6905B0491E7122CF_1_OFFSET))(this);
	}

	::Class_1_386F69445B9E38D2* Method_1_BDE3028FCE2D9EC3()
	{
		return ((::Class_1_386F69445B9E38D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2023A453A03A22A2_METHOD_1_BDE3028FCE2D9EC3_OFFSET))(this);
	}
};
