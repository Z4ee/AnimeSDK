#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_0D24A1B75981465B_OFFSET UNITYSDK_OFFSET(0x18BC5C70)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_6D7096C1AB6C9148_OFFSET UNITYSDK_OFFSET(0x18BC5BF0)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC5C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenMusicRhythmReadyPage_TypeDefinitionIndex = 20919;

	class OpenMusicRhythmReadyPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicValue; // 0x18
		::Il2CppArray<::System::String*>* MatchCase; // 0x20
		::Il2CppArray<::System::UInt32>* LevelId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6D7096C1AB6C9148(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMusicRhythmReadyPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_6D7096C1AB6C9148_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0D24A1B75981465B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_0D24A1B75981465B_OFFSET))(a1, a2);
		}
	};
}
