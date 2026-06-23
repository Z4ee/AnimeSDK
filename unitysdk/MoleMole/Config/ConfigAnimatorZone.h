#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class AnimatorZone; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFAD00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorZone_TypeDefinitionIndex = 61681;

	class ConfigAnimatorZone : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>* zoneDict; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORZONE__CTOR_OFFSET))(this);
		}
	};
}
