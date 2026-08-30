#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MONOPOLYQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1CA450)
#define RPG_GAMECORE_MONOPOLYQUESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CAB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuestRow_TypeDefinitionIndex = 11986;

	class MonopolyQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyQuestRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyQuestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
