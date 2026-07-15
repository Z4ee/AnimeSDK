#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_7743318207EC27E6_OFFSET UNITYSDK_OFFSET(0x1A8CD1C0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_B3D3175C9CCDA94F_OFFSET UNITYSDK_OFFSET(0x1A8CD220)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_BD2A907436997C3C_OFFSET UNITYSDK_OFFSET(0x1A8CD430)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_FC416085DCCB796A_OFFSET UNITYSDK_OFFSET(0x1A8CD3F0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8CD200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveDyingEntity_TypeDefinitionIndex = 22238;

	class ByHaveDyingEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7743318207EC27E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_7743318207EC27E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B3D3175C9CCDA94F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_B3D3175C9CCDA94F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC416085DCCB796A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_FC416085DCCB796A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BD2A907436997C3C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_METHOD_4_BD2A907436997C3C_OFFSET))(a1, a2);
		}
	};
}
