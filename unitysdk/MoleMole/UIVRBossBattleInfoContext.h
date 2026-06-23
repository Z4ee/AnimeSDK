#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_8F9E26CA2B644EB8.h"

class Class_2_208CC9941471731A_626;

#define MOLEMOLE_UIVRBOSSBATTLEINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BCA120)

namespace MoleMole
{
	inline static constexpr unsigned int UIVRBossBattleInfoContext_TypeDefinitionIndex = 58494;

	class UIVRBossBattleInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_626* questTemplate; // 0x28
		::Struct_2_8F9E26CA2B644EB8 JumpData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVRBOSSBATTLEINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
