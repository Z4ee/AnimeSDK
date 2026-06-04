#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC7FC0)
#define RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC8620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournFormulaDisplayRow_TypeDefinitionIndex = 14274;

	class RogueTournFormulaDisplayRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x10
		::System::UInt32 FormulaDisplayID; // 0x18
		::System::UInt32 HandbookUnlockDisplayID; // 0x1C
		::RPG::Client::TextID FormulaStory; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournFormulaDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournFormulaDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNFORMULADISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
