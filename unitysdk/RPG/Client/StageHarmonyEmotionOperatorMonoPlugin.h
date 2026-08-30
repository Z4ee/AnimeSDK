#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

namespace RPG::Client { class StageHarmonyEmotionOperatorBehavior; }
namespace RPG::Client { class StageHarmonyEmotionOperatorBehavior_TransformOperator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE0CCCB0)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_METHOD_7_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0xE0CCC10)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_METHOD_7_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE0CCB70)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0CCD00)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyEmotionOperatorMonoPlugin_TypeDefinitionIndex = 70934;

	class StageHarmonyEmotionOperatorMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonyEmotionOperatorBehavior*>
	{
	public:
		::System::Boolean EnableLookAt; // 0x30
		::System::Single startLookatDistance; // 0x34
		::System::Single eyeOpeningDuration; // 0x38
		::System::Single gazetAtDistance; // 0x3C
		::System::Single gazeAtRange; // 0x40
		::System::Boolean EnableScalingUp; // 0x44
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonyEmotionOperatorBehavior_TransformOperator*>* PopUpOperators; // 0x48
		::System::Boolean TestRunningInEditor; // 0x50
		::System::Single timedebug; // 0x54
		::UnityEngine::GameObject* DistanceDebuger; // 0x58
		::System::Single distancedebug; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_METHOD_7_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_7_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_METHOD_7_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
