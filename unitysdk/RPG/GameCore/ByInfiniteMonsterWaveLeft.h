#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_04838D9FB0FF0B8F_OFFSET UNITYSDK_OFFSET(0x17028A40)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET UNITYSDK_OFFSET(0x17028B20)
#define RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET UNITYSDK_OFFSET(0x17028AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInfiniteMonsterWaveLeft_TypeDefinitionIndex = 20755;

	class ByInfiniteMonsterWaveLeft : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Int32 TotalRank; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_04838D9FB0FF0B8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_04838D9FB0FF0B8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C4EB45136157ADBD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByInfiniteMonsterWaveLeft* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByInfiniteMonsterWaveLeft*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINFINITEMONSTERWAVELEFT_METHOD_4_C4EB45136157ADBD_OFFSET))(a1, a2);
		}
	};
}
