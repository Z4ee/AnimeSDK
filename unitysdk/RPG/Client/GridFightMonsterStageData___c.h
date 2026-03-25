#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x986D6D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x986D710)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x986D720)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_1_OFFSET UNITYSDK_OFFSET(0x986D730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterStageData___c_TypeDefinitionIndex = 52827;

	class GridFightMonsterStageData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightMonsterStageData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightMonsterStageData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x17820);
		}
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x17828);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x17830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>* __GetHighestTierMonster_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* list)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_0_OFFSET))(this, list);
		}

		::System::UInt32 __GetHighestTierMonster_b__2_1(::RPG::Client::GridFightMonsterData* monster)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_1_OFFSET))(this, monster);
		}
	};
}
