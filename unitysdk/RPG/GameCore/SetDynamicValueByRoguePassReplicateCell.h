#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_METHOD_3_6D9556A346B38DEE_OFFSET UNITYSDK_OFFSET(0x1D4F5F70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_METHOD_3_F85931E74CB7515B_OFFSET UNITYSDK_OFFSET(0x1D4F5F30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F5F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRoguePassReplicateCell_TypeDefinitionIndex = 21539;

	class SetDynamicValueByRoguePassReplicateCell : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F85931E74CB7515B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_METHOD_3_F85931E74CB7515B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D9556A346B38DEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByRoguePassReplicateCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYROGUEPASSREPLICATECELL_METHOD_3_6D9556A346B38DEE_OFFSET))(a1, a2);
		}
	};
}
