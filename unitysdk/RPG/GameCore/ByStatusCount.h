#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_5A54384EF7D919CA_OFFSET UNITYSDK_OFFSET(0x195D79B0)
#define RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_945A0C20BF0D6408_OFFSET UNITYSDK_OFFSET(0x195D7660)
#define RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_DE032D9922A48C70_OFFSET UNITYSDK_OFFSET(0x195D7740)
#define RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_EBC84F05B44A34C9_OFFSET UNITYSDK_OFFSET(0x195D7A30)
#define RPG_GAMECORE_BYSTATUSCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x195D76E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByStatusCount_TypeDefinitionIndex = 21328;

	class ByStatusCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::EnumStatusType StatusType; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x2C
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_945A0C20BF0D6408(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByStatusCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_945A0C20BF0D6408_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE032D9922A48C70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_DE032D9922A48C70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5A54384EF7D919CA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_5A54384EF7D919CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EBC84F05B44A34C9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSTATUSCOUNT_METHOD_4_EBC84F05B44A34C9_OFFSET))(a1, a2);
		}
	};
}
