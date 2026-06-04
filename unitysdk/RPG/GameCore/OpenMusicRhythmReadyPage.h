#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_28ABD550B0C49E4D_OFFSET UNITYSDK_OFFSET(0x199D7730)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_F83897564E362D04_OFFSET UNITYSDK_OFFSET(0x199D77B0)
#define RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x199D7780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenMusicRhythmReadyPage_TypeDefinitionIndex = 20832;

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

		static ::System::Void Method_3_28ABD550B0C49E4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMusicRhythmReadyPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_28ABD550B0C49E4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F83897564E362D04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMUSICRHYTHMREADYPAGE_METHOD_3_F83897564E362D04_OFFSET))(a1, a2);
		}
	};
}
