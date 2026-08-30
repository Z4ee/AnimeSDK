#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmotionEnum.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_METHOD_3_02A52FFE024D9438_OFFSET UNITYSDK_OFFSET(0x1D0A54B0)
#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_METHOD_3_3CA38A54C0E3D4EB_OFFSET UNITYSDK_OFFSET(0x1D0A54F0)
#define RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A54E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChenLingEmotionAudioPostEventAction_TypeDefinitionIndex = 18509;

	class FiveDimChenLingEmotionAudioPostEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::Il2CppArray<::RPG::GameCore::EmotionEnum>* EmotionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_02A52FFE024D9438(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_METHOD_3_02A52FFE024D9438_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CA38A54C0E3D4EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCHENLINGEMOTIONAUDIOPOSTEVENTACTION_METHOD_3_3CA38A54C0E3D4EB_OFFSET))(a1, a2);
		}
	};
}
