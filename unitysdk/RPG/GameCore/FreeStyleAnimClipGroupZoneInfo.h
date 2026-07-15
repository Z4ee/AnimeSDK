#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationZone; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_METHOD_2_C637B594D9705B54_OFFSET UNITYSDK_OFFSET(0x1B97E8C0)
#define RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97EA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimClipGroupZoneInfo_TypeDefinitionIndex = 15662;

	class FreeStyleAnimClipGroupZoneInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ClipNames; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* ClipHashSet; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C637B594D9705B54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimClipGroupZoneInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPGROUPZONEINFO_METHOD_2_C637B594D9705B54_OFFSET))(a1, a2);
		}
	};
}
