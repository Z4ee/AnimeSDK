#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }

#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_METHOD_2_23E9493227E568AC_OFFSET UNITYSDK_OFFSET(0x1C118830)
#define RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1188F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMainMissionIssuePatchList_TypeDefinitionIndex = 17171;

	class LevelGroupMainMissionIssuePatchList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupMainMissionIssuePatch*>* List; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23E9493227E568AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LevelGroupMainMissionIssuePatchList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LevelGroupMainMissionIssuePatchList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPMAINMISSIONISSUEPATCHLIST_METHOD_2_23E9493227E568AC_OFFSET))(a1, a2);
		}
	};
}
