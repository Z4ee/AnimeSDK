#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONVINCETRICKSKILL_CANTRIGGER_OFFSET UNITYSDK_OFFSET(0xCC73670)
#define RPG_CLIENT_CONVINCETRICKSKILL_GETSKILLEVENTNAME_OFFSET UNITYSDK_OFFSET(0xCC73590)
#define RPG_CLIENT_CONVINCETRICKSKILL_GET_USENUM_OFFSET UNITYSDK_OFFSET(0xCC734D0)
#define RPG_CLIENT_CONVINCETRICKSKILL_INIT_OFFSET UNITYSDK_OFFSET(0xCC73520)
#define RPG_CLIENT_CONVINCETRICKSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0xCC736C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ConvinceTrickSkill_TypeDefinitionIndex = 60784;

	class ConvinceTrickSkill : public ::System::Object
	{
	public:
		// static const ::System::String* EVT_CONVINCE_TRICK_SKILL; // 0x0
		::System::String* CustomEvtStr; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* UseTurnIndexList; // 0x18
		::RPG::GameCore::ConvinceTrickSkillType SkillType; // 0x20
		::System::Boolean IsTakingEffect; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_UseNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILL_GET_USENUM_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILL_INIT_OFFSET))(this, a1);
		}

		static ::System::String* GetSkillEventName(::RPG::GameCore::ConvinceTrickSkillType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ConvinceTrickSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILL_GETSKILLEVENTNAME_OFFSET))(a1);
		}

		::System::Boolean CanTrigger(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONVINCETRICKSKILL_CANTRIGGER_OFFSET))(this, a1);
		}
	};
}
