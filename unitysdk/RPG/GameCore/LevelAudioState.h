#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1732EEB0)
#define RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1732EE30)
#define RPG_GAMECORE_LEVELAUDIOSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1732EE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudioState_TypeDefinitionIndex = 22064;

	class LevelAudioState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GroupName; // 0x18
		::RPG::GameCore::DynamicString* StateName; // 0x20
		::System::Boolean SaveToCustomString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudioState*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARY_OFFSET))(array, val);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::LevelAudioState* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelAudioState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIOSTATE_FROMBINARYIMPL_OFFSET))(array, val);
		}
	};
}
