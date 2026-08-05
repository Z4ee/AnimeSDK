#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntitySkill; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSKILLS__CTOR_OFFSET UNITYSDK_OFFSET(0x16C3EE50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntitySkills_TypeDefinitionIndex = 75843;

	class ConfigEntitySkills : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySkill*>* EntitySkills; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSKILLS__CTOR_OFFSET))(this);
		}
	};
}
