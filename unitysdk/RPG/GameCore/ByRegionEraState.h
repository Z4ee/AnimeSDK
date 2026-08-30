#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_388A5E38131D05FA_OFFSET UNITYSDK_OFFSET(0x1CF5B430)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_3C6AC5FA0F2807FF_OFFSET UNITYSDK_OFFSET(0x1CF5B270)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET UNITYSDK_OFFSET(0x1CF5B2B0)
#define RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_E2A9B9782A9106DD_OFFSET UNITYSDK_OFFSET(0x1CF5B460)
#define RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF5B2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByRegionEraState_TypeDefinitionIndex = 22083;

	class ByRegionEraState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3C6AC5FA0F2807FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_3C6AC5FA0F2807FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6D8FAEEEE555186E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_6D8FAEEEE555186E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_388A5E38131D05FA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_388A5E38131D05FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E2A9B9782A9106DD(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByRegionEraState* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByRegionEraState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYREGIONERASTATE_METHOD_4_E2A9B9782A9106DD_OFFSET))(a1, a2);
		}
	};
}
