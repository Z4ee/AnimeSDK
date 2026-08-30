#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3BB1AA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x3AA4710)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BB1BF0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB1B90)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_FROMUID_OFFSET UNITYSDK_OFFSET(0x1CBDBC90)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB1B80)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19050)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CBDBFC0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CBDBFA0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x3BB1B10)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BB1B00)
#define RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB0)

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinBattleCardIdentifier_TypeDefinitionIndex = 79779;

	struct alignas(4) FateRinBattleCardIdentifier
	{
		::System::UInt32 _Value_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_SET_VALUE_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier FromUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_FROMUID_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a1, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a1, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinBattleCardIdentifier))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Void Deconstruct(::System::UInt32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CARD_FATERINBATTLECARDIDENTIFIER_DECONSTRUCT_OFFSET))(this, a1);
		}
	};
}
