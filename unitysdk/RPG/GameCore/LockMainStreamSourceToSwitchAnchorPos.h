#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwitchCharacterAnchor; }

#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_METHOD_3_17113080BFFFADC9_OFFSET UNITYSDK_OFFSET(0x1DD78990)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_METHOD_3_E539DE50EBB2F242_OFFSET UNITYSDK_OFFSET(0x1DD78950)
#define RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD78980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockMainStreamSourceToSwitchAnchorPos_TypeDefinitionIndex = 20264;

	class LockMainStreamSourceToSwitchAnchorPos : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchCharacterAnchor* AnchorConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E539DE50EBB2F242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_METHOD_3_E539DE50EBB2F242_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_17113080BFFFADC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockMainStreamSourceToSwitchAnchorPos*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKMAINSTREAMSOURCETOSWITCHANCHORPOS_METHOD_3_17113080BFFFADC9_OFFSET))(a1, a2);
		}
	};
}
