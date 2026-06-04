#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_3CD50F847D2F9AD5_OFFSET UNITYSDK_OFFSET(0x198CBD20)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_494307BFDCB95140_OFFSET UNITYSDK_OFFSET(0x198CBE00)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x198CBDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFeature_TypeDefinitionIndex = 16023;

	class MarbleByDefenderFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3CD50F847D2F9AD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_3CD50F847D2F9AD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_494307BFDCB95140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_494307BFDCB95140_OFFSET))(a1, a2);
		}
	};
}
