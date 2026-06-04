#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_09B1D821A9DAD3F3_OFFSET UNITYSDK_OFFSET(0x195679A0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_2C1B34C7D6FFB3D2_OFFSET UNITYSDK_OFFSET(0x19567920)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B170A4B700C233DB_OFFSET UNITYSDK_OFFSET(0x195676D0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B79555B827DA387D_OFFSET UNITYSDK_OFFSET(0x195677A0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x19567750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInEraFlipperSpotArea_TypeDefinitionIndex = 21106;

	class ByIsInEraFlipperSpotArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B170A4B700C233DB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B170A4B700C233DB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B79555B827DA387D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B79555B827DA387D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2C1B34C7D6FFB3D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_2C1B34C7D6FFB3D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_09B1D821A9DAD3F3(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_09B1D821A9DAD3F3_OFFSET))(a1, a2);
		}
	};
}
