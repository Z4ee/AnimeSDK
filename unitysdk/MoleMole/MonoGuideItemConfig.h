#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOGUIDEITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1640D480)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGuideItemConfig_TypeDefinitionIndex = 61339;

	class MonoGuideItemConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* iconEnemyPath; // 0x18
		::System::String* iconSelfPath; // 0x20
		::System::String* iconNeutralPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGUIDEITEMCONFIG__CTOR_OFFSET))(this);
		}
	};
}
