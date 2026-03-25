#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_250486381BD34CB0_OFFSET UNITYSDK_OFFSET(0x17005C80)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET UNITYSDK_OFFSET(0x17005D50)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17005D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentModifierStatusType_TypeDefinitionIndex = 21755;

	class ByCompareCurrentModifierStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_250486381BD34CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_250486381BD34CB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4B3F51E7B3B0ED1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_METHOD_4_4B3F51E7B3B0ED1E_OFFSET))(a1, a2);
		}
	};
}
