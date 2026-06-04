#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTMAILGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D32C40)
#define RPG_GAMECORE_TAROTMAILGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19D32DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotMailGroupRow_TypeDefinitionIndex = 14481;

	class TarotMailGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MailboxIDList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 ID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotMailGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotMailGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
