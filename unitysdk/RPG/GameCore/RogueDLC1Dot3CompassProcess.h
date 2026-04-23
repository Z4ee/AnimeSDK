#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_METHOD_3_6C64FEF75C2AC079_OFFSET UNITYSDK_OFFSET(0x18CFD250)
#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_METHOD_3_96842305E1FD7480_OFFSET UNITYSDK_OFFSET(0x18CFD1D0)
#define RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFD220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3CompassProcess_TypeDefinitionIndex = 21157;

	class RogueDLC1Dot3CompassProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Compass; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96842305E1FD7480(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_METHOD_3_96842305E1FD7480_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C64FEF75C2AC079(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLC1Dot3CompassProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLC1Dot3CompassProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3COMPASSPROCESS_METHOD_3_6C64FEF75C2AC079_OFFSET))(a1, a2);
		}
	};
}
