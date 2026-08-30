#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF854B0)
#define RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF85AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGroupExtraConfigRow_TypeDefinitionIndex = 12861;

	class ChallengeGroupExtraConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemePosterBgPicPath; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeGroupExtraConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeGroupExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPEXTRACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
