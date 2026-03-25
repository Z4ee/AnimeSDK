#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYANIMATIONCLIP_METHOD_3_30210606B87C53CC_OFFSET UNITYSDK_OFFSET(0x174C1290)
#define RPG_GAMECORE_PLAYANIMATIONCLIP_METHOD_3_49EA3C5581A120DA_OFFSET UNITYSDK_OFFSET(0x174C1210)
#define RPG_GAMECORE_PLAYANIMATIONCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x174C1260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayAnimationClip_TypeDefinitionIndex = 18568;

	class PlayAnimationClip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::String* Path; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_49EA3C5581A120DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAnimationClip*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAnimationClip*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP_METHOD_3_49EA3C5581A120DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30210606B87C53CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayAnimationClip* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP_METHOD_3_30210606B87C53CC_OFFSET))(a1, a2);
		}
	};
}
