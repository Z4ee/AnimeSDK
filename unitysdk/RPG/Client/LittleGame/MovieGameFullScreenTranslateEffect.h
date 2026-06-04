#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameFullScreenTranslateEffect_FadeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D33B7D6901AE39E9;
class Class_2_1C9DAFE8E76EE3E9;
class Class_3_7E25C9E6907AC48F;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xBE33930)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE33E10)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIMEREMOVED_OFFSET UNITYSDK_OFFSET(0xBE33D90)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIME_OFFSET UNITYSDK_OFFSET(0xBE33D00)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBE343A0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameFullScreenTranslateEffect_TypeDefinitionIndex = 71181;

	class MovieGameFullScreenTranslateEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Width; // 0x18
		::UnityEngine::Transform* MoveBoard; // 0x20
		::Class_1_D33B7D6901AE39E9* Field_5_2; // 0x28
		::Class_3_7E25C9E6907AC48F* Field_5_3; // 0x30
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect_FadeState Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x3C
		::UnityEngine::Vector3 Field_5_6; // 0x40
		::UnityEngine::Vector3 Field_5_7; // 0x4C
		::UnityEngine::Vector3 Field_5_8; // 0x58
		::Il2CppArray<::UnityEngine::Renderer*>* Field_5_9; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_7E25C9E6907AC48F* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_7E25C9E6907AC48F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_INITIALIZEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void OnFeverTime(::Class_2_1C9DAFE8E76EE3E9* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1C9DAFE8E76EE3E9*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIME_OFFSET))(this, a1, a2);
		}

		::System::Void OnFeverTimeRemoved(::Class_2_1C9DAFE8E76EE3E9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1C9DAFE8E76EE3E9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIMEREMOVED_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_LATEUPDATE_OFFSET))(this);
		}
	};
}
