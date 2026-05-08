#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC1872E680B7F0C9.h"
#include "unitysdk/MoleMole/Arcade/CompanionProject/CpSkillEffectData.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_15.h"
#include "unitysdk/Struct_2_BEBB04660E5E42A2.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

namespace MoleMole::Arcade::CompanionProject { class CpAnimAxisInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B139F30)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpSkillEffectMoveData_TypeDefinitionIndex = 83827;

	class CpSkillEffectMoveData : public ::MoleMole::Arcade::CompanionProject::CpSkillEffectData
	{
	public:
		::Struct_2_E614D3B245F96744_1 pos; // 0x28
		::Struct_2_4C8453486C91E3A1_15 posParam; // 0x30
		::Struct_2_BEBB04660E5E42A2 curve; // 0x38
		::Enum_3_CC1872E680B7F0C9 moveType; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Arcade::CompanionProject::CpAnimAxisInfo*>* axisInfos; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPSKILLEFFECTMOVEDATA__CTOR_OFFSET))(this);
		}
	};
}
