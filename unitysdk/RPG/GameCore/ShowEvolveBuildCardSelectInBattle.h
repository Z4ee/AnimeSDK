#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_5DF8F5B6EC5F3D72_OFFSET UNITYSDK_OFFSET(0x19C794D0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_F9EB17B5E288063B_OFFSET UNITYSDK_OFFSET(0x19C79450)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C794A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildCardSelectInBattle_TypeDefinitionIndex = 21286;

	class ShowEvolveBuildCardSelectInBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecifiedCardIDList; // 0x18
		::Il2CppArray<::System::UInt32>* BlacklistCardIDList; // 0x20
		::System::Boolean EnableReRoll; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9EB17B5E288063B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_F9EB17B5E288063B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DF8F5B6EC5F3D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_5DF8F5B6EC5F3D72_OFFSET))(a1, a2);
		}
	};
}
