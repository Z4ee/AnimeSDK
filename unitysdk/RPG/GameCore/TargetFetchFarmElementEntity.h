#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET UNITYSDK_OFFSET(0x19CF94B0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8895C50C92BA7DE1_OFFSET UNITYSDK_OFFSET(0x19D0CBD0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_A3AE93B4C8DFB506_OFFSET UNITYSDK_OFFSET(0x19D05890)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_BFE59B21879B2C7F_OFFSET UNITYSDK_OFFSET(0x19D0CCB0)
#define RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchFarmElementEntity_TypeDefinitionIndex = 22647;

	class TargetFetchFarmElementEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8895C50C92BA7DE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8895C50C92BA7DE1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8307BD6EF40BB23F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_8307BD6EF40BB23F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3AE93B4C8DFB506(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_A3AE93B4C8DFB506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFE59B21879B2C7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchFarmElementEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchFarmElementEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHFARMELEMENTENTITY_METHOD_4_BFE59B21879B2C7F_OFFSET))(a1, a2);
		}
	};
}
