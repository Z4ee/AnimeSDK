#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdvSetSkillSlotDataItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSETSKILLSLOTDATA_METHOD_3_5C9A2E60612CC682_OFFSET UNITYSDK_OFFSET(0x1CBA2600)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATA_METHOD_3_8DBEFE5F51BEE360_OFFSET UNITYSDK_OFFSET(0x1CBA2560)
#define RPG_GAMECORE_ADVSETSKILLSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA25C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetSkillSlotData_TypeDefinitionIndex = 19965;

	class AdvSetSkillSlotData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::AdvSetSkillSlotDataItem*>* Datas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8DBEFE5F51BEE360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetSkillSlotData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetSkillSlotData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA_METHOD_3_8DBEFE5F51BEE360_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C9A2E60612CC682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvSetSkillSlotData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvSetSkillSlotData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETSKILLSLOTDATA_METHOD_3_5C9A2E60612CC682_OFFSET))(a1, a2);
		}
	};
}
