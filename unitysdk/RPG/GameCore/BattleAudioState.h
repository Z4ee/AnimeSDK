#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_18FCD5225F36B89F_OFFSET UNITYSDK_OFFSET(0x194C31B0)
#define RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_952493F0F8F4AE2B_OFFSET UNITYSDK_OFFSET(0x194C3230)
#define RPG_GAMECORE_BATTLEAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x194C3200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAudioState_TypeDefinitionIndex = 21711;

	class BattleAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18FCD5225F36B89F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_18FCD5225F36B89F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_952493F0F8F4AE2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattleAudioState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAUDIOSTATE_METHOD_3_952493F0F8F4AE2B_OFFSET))(a1, a2);
		}
	};
}
