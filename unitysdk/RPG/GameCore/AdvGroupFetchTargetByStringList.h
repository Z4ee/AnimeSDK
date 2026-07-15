#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_3454DD4BED52B546_OFFSET UNITYSDK_OFFSET(0x1BE1F100)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET UNITYSDK_OFFSET(0x1BE1F080)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_960709D7C2F5373B_OFFSET UNITYSDK_OFFSET(0x1BE1EFB0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_FF418B7174B6F5B9_OFFSET UNITYSDK_OFFSET(0x1BE1F150)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE1F070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByStringList_TypeDefinitionIndex = 20360;

	class AdvGroupFetchTargetByStringList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicStringList* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_960709D7C2F5373B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_960709D7C2F5373B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57BBBB0ACCFC992F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3454DD4BED52B546(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_3454DD4BED52B546_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FF418B7174B6F5B9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_FF418B7174B6F5B9_OFFSET))(a1, a2);
		}
	};
}
