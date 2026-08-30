#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingSameRankSkill.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingSkillTypeData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B48EEA0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B48EEE0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__FETCHSAMERANKSKILLLIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x1B48EF10)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__GETUNLOCKSKILLTYPEDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B48EEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo___c_TypeDefinitionIndex = 62057;

	class SwordTrainingSkillInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::SwordTrainingSkillInfo___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingSkillInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x39420);
		}
		static ::System::Func_2<::RPG::Client::SwordTrainingSkillTypeData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::SwordTrainingSkillTypeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x39428);
		}
		static ::System::Comparison_1<::RPG::Client::SwordTrainingSameRankSkill>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::RPG::Client::SwordTrainingSameRankSkill>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x39430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockSkillTypeData_b__5_0(::RPG::Client::SwordTrainingSkillTypeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__GETUNLOCKSKILLTYPEDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _FetchSameRankSkillList_b__15_0(::RPG::Client::SwordTrainingSameRankSkill a1, ::RPG::Client::SwordTrainingSameRankSkill a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSameRankSkill, ::RPG::Client::SwordTrainingSameRankSkill))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__FETCHSAMERANKSKILLLIST_B__15_0_OFFSET))(this, a1, a2);
		}
	};
}
