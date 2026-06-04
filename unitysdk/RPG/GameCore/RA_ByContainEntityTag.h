#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_3471F89CF599B716_OFFSET UNITYSDK_OFFSET(0x19AA75C0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_7A131AFA8E06F460_OFFSET UNITYSDK_OFFSET(0x19AA7320)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_8ED048FE1FFFC998_OFFSET UNITYSDK_OFFSET(0x19AA73F0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_9E57A6B61D1E2205_OFFSET UNITYSDK_OFFSET(0x19AA7640)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA73A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByContainEntityTag_TypeDefinitionIndex = 18923;

	class RA_ByContainEntityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityTag>* EntityTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A131AFA8E06F460(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_7A131AFA8E06F460_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8ED048FE1FFFC998(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_8ED048FE1FFFC998_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3471F89CF599B716(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_3471F89CF599B716_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9E57A6B61D1E2205(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_9E57A6B61D1E2205_OFFSET))(a1, a2);
		}
	};
}
