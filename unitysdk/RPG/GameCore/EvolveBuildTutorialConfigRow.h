#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D07C620)
#define RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D07CD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildTutorialConfigRow_TypeDefinitionIndex = 11418;

	class EvolveBuildTutorialConfigRow : public ::System::Object
	{
	public:
		::System::String* TutorialID; // 0x10
		::System::UInt32 WeaponLevel; // 0x18
		::RPG::GameCore::EvolveBuildSeason Season; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 StageMergedID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EvolveBuildTutorialConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EvolveBuildTutorialConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDTUTORIALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
