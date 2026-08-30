#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOSWITCH_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D1C9E80)
#define RPG_GAMECORE_LEVELAUDIOSWITCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1C9E40)
#define RPG_GAMECORE_LEVELAUDIOSWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C9E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioSwitch_TypeDefinitionIndex = 22258;

	class LevelAudioSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* SwitchName; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCH__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAudioSwitch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioSwitch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCH_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelAudioSwitch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSWITCH_FROMBINARYIMPL_OFFSET))(a1, a2);
		}
	};
}
