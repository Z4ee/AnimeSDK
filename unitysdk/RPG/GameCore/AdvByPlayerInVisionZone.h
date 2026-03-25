#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_47A43F393F7ED89B_OFFSET UNITYSDK_OFFSET(0x16F27C20)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_70DD4C1A4C0E3B65_OFFSET UNITYSDK_OFFSET(0x16F27CF0)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F27CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerInVisionZone_TypeDefinitionIndex = 18292;

	class AdvByPlayerInVisionZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VisionZoneTag>* ZoneTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_47A43F393F7ED89B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_47A43F393F7ED89B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_70DD4C1A4C0E3B65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_70DD4C1A4C0E3B65_OFFSET))(a1, a2);
		}
	};
}
