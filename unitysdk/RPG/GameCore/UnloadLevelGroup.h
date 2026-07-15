#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNLOADLEVELGROUP_METHOD_3_B09BA640822CFE60_OFFSET UNITYSDK_OFFSET(0x1B884C80)
#define RPG_GAMECORE_UNLOADLEVELGROUP_METHOD_3_E0BD81BF395B3123_OFFSET UNITYSDK_OFFSET(0x1B884C40)
#define RPG_GAMECORE_UNLOADLEVELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B884C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnloadLevelGroup_TypeDefinitionIndex = 19644;

	class UnloadLevelGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E0BD81BF395B3123(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLevelGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLevelGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP_METHOD_3_E0BD81BF395B3123_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B09BA640822CFE60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnloadLevelGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnloadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNLOADLEVELGROUP_METHOD_3_B09BA640822CFE60_OFFSET))(a1, a2);
		}
	};
}
