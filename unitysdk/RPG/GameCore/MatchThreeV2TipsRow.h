#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_ABE8D38DFA4EFF6A;

#define RPG_GAMECORE_MATCHTHREEV2TIPSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AC7310)
#define RPG_GAMECORE_MATCHTHREEV2TIPSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC7530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2TipsRow_TypeDefinitionIndex = 11379;

	class MatchThreeV2TipsRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_ABE8D38DFA4EFF6A*>* Condition; // 0x10
		::System::UInt32 Weight; // 0x18
		::System::UInt32 TipsID; // 0x1C
		::RPG::Client::TextID TipsDesc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2TIPSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MatchThreeV2TipsRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MatchThreeV2TipsRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEV2TIPSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
