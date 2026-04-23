#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_B3D3175C9CCDA94F_OFFSET UNITYSDK_OFFSET(0x1874AD20)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_CB54303CCAEE57CB_OFFSET UNITYSDK_OFFSET(0x1874AC40)
#define RPG_GAMECORE_BYHAVEDYINGENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1874ACC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveDyingEntity_TypeDefinitionIndex = 21989;

	class ByHaveDyingEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB54303CCAEE57CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_CB54303CCAEE57CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3D3175C9CCDA94F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_B3D3175C9CCDA94F_OFFSET))(a1, a2);
		}
	};
}
