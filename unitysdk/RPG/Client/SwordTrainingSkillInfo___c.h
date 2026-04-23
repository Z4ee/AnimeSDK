#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SwordTrainingSameRankSkill.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingSkillTypeData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB25D9E0)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB25DA20)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__FETCHSAMERANKSKILLLIST_B__15_0_OFFSET UNITYSDK_OFFSET(0xB25DA50)
#define RPG_CLIENT_SWORDTRAININGSKILLINFO___C__GETUNLOCKSKILLTYPEDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xB25DA30)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingSkillInfo___c_TypeDefinitionIndex = 57166;

	class SwordTrainingSkillInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::SwordTrainingSameRankSkill>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::RPG::Client::SwordTrainingSameRankSkill>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EFC0);
		}
		static ::RPG::Client::SwordTrainingSkillInfo___c** StaticGet___9()
		{
			return (::RPG::Client::SwordTrainingSkillInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EFC8);
		}
		static ::System::Func_2<::RPG::Client::SwordTrainingSkillTypeData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::SwordTrainingSkillTypeData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SwordTrainingSkillInfo___c_TypeDefinitionIndex)->GetStaticField(0x2EFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockSkillTypeData_b__5_0(::RPG::Client::SwordTrainingSkillTypeData* skillTypeData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SwordTrainingSkillTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__GETUNLOCKSKILLTYPEDATA_B__5_0_OFFSET))(this, skillTypeData);
		}

		::System::Int32 _FetchSameRankSkillList_b__15_0(::RPG::Client::SwordTrainingSameRankSkill a, ::RPG::Client::SwordTrainingSameRankSkill b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SwordTrainingSameRankSkill, ::RPG::Client::SwordTrainingSameRankSkill))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSKILLINFO___C__FETCHSAMERANKSKILLLIST_B__15_0_OFFSET))(this, a, b);
		}
	};
}
