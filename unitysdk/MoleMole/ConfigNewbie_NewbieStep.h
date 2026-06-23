#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieFairy.h"
#include "unitysdk/MoleMole/ConfigNewbie_NewbieInputLogicType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigNewbie_CircleEffect; }
namespace MoleMole { class ConfigNewbie_HighLightData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGNEWBIE_NEWBIESTEP_LOADFROMBYTES_OFFSET UNITYSDK_OFFSET(0x17E458B0)
#define MOLEMOLE_CONFIGNEWBIE_NEWBIESTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x17E46820)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_NewbieStep_TypeDefinitionIndex = 49748;

	class ConfigNewbie_NewbieStep : public ::System::Object
	{
	public:
		::System::String* DescText; // 0x10
		::System::Boolean ShowMask; // 0x18
		::System::Boolean FullSceneClick; // 0x19
		::System::Int32 DelayShowTime; // 0x1C
		::System::Int32 ClickWaitTime; // 0x20
		::System::Boolean IsEnd; // 0x24
		::System::Int32 ConditionMatch; // 0x28
		::System::Boolean HighLightClick; // 0x2C
		::System::Boolean HighLightReverseImmediately; // 0x2D
		::MoleMole::ConfigNewbie_NewbieInputLogicType InputLogicType; // 0x30
		::MoleMole::ConfigNewbie_NewbieInputLogicType DisplayInputLogicType; // 0x34
		::System::Boolean SkipConsoleClick; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>* AllowLogicEventPassList; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::ConfigNewbie_HighLightData*>* HighLights; // 0x48
		::MoleMole::ConfigNewbie_NewbieFairy Fairy; // 0x50
		::MoleMole::ConfigNewbie_CircleEffect* CircleEffect; // 0x68
		::MoleMole::ConfigNewbie_CircleEffect* ConsoleCircleEffect; // 0x70
		::System::Boolean ForceHideCursor; // 0x78
		::System::Boolean SendEndNewBieBeforeLastStepFadeout; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIESTEP__CTOR_OFFSET))(this);
		}

		::System::Void LoadFromBytes(::FlexBuffers::FlxMap flexMap)
		{
			return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIESTEP_LOADFROMBYTES_OFFSET))(this, flexMap);
		}
	};
}
