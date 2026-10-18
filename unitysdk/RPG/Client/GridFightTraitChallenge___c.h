#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2AEEB0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2AEEF0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET UNITYSDK_OFFSET(0xD2AEF40)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET UNITYSDK_OFFSET(0xD2AEFB0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET UNITYSDK_OFFSET(0xD2AEFC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET UNITYSDK_OFFSET(0xD2AF030)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET UNITYSDK_OFFSET(0xD2AEF00)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET UNITYSDK_OFFSET(0xD2AEF20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge___c_TypeDefinitionIndex = 65435;

	class GridFightTraitChallenge___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B70);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B78);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B80);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__27_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B88);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B90);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2B98);
		}
		static ::RPG::Client::GridFightTraitChallenge___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitChallenge___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x2BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateState_b__9_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _UpdateState_b__9_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__UPDATESTATE_B__9_1_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* _get_Quests_b__27_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Quests_b__27_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__27_1_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* _get_StandardQuests_b__29_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_StandardQuests_b__29_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__29_1_OFFSET))(this, a1);
		}
	};
}
