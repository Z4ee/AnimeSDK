#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_0C73B4ECF56635D6_OFFSET UNITYSDK_OFFSET(0x1BBC7920)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_121829884F20C639_OFFSET UNITYSDK_OFFSET(0x1BBC78F0)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET UNITYSDK_OFFSET(0x1BBC7770)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_F10341A4E453E3CA_OFFSET UNITYSDK_OFFSET(0x1BBC7730)
#define RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBC7760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTeamLeaderBodySize_TypeDefinitionIndex = 20859;

	class ByCompareTeamLeaderBodySize : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::BodySize BodySize; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F10341A4E453E3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_F10341A4E453E3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_948AF340B74934C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_948AF340B74934C3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_121829884F20C639(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_121829884F20C639_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0C73B4ECF56635D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareTeamLeaderBodySize* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareTeamLeaderBodySize*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETEAMLEADERBODYSIZE_METHOD_4_0C73B4ECF56635D6_OFFSET))(a1, a2);
		}
	};
}
