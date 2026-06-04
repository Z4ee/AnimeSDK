#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRoleExtInfoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_67EB5D3EC0CEDE57_OFFSET UNITYSDK_OFFSET(0x1954A970)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET UNITYSDK_OFFSET(0x1954AA40)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_A3FB00F18CB901B1_OFFSET UNITYSDK_OFFSET(0x1954AD20)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_E022FA9E78CB1653_OFFSET UNITYSDK_OFFSET(0x1954ACA0)
#define RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1954A9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByGridFightCompareRoleExtInfo_TypeDefinitionIndex = 21295;

	class ByGridFightCompareRoleExtInfo : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GridFightRoleExtInfoType ExtInfoType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x28
		::RPG::GameCore::DynamicFloat* TargetCharacterID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_67EB5D3EC0CEDE57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_67EB5D3EC0CEDE57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_901E3C31BC156035(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_901E3C31BC156035_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E022FA9E78CB1653(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_E022FA9E78CB1653_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A3FB00F18CB901B1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYGRIDFIGHTCOMPAREROLEEXTINFO_METHOD_4_A3FB00F18CB901B1_OFFSET))(a1, a2);
		}
	};
}
