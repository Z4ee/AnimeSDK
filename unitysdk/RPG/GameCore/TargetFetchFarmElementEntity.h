#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET UNITYSDK_OFFSET(0x1E16E8F0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_A6A8D1CB18BFF7FB_OFFSET UNITYSDK_OFFSET(0x1E16E950)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_BFE59B21879B2C7F_OFFSET UNITYSDK_OFFSET(0x1E16E990)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_EBB52EC1D1645F0E_OFFSET UNITYSDK_OFFSET(0x1E16E850)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E16E8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFarmElementEntity_TypeDefinitionIndex = 23690;

	class TargetFetchFarmElementEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EBB52EC1D1645F0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_EBB52EC1D1645F0E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8307BD6EF40BB23F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A6A8D1CB18BFF7FB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_A6A8D1CB18BFF7FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFE59B21879B2C7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_BFE59B21879B2C7F_OFFSET))(a1, a2);
		}
	};
}
