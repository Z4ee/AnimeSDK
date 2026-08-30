#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MISSIONMAPNPCTYPE_METHOD_2_9614B5548A722A8B_OFFSET UNITYSDK_OFFSET(0x1D1AC2A0)
#define RPG_GAMECORE_MISSIONMAPNPCTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AC3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionMapNpcType_TypeDefinitionIndex = 18785;

	class MissionMapNpcType : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 NPCID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPNPCTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9614B5548A722A8B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionMapNpcType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionMapNpcType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONMAPNPCTYPE_METHOD_2_9614B5548A722A8B_OFFSET))(a1, a2);
		}
	};
}
