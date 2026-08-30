#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_70DD4C1A4C0E3B65_OFFSET UNITYSDK_OFFSET(0x1D6B0DD0)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_B8DDFD4FFD3A70D0_OFFSET UNITYSDK_OFFSET(0x1D6B0D90)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_CFFEA4F393B5B1F3_OFFSET UNITYSDK_OFFSET(0x1D6B0FC0)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_D61F51641F02515C_OFFSET UNITYSDK_OFFSET(0x1D6B0F90)
#define RPG_GAMECORE_ADVBYPLAYERINVISIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByPlayerInVisionZone_TypeDefinitionIndex = 19784;

	class AdvByPlayerInVisionZone : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::VisionZoneTag>* ZoneTags; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B8DDFD4FFD3A70D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_B8DDFD4FFD3A70D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_70DD4C1A4C0E3B65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_70DD4C1A4C0E3B65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D61F51641F02515C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_D61F51641F02515C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CFFEA4F393B5B1F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByPlayerInVisionZone* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByPlayerInVisionZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYPLAYERINVISIONZONE_METHOD_4_CFFEA4F393B5B1F3_OFFSET))(a1, a2);
		}
	};
}
