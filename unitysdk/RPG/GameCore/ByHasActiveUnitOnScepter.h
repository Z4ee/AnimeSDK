#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_779219C55CD0AD61_OFFSET UNITYSDK_OFFSET(0x18747BC0)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_F8B10040173E820B_OFFSET UNITYSDK_OFFSET(0x18747C90)
#define RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18747C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasActiveUnitOnScepter_TypeDefinitionIndex = 22043;

	class ByHasActiveUnitOnScepter : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* SpecifiedScepterID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_779219C55CD0AD61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasActiveUnitOnScepter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_779219C55CD0AD61_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8B10040173E820B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasActiveUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasActiveUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASACTIVEUNITONSCEPTER_METHOD_4_F8B10040173E820B_OFFSET))(a1, a2);
		}
	};
}
