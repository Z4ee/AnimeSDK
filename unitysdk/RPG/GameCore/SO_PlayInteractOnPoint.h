#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SOTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT_METHOD_4_94DDEB05A6232D54_OFFSET UNITYSDK_OFFSET(0x1B775F40)
#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT_METHOD_4_AECD304FF6A05641_OFFSET UNITYSDK_OFFSET(0x1B776820)
#define RPG_GAMECORE_SO_PLAYINTERACTONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B775F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_PlayInteractOnPoint_TypeDefinitionIndex = 19289;

	class SO_PlayInteractOnPoint : public ::RPG::GameCore::SOTaskConfig
	{
	public:
		::System::Boolean ForceStartMotion; // 0x18
		::System::Boolean ForceAtPosition; // 0x19
		::System::Boolean AlignRotation; // 0x1A
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single Duration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AECD304FF6A05641(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_PlayInteractOnPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_PlayInteractOnPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT_METHOD_4_AECD304FF6A05641_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_94DDEB05A6232D54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SO_PlayInteractOnPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SO_PlayInteractOnPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SO_PLAYINTERACTONPOINT_METHOD_4_94DDEB05A6232D54_OFFSET))(a1, a2);
		}
	};
}
