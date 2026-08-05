#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ConfigUIMainStory_PersonalLineEndPerformConfig; }

#define MOLEMOLE_CONFIGUIMAINSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8209E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainStory_TypeDefinitionIndex = 46330;

	class ConfigUIMainStory : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::ConfigUIMainStory_PersonalLineEndPerformConfig* EndPerformConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINSTORY__CTOR_OFFSET))(this);
		}
	};
}
