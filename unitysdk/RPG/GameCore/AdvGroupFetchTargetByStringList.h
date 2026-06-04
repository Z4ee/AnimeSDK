#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicStringList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET UNITYSDK_OFFSET(0x19426EF0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_616012D5FBD382A9_OFFSET UNITYSDK_OFFSET(0x19426D90)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_8E50614F28BE8626_OFFSET UNITYSDK_OFFSET(0x19426F70)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_EA5D15B543B4A536_OFFSET UNITYSDK_OFFSET(0x194270B0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19426EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByStringList_TypeDefinitionIndex = 19988;

	class AdvGroupFetchTargetByStringList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicStringList* Targets; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_616012D5FBD382A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_616012D5FBD382A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_57BBBB0ACCFC992F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_57BBBB0ACCFC992F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8E50614F28BE8626(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_8E50614F28BE8626_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EA5D15B543B4A536(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_METHOD_4_EA5D15B543B4A536_OFFSET))(a1, a2);
		}
	};
}
