#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_4FF1D693A26A4C37_OFFSET UNITYSDK_OFFSET(0x1B29C6B0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_9E98F447CC501E98_OFFSET UNITYSDK_OFFSET(0x1B29C4F0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B79555B827DA387D_OFFSET UNITYSDK_OFFSET(0x1B29C530)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_F3A3FF2FEF194640_OFFSET UNITYSDK_OFFSET(0x1B29C6E0)
#define RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29C520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsInEraFlipperSpotArea_TypeDefinitionIndex = 21521;

	class ByIsInEraFlipperSpotArea : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EraStateType EaraState; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9E98F447CC501E98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_9E98F447CC501E98_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B79555B827DA387D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_B79555B827DA387D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4FF1D693A26A4C37(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_4FF1D693A26A4C37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3A3FF2FEF194640(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInEraFlipperSpotArea* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInEraFlipperSpotArea*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINERAFLIPPERSPOTAREA_METHOD_4_F3A3FF2FEF194640_OFFSET))(a1, a2);
		}
	};
}
