#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_9A3FC2E59406BF62_OFFSET UNITYSDK_OFFSET(0x1703EA00)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_B97FC72BF527FB78_OFFSET UNITYSDK_OFFSET(0x1703EAD0)
#define RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1703EA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTurnOwnerActionPhaseEnd_TypeDefinitionIndex = 21715;

	class ByTurnOwnerActionPhaseEnd : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A3FC2E59406BF62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_9A3FC2E59406BF62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B97FC72BF527FB78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTurnOwnerActionPhaseEnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTURNOWNERACTIONPHASEEND_METHOD_4_B97FC72BF527FB78_OFFSET))(a1, a2);
		}
	};
}
