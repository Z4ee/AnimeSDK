#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class AnimatorEventPattern; }

#define MOLEMOLE_CONFIG_CONFIGANIMATOREVENTPATTERN__CTOR_OFFSET UNITYSDK_OFFSET(0x18F2EF80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorEventPattern_TypeDefinitionIndex = 74527;

	class ConfigAnimatorEventPattern : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::MoleMole::Config::AnimatorEventPattern*>* patterns; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATOREVENTPATTERN__CTOR_OFFSET))(this);
		}
	};
}
