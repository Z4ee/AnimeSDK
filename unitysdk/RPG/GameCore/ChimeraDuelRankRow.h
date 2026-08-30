#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELRANKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFCCF20)
#define RPG_GAMECORE_CHIMERADUELRANKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFCD5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRankRow_TypeDefinitionIndex = 11114;

	class ChimeraDuelRankRow : public ::System::Object
	{
	public:
		::System::String* RankIconPrefabPath; // 0x10
		::System::String* RankIconPath; // 0x18
		::System::UInt32 RankMinScore; // 0x20
		::System::UInt32 RankLevel; // 0x24
		::RPG::Client::TextID RankName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelRankRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelRankRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
