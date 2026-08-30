#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_METHOD_2_1313132CA92D192A_OFFSET UNITYSDK_OFFSET(0x1CE1E820)
#define RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE1E960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimatorStateCustomZoneBinding_TypeDefinitionIndex = 16160;

	class AnimatorStateCustomZoneBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10
		::System::String* CustomName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1313132CA92D192A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimatorStateCustomZoneBinding*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimatorStateCustomZoneBinding*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMATORSTATECUSTOMZONEBINDING_METHOD_2_1313132CA92D192A_OFFSET))(a1, a2);
		}
	};
}
