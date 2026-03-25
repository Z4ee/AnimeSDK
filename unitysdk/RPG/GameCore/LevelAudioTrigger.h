#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1732F2D0)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1732F250)
#define RPG_GAMECORE_LEVELAUDIOTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1732F2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioTrigger_TypeDefinitionIndex = 21168;

	class LevelAudioTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Event; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudioTrigger*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudioTrigger* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOTRIGGER_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
