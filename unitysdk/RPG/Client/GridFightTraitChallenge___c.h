#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B2E90)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B2ED0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET UNITYSDK_OFFSET(0xA5B2F20)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET UNITYSDK_OFFSET(0xA5B2F90)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET UNITYSDK_OFFSET(0xA5B2FA0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET UNITYSDK_OFFSET(0xA5B3010)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET UNITYSDK_OFFSET(0xA5B2EE0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET UNITYSDK_OFFSET(0xA5B2F00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge___c_TypeDefinitionIndex = 60237;

	class GridFightTraitChallenge___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A730);
		}
		static ::RPG::Client::GridFightTraitChallenge___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitChallenge___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A738);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A740);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A748);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A750);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A758);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1A760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateState_b__9_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET))(this, quest);
		}

		::System::Boolean _UpdateState_b__9_1(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET))(this, quest);
		}

		::RPG::Client::QuestData* _get_Quests_b__27_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET))(this, t);
		}

		::System::Boolean _get_Quests_b__27_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET))(this, t);
		}

		::RPG::Client::QuestData* _get_StandardQuests_b__29_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET))(this, t);
		}

		::System::Boolean _get_StandardQuests_b__29_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET))(this, t);
		}
	};
}
