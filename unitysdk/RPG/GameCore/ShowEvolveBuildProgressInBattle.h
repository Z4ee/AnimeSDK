#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_METHOD_3_0A04B0E9F01F6E4F_OFFSET UNITYSDK_OFFSET(0x1DADBD40)
#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_METHOD_3_A8CA119875951074_OFFSET UNITYSDK_OFFSET(0x1DADBD80)
#define RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DADBD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildProgressInBattle_TypeDefinitionIndex = 22516;

	class ShowEvolveBuildProgressInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ShowNextStageProgress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0A04B0E9F01F6E4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_METHOD_3_0A04B0E9F01F6E4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A8CA119875951074(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildProgressInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildProgressInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDPROGRESSINBATTLE_METHOD_3_A8CA119875951074_OFFSET))(a1, a2);
		}
	};
}
