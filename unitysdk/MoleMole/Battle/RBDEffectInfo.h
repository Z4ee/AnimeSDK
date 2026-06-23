#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_BATTLE_RBDEFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE94A100)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDEffectInfo_TypeDefinitionIndex = 80865;

	class RBDEffectInfo : public ::System::Object
	{
	public:
		::System::String* m_sName; // 0x10
		::System::Int32 m_nMaxNum; // 0x18
		::System::Single m_fCreateInterval; // 0x1C
		::System::Single m_fCreateDistance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDEFFECTINFO__CTOR_OFFSET))(this);
		}
	};
}
