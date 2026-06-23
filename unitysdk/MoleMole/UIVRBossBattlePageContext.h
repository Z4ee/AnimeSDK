#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0FD5CF626EB7D21F.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_8F9E26CA2B644EB8.h"

#define MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16561E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattlePageContext_TypeDefinitionIndex = 75016;

	class UIVRBossBattlePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_8F9E26CA2B644EB8 JumpData; // 0x28
		::System::Int32 JumpQuestId; // 0x34
		::Enum_3_0FD5CF626EB7D21F type; // 0x38
		::System::Int32 FromQuestId; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
