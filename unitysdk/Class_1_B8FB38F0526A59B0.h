#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_10.h"
#include "unitysdk/RPG/GameCore/TeamLocationType.h"
#include "unitysdk/Struct_2_2B6684D3E43696AE.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D53390)

inline static constexpr unsigned int Class_1_B8FB38F0526A59B0_TypeDefinitionIndex = 56926;

class Class_1_B8FB38F0526A59B0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x10
	::System::Action_1<::RPG::GameCore::GameEntity*>* GLJMFKDDPLP; // 0x18
	::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x20
	::System::Action_1<::RPG::GameCore::GameEntity*>* IBJBPOLBLNO; // 0x28
	::RPG::GameCore::CharacterConfig* COKHBDEGLIA; // 0x30
	::System::String* JDCOLLAEGJH; // 0x38
	::Enum_3_ED790DAC948A65A9_10 AHKJLOJDNIC; // 0x40
	::System::Boolean EGMAKEFKKPO; // 0x44
	::RPG::GameCore::TeamLocationType HMNPPCEBMIG; // 0x48
	::Struct_2_2B6684D3E43696AE NMDMOALJBLO; // 0x4C
	::System::UInt32 JIDLKIHJLFL; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B8FB38F0526A59B0__CTOR_OFFSET))(this);
	}
};
