#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightMonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD220280)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD2202C0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xD2202D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_1_OFFSET UNITYSDK_OFFSET(0xD2202E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterStageData___c_TypeDefinitionIndex = 65121;

	class GridFightMonsterStageData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x3E440);
		}
		static ::RPG::Client::GridFightMonsterStageData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightMonsterStageData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x3E448);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightMonsterStageData___c_TypeDefinitionIndex)->GetStaticField(0x3E450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>* __GetHighestTierMonster_b__2_0(::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetHighestTierMonster_b__2_1(::RPG::Client::GridFightMonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERSTAGEDATA___C___GETHIGHESTTIERMONSTER_B__2_1_OFFSET))(this, a1);
		}
	};
}
