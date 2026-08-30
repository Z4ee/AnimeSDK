#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E335DA0)
#define RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E335FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterChallengeRow_TypeDefinitionIndex = 11137;

	class ChimeraDuelMasterChallengeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PresetIDList; // 0x10
		::System::String* MasterHeadIconPath; // 0x18
		::System::UInt32 ChallengeID; // 0x20
		::System::UInt32 MasterID; // 0x24
		::System::UInt32 MasterRankLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERCHALLENGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
