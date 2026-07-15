#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYSERIALBELLS_METHOD_3_AD20929A8912B5BD_OFFSET UNITYSDK_OFFSET(0x1BA077F0)
#define RPG_GAMECORE_PLAYSERIALBELLS_METHOD_3_B9DBB579ED6A2A20_OFFSET UNITYSDK_OFFSET(0x1BA07840)
#define RPG_GAMECORE_PLAYSERIALBELLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA07830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySerialBells_TypeDefinitionIndex = 21386;

	class PlaySerialBells : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SoundEvent; // 0x18
		::System::Int32 LoopTimes; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AD20929A8912B5BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySerialBells*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySerialBells*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS_METHOD_3_AD20929A8912B5BD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9DBB579ED6A2A20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlaySerialBells* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLS_METHOD_3_B9DBB579ED6A2A20_OFFSET))(a1, a2);
		}
	};
}
