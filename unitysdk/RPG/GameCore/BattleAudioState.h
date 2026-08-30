#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_5052C2B4681AD8E4_OFFSET UNITYSDK_OFFSET(0x1CE6AC60)
#define RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_952493F0F8F4AE2B_OFFSET UNITYSDK_OFFSET(0x1CE6ACA0)
#define RPG_GAMECORE_BATTLEAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE6AC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAudioState_TypeDefinitionIndex = 22707;

	class BattleAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5052C2B4681AD8E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_5052C2B4681AD8E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_952493F0F8F4AE2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_952493F0F8F4AE2B_OFFSET))(a1, a2);
		}
	};
}
