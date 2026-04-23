#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionIDPair; }

#define RPG_GAMECORE_MISSIONIDPAIRLIST_METHOD_2_1BB656099B137AEB_OFFSET UNITYSDK_OFFSET(0x18B2E640)
#define RPG_GAMECORE_MISSIONIDPAIRLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2E710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionIDPairList_TypeDefinitionIndex = 18048;

	class MissionIDPairList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionIDPair*>* PairList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIRLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1BB656099B137AEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionIDPairList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionIDPairList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIRLIST_METHOD_2_1BB656099B137AEB_OFFSET))(a1, a2);
		}
	};
}
