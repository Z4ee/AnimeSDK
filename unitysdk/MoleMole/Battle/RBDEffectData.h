#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_09D8878FDDF9963B.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_RBDEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1279CE00)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDEffectData_TypeDefinitionIndex = 86344;

	class RBDEffectData : public ::System::Object
	{
	public:
		::Enum_3_09D8878FDDF9963B m_eType; // 0x10
		::System::String* m_sName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDEFFECTDATA__CTOR_OFFSET))(this);
		}
	};
}
