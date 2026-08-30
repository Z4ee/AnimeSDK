#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_16E1BD2990CF8025_OFFSET UNITYSDK_OFFSET(0x1D37DDA0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_2E2F07294B8E0358_OFFSET UNITYSDK_OFFSET(0x1D37DFE0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_8ED048FE1FFFC998_OFFSET UNITYSDK_OFFSET(0x1D37DDE0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_B419588616294EBE_OFFSET UNITYSDK_OFFSET(0x1D37DFB0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37DDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByContainEntityTag_TypeDefinitionIndex = 19814;

	class RA_ByContainEntityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityTag>* EntityTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_16E1BD2990CF8025(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_16E1BD2990CF8025_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8ED048FE1FFFC998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_8ED048FE1FFFC998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B419588616294EBE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_B419588616294EBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2E2F07294B8E0358(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_2E2F07294B8E0358_OFFSET))(a1, a2);
		}
	};
}
