#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET UNITYSDK_OFFSET(0x18EDD590)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_65FD4FD173A774F6_OFFSET UNITYSDK_OFFSET(0x18EE4580)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDD540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillCaster_TypeDefinitionIndex = 22994;

	class TargetFetchLastKillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_65FD4FD173A774F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_65FD4FD173A774F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_34D1730DF36A13B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_METHOD_4_34D1730DF36A13B4_OFFSET))(a1, a2);
		}
	};
}
