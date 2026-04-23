#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_3191370E60E5DC44_OFFSET UNITYSDK_OFFSET(0x18744D90)
#define RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F8477A5EBA8DB554_OFFSET UNITYSDK_OFFSET(0x18744E70)
#define RPG_GAMECORE_BYDIEANIMFINISHED__CTOR_OFFSET UNITYSDK_OFFSET(0x18744E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByDieAnimFinished_TypeDefinitionIndex = 22276;

	class ByDieAnimFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3191370E60E5DC44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDieAnimFinished*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDieAnimFinished*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_3191370E60E5DC44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8477A5EBA8DB554(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_METHOD_4_F8477A5EBA8DB554_OFFSET))(a1, a2);
		}
	};
}
