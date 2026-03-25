#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_23FB611870D35CF4_OFFSET UNITYSDK_OFFSET(0x176F98B0)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_DB91D1EC3291B225_OFFSET UNITYSDK_OFFSET(0x176F9830)
#define RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x176F9880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEvolveBuildCardSelectInBattle_TypeDefinitionIndex = 20699;

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

		static ::System::Void Method_3_DB91D1EC3291B225(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_DB91D1EC3291B225_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_23FB611870D35CF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWEVOLVEBUILDCARDSELECTINBATTLE_METHOD_3_23FB611870D35CF4_OFFSET))(a1, a2);
		}
	};
}
