#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_7991FF2A805834F0_OFFSET UNITYSDK_OFFSET(0x19CEDBB0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_B79FDBBD97172190_OFFSET UNITYSDK_OFFSET(0x19CEDD60)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_BC5A443A800D5803_OFFSET UNITYSDK_OFFSET(0x19CEDBF0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_D2DFFC43B7E78959_OFFSET UNITYSDK_OFFSET(0x19CEDD30)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEDBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroBulletActivated_TypeDefinitionIndex = 21182;

	class ByCompareIsWolfBroBulletActivated : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7991FF2A805834F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_7991FF2A805834F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BC5A443A800D5803(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_BC5A443A800D5803_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D2DFFC43B7E78959(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_D2DFFC43B7E78959_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B79FDBBD97172190(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareIsWolfBroBulletActivated*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROBULLETACTIVATED_METHOD_4_B79FDBBD97172190_OFFSET))(a1, a2);
		}
	};
}
