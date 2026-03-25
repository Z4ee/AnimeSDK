#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneTransition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnimationZone; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_METHOD_2_1D94F632C9543D97_OFFSET UNITYSDK_OFFSET(0x1721ECE0)
#define RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1721EE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleAnimClipZoneInfo_TypeDefinitionIndex = 14922;

	class FreeStyleAnimClipZoneInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ClipName; // 0x10
		::RPG::GameCore::AnimZoneTransition TransitionType; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimationZone*>* ZoneList; // 0x20
		::System::Int32 ClipHash; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D94F632C9543D97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleAnimClipZoneInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleAnimClipZoneInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLEANIMCLIPZONEINFO_METHOD_2_1D94F632C9543D97_OFFSET))(a1, a2);
		}
	};
}
