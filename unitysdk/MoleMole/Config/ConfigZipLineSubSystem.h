#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1350AAC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLineSubSystem_TypeDefinitionIndex = 56837;

	class ConfigZipLineSubSystem : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 SkillUnlockID; // 0x58
		::System::Int32 TransitionID; // 0x5C
		::System::String* AbilityName; // 0x60
		::System::Boolean BlockStreaming; // 0x68
		::System::Boolean EnableSceneAreaOptimization; // 0x69
		::System::Boolean SearchSwitchByPrism; // 0x6A
		::System::Boolean SearchSwitchByTangent; // 0x6B
		::System::Single ExitPoint_Search_CD_Navmesh; // 0x6C
		::System::Single ExitPoint_Search_CD_Spline; // 0x70
		::System::Single EnterPoint_Search_CD_Spline; // 0x74
		::System::Single SwitchPoint_Search_CD_Spline; // 0x78
		::System::Boolean CanUseZipLineCommonSkillInBattle; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINESUBSYSTEM__CTOR_OFFSET))(this);
		}
	};
}
