#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE_METHOD_4_879DDE1EEF74150C_OFFSET UNITYSDK_OFFSET(0x1864A450)
#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE_METHOD_4_D777C87C4916508C_OFFSET UNITYSDK_OFFSET(0x1864A390)
#define RPG_GAMECORE_ADVBYTARGETENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1864A400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByTargetEntityType_TypeDefinitionIndex = 19560;

	class AdvByTargetEntityType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D777C87C4916508C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTargetEntityType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTargetEntityType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE_METHOD_4_D777C87C4916508C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_879DDE1EEF74150C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByTargetEntityType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByTargetEntityType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYTARGETENTITYTYPE_METHOD_4_879DDE1EEF74150C_OFFSET))(a1, a2);
		}
	};
}
