#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_METHOD_3_004E70F0A682D94A_OFFSET UNITYSDK_OFFSET(0x1892B530)
#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_METHOD_3_CDEE83DB80680D85_OFFSET UNITYSDK_OFFSET(0x1892B4B0)
#define RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1892B500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationMoveSetGroupToStation_TypeDefinitionIndex = 20233;

	class FormationMoveSetGroupToStation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StreamId; // 0x18
		::System::UInt32 GroupId; // 0x1C
		::RPG::GameCore::DynamicFloat* StationIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CDEE83DB80680D85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveSetGroupToStation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveSetGroupToStation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_METHOD_3_CDEE83DB80680D85_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_004E70F0A682D94A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationMoveSetGroupToStation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationMoveSetGroupToStation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONMOVESETGROUPTOSTATION_METHOD_3_004E70F0A682D94A_OFFSET))(a1, a2);
		}
	};
}
