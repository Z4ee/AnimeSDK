#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98CC390)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98CC3D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_ANYFINISHED_B__14_0_OFFSET UNITYSDK_OFFSET(0x98CC3E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_ISCOMPLETED_B__16_0_OFFSET UNITYSDK_OFFSET(0x98CC400)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__22_0_OFFSET UNITYSDK_OFFSET(0x98CC420)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__22_1_OFFSET UNITYSDK_OFFSET(0x98CC490)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__24_0_OFFSET UNITYSDK_OFFSET(0x98CC4A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__24_1_OFFSET UNITYSDK_OFFSET(0x98CC510)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge___c_TypeDefinitionIndex = 53116;

	class GridFightTraitChallenge___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitChallenge___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitChallenge___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AA80);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AA88);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AA90);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AA98);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AAA0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AAA8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::QuestData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitChallenge___c_TypeDefinitionIndex)->GetStaticField(0x1AAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AnyFinished_b__14_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_ANYFINISHED_B__14_0_OFFSET))(this, quest);
		}

		::System::Boolean _get_IsCompleted_b__16_0(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_ISCOMPLETED_B__16_0_OFFSET))(this, quest);
		}

		::RPG::Client::QuestData* _get_Quests_b__22_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__22_0_OFFSET))(this, t);
		}

		::System::Boolean _get_Quests_b__22_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_QUESTS_B__22_1_OFFSET))(this, t);
		}

		::RPG::Client::QuestData* _get_StandardQuests_b__24_0(::System::UInt32 t)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__24_0_OFFSET))(this, t);
		}

		::System::Boolean _get_StandardQuests_b__24_1(::RPG::Client::QuestData* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE___C__GET_STANDARDQUESTS_B__24_1_OFFSET))(this, t);
		}
	};
}
