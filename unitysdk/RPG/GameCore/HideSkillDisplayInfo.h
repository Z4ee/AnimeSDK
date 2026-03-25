#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_HIDESKILLDISPLAYINFO_METHOD_3_3F5C9842FD8D2043_OFFSET UNITYSDK_OFFSET(0x172AAB50)
#define RPG_GAMECORE_HIDESKILLDISPLAYINFO_METHOD_3_5B8E2E055FA2DA70_OFFSET UNITYSDK_OFFSET(0x172AAAD0)
#define RPG_GAMECORE_HIDESKILLDISPLAYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172AAB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideSkillDisplayInfo_TypeDefinitionIndex = 21019;

	class HideSkillDisplayInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::System::String*>* SkillNameList; // 0x20
		::System::Boolean Clear; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B8E2E055FA2DA70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSkillDisplayInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSkillDisplayInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO_METHOD_3_5B8E2E055FA2DA70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3F5C9842FD8D2043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HideSkillDisplayInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HideSkillDisplayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDESKILLDISPLAYINFO_METHOD_3_3F5C9842FD8D2043_OFFSET))(a1, a2);
		}
	};
}
