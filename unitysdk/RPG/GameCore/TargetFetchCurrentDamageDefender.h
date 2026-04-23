#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_B283A6EC3AE66323_OFFSET UNITYSDK_OFFSET(0x18EDC3B0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_DEFC360ECA53BB55_OFFSET UNITYSDK_OFFSET(0x18EE3BE0)
#define RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDC360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCurrentDamageDefender_TypeDefinitionIndex = 23002;

	class TargetFetchCurrentDamageDefender : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DEFC360ECA53BB55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_DEFC360ECA53BB55_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B283A6EC3AE66323(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCurrentDamageDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCurrentDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCURRENTDAMAGEDEFENDER_METHOD_4_B283A6EC3AE66323_OFFSET))(a1, a2);
		}
	};
}
