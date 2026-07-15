#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_METHOD_4_747E004E6D23241A_OFFSET UNITYSDK_OFFSET(0x1A8A2420)
#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_METHOD_4_FDE24ED8A89D2D76_OFFSET UNITYSDK_OFFSET(0x1A8A2470)
#define RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A2460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareServerSubMissionState_TypeDefinitionIndex = 19531;

	class ByCompareServerSubMissionState : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_747E004E6D23241A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareServerSubMissionState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareServerSubMissionState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_METHOD_4_747E004E6D23241A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FDE24ED8A89D2D76(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareServerSubMissionState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareServerSubMissionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESERVERSUBMISSIONSTATE_METHOD_4_FDE24ED8A89D2D76_OFFSET))(a1, a2);
		}
	};
}
