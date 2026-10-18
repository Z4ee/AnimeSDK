#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYISKILLER_METHOD_4_680F9DDD4A656895_OFFSET UNITYSDK_OFFSET(0x1D83AAE0)
#define RPG_GAMECORE_MARBLEBYISKILLER_METHOD_4_8A8D6132ADBD0E16_OFFSET UNITYSDK_OFFSET(0x1D83AA80)
#define RPG_GAMECORE_MARBLEBYISKILLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D83AAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByIsKiller_TypeDefinitionIndex = 16876;

	class MarbleByIsKiller : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A8D6132ADBD0E16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsKiller*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsKiller*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER_METHOD_4_8A8D6132ADBD0E16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_680F9DDD4A656895(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByIsKiller* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByIsKiller*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYISKILLER_METHOD_4_680F9DDD4A656895_OFFSET))(a1, a2);
		}
	};
}
