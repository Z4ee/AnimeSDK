#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainCity_ChallengeTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_InteractConfig; }
namespace MoleMole { class ConfigUIMainCity_MissionTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_OngoingConfig; }
namespace MoleMole { class ConfigUIMainCity_ViceCharacterConfig; }

#define MOLEMOLE_CONFIGUIMAINCITY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5026A0)
#define MOLEMOLE_CONFIGUIMAINCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B502730)
#define MOLEMOLE_CONFIGUIMAINCITY___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1B502820)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_TypeDefinitionIndex = 79734;

	class ConfigUIMainCity : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::ConfigUIMainCity_MissionTipsConfig* MissionTips; // 0x58
		::MoleMole::ConfigUIMainCity_InteractConfig* InteractData; // 0x60
		::MoleMole::ConfigUIMainCity_ViceCharacterConfig* ViceCharacter; // 0x68
		::MoleMole::ConfigUIMainCity_OngoingConfig* OngoingData; // 0x70
		::MoleMole::ConfigUIMainCity_ChallengeTipsConfig* ChallengeTips; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY__CTOR_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
