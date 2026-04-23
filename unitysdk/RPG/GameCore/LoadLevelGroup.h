#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOADLEVELGROUP_METHOD_3_02B342015DCC8D5B_OFFSET UNITYSDK_OFFSET(0x18A71BA0)
#define RPG_GAMECORE_LOADLEVELGROUP_METHOD_3_AAE98440668B0FF2_OFFSET UNITYSDK_OFFSET(0x18A71B20)
#define RPG_GAMECORE_LOADLEVELGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A71B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadLevelGroup_TypeDefinitionIndex = 20935;

	class LoadLevelGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* GroupIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AAE98440668B0FF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadLevelGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadLevelGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP_METHOD_3_AAE98440668B0FF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02B342015DCC8D5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LoadLevelGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LoadLevelGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADLEVELGROUP_METHOD_3_02B342015DCC8D5B_OFFSET))(a1, a2);
		}
	};
}
