#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1E259FB9F063C03C_OFFSET UNITYSDK_OFFSET(0x18EDBF00)
#define RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_D02B762BEB93DB3E_OFFSET UNITYSDK_OFFSET(0x18EE3960)
#define RPG_GAMECORE_TARGETFETCHCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDBEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchCaster_TypeDefinitionIndex = 22898;

	class TargetFetchCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D02B762BEB93DB3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_D02B762BEB93DB3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E259FB9F063C03C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHCASTER_METHOD_4_1E259FB9F063C03C_OFFSET))(a1, a2);
		}
	};
}
