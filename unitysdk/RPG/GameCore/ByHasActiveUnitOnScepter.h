#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_3F442A5B42AD42B4_OFFSET UNITYSDK_OFFSET(0x1BBDD2D0)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_5E0A2360563228DB_OFFSET UNITYSDK_OFFSET(0x1BBDD300)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_9AE886516F233F66_OFFSET UNITYSDK_OFFSET(0x1BBDD0F0)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_F8B10040173E820B_OFFSET UNITYSDK_OFFSET(0x1BBDD130)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDD120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasActiveUnitOnScepter_TypeDefinitionIndex = 22844;

	class ByHasActiveUnitOnScepter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SpecifiedScepterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9AE886516F233F66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_9AE886516F233F66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8B10040173E820B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_F8B10040173E820B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3F442A5B42AD42B4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_3F442A5B42AD42B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5E0A2360563228DB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_5E0A2360563228DB_OFFSET))(a1, a2);
		}
	};
}
