#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigEntityScreenSpacePlanarReflectionEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA8360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenSpacePlanarReflectionEffects_TypeDefinitionIndex = 69619;

	class ConfigEntityScreenSpacePlanarReflectionEffects : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpacePlanarReflectionEffect*>* Effects; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENSPACEPLANARREFLECTIONEFFECTS__CTOR_OFFSET))(this);
		}
	};
}
