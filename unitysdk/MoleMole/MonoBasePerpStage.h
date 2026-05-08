#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CD42631606067E6B_Enum_3_149856925731683D.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_MONOBASEPERPSTAGE_START_OFFSET UNITYSDK_OFFSET(0x10BCD620)
#define MOLEMOLE_MONOBASEPERPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x10BCD660)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBasePerpStage_TypeDefinitionIndex = 75677;

	class MonoBasePerpStage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_2_CD42631606067E6B_Enum_3_149856925731683D gameType; // 0x18
		::System::String* bornPosName; // 0x20
		::System::Boolean IsActLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBASEPERPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBASEPERPSTAGE_START_OFFSET))(this);
		}
	};
}
