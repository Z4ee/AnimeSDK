#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONSTERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1960C280)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__17_0_OFFSET UNITYSDK_OFFSET(0x1960C380)
#define RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__14_0_OFFSET UNITYSDK_OFFSET(0x1960C2C0)
#define RPG_CLIENT_MONSTERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1960C2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterData___c_TypeDefinitionIndex = 63207;

	class MonsterData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x20140);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x20148);
		}
		static ::RPG::Client::MonsterData___c** StaticGet___9()
		{
			return (::RPG::Client::MonsterData___c**)Il2CppClass::FromTypeDefinitionIndex(MonsterData___c_TypeDefinitionIndex)->GetStaticField(0x20150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateDataListFromStageRow_b__14_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMSTAGEROW_B__14_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _CreateDataListFromIDList_b__17_0(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERDATA___C__CREATEDATALISTFROMIDLIST_B__17_0_OFFSET))(this, a1, a2);
		}
	};
}
