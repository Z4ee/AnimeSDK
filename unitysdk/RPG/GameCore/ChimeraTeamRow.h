#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERATEAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1880B7D0)
#define RPG_GAMECORE_CHIMERATEAMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1880BA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamRow_TypeDefinitionIndex = 12313;

	class ChimeraTeamRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* RoundTalkMap; // 0x10
		::System::String* TeamAvatarIcon; // 0x18
		::System::String* TeamName; // 0x20
		::System::String* TeamConfigJson; // 0x28
		::System::String* TeamIcon; // 0x30
		::System::UInt32 TeamID; // 0x38
		::System::UInt32 Sort; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraTeamRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTeamRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATEAMROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
