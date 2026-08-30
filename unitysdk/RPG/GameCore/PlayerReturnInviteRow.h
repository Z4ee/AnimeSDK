#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNINVITEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7AFAD0)
#define RPG_GAMECORE_PLAYERRETURNINVITEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnInviteRow_TypeDefinitionIndex = 14375;

	class PlayerReturnInviteRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayRewardItems; // 0x10
		::System::String* APILabel; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 ActivityModuleID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNINVITEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerReturnInviteRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerReturnInviteRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNINVITEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
