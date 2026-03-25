#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET UNITYSDK_OFFSET(0x17035650)
#define RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_ED99CE0F686B6DAB_OFFSET UNITYSDK_OFFSET(0x17035580)
#define RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x17035600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsTurnActionEntity_TypeDefinitionIndex = 20728;

	class ByIsTurnActionEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_ED99CE0F686B6DAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_ED99CE0F686B6DAB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_18BE1406EF5D374D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsTurnActionEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsTurnActionEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTURNACTIONENTITY_METHOD_4_18BE1406EF5D374D_OFFSET))(a1, a2);
		}
	};
}
