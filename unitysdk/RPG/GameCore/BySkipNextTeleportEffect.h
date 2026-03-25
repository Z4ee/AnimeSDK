#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_3ABAA03C04190E30_OFFSET UNITYSDK_OFFSET(0x1703AF80)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET UNITYSDK_OFFSET(0x1703B050)
#define RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1703B000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySkipNextTeleportEffect_TypeDefinitionIndex = 18893;

	class BySkipNextTeleportEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3ABAA03C04190E30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_3ABAA03C04190E30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_676730271EAEFEDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BySkipNextTeleportEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BySkipNextTeleportEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSKIPNEXTTELEPORTEFFECT_METHOD_4_676730271EAEFEDA_OFFSET))(a1, a2);
		}
	};
}
