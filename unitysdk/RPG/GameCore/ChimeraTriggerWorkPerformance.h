#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_METHOD_3_AF3C2410C9B8925F_OFFSET UNITYSDK_OFFSET(0x1E342500)
#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_METHOD_3_DFF6144B96610AB3_OFFSET UNITYSDK_OFFSET(0x1E3425D0)
#define RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3425C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTriggerWorkPerformance_TypeDefinitionIndex = 15696;

	class ChimeraTriggerWorkPerformance : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AF3C2410C9B8925F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerWorkPerformance*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerWorkPerformance*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_METHOD_3_AF3C2410C9B8925F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFF6144B96610AB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTriggerWorkPerformance* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTriggerWorkPerformance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATRIGGERWORKPERFORMANCE_METHOD_3_DFF6144B96610AB3_OFFSET))(a1, a2);
		}
	};
}
