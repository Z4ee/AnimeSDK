#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenChimeraWaveConfig; }
namespace RPG::GameCore { class HipplenGameAtmosphereConfig; }
namespace RPG::GameCore { class HipplenMiniGameLoadCharacter; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_METHOD_2_5D777E53259E3CB0_OFFSET UNITYSDK_OFFSET(0x1B685E50)
#define RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6861A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenCountingChimeraMiniGameConfig_TypeDefinitionIndex = 16135;

	class HipplenCountingChimeraMiniGameConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TimelinePath; // 0x10
		::Il2CppArray<::RPG::GameCore::HipplenChimeraWaveConfig*>* ChimeraWaveList; // 0x18
		::System::UInt32 QuizChimeraID; // 0x20
		::Il2CppArray<::System::Int32>* InCorrectAnswers; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnInit; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x38
		::RPG::GameCore::HipplenGameAtmosphereConfig* AtmosphereConfig; // 0x40
		::Il2CppArray<::RPG::GameCore::HipplenMiniGameLoadCharacter*>* LoadCharacterList; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D777E53259E3CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenCountingChimeraMiniGameConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenCountingChimeraMiniGameConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENCOUNTINGCHIMERAMINIGAMECONFIG_METHOD_2_5D777E53259E3CB0_OFFSET))(a1, a2);
		}
	};
}
