#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SearchEntityType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_48A2BA8D34D4A0FE_OFFSET UNITYSDK_OFFSET(0x19D0D0D0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EB28150427823982_OFFSET UNITYSDK_OFFSET(0x19D0D060)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET UNITYSDK_OFFSET(0x19CF9BF0)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_F3B37110DB4B53D2_OFFSET UNITYSDK_OFFSET(0x19D05D40)
#define RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF9BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastSearchEntity_TypeDefinitionIndex = 22568;

	class TargetFetchLastSearchEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::SearchEntityType SearchType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EB28150427823982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EB28150427823982_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EF51959009FCDFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_EF51959009FCDFE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F3B37110DB4B53D2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_F3B37110DB4B53D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_48A2BA8D34D4A0FE(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastSearchEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastSearchEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTSEARCHENTITY_METHOD_4_48A2BA8D34D4A0FE_OFFSET))(a1, a2);
		}
	};
}
