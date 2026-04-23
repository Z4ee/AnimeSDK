#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_267ED9E1BD401570_OFFSET UNITYSDK_OFFSET(0x18671AB0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_BAD4C89873E84214_OFFSET UNITYSDK_OFFSET(0x18671B90)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID__CTOR_OFFSET UNITYSDK_OFFSET(0x18671B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPropShowInfoId_TypeDefinitionIndex = 19430;

	class AdventureByPropShowInfoId : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TextureID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_267ED9E1BD401570(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_267ED9E1BD401570_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAD4C89873E84214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_BAD4C89873E84214_OFFSET))(a1, a2);
		}
	};
}
