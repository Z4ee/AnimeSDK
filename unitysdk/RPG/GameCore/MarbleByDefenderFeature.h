#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleItemFeature.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_494307BFDCB95140_OFFSET UNITYSDK_OFFSET(0x1BD15510)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_8211696C8706CEBE_OFFSET UNITYSDK_OFFSET(0x1BD154B0)
#define RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD15500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFeature_TypeDefinitionIndex = 16207;

	class MarbleByDefenderFeature : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleItemFeature Feature; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8211696C8706CEBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_8211696C8706CEBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_494307BFDCB95140(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFeature* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFEATURE_METHOD_4_494307BFDCB95140_OFFSET))(a1, a2);
		}
	};
}
