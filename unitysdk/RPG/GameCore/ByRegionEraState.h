#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET UNITYSDK_OFFSET(0x195D5620)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_8B4E8C3BA5881423_OFFSET UNITYSDK_OFFSET(0x195D57A0)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_B2035B0A97421840_OFFSET UNITYSDK_OFFSET(0x195D5550)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_E342586CD3F2563E_OFFSET UNITYSDK_OFFSET(0x195D5820)
#define RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x195D55D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRegionEraState_TypeDefinitionIndex = 21105;

	class ByRegionEraState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B2035B0A97421840(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_B2035B0A97421840_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D8FAEEEE555186E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B4E8C3BA5881423(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_8B4E8C3BA5881423_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E342586CD3F2563E(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_E342586CD3F2563E_OFFSET))(a1, a2);
		}
	};
}
