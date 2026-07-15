#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_STARFIGHTUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B61CC0)
#define RPG_CLIENT_STARFIGHTUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B61D00)
#define RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_0_OFFSET UNITYSDK_OFFSET(0x17B61D10)
#define RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_1_OFFSET UNITYSDK_OFFSET(0x17B61D30)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightUtils___c_TypeDefinitionIndex = 64974;

	class StarFightUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightUtils___c** StaticGet___9()
		{
			return (::RPG::Client::StarFightUtils___c**)Il2CppClass::FromTypeDefinitionIndex(StarFightUtils___c_TypeDefinitionIndex)->GetStaticField(0x37540);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__0_1()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(StarFightUtils___c_TypeDefinitionIndex)->GetStaticField(0x37548);
		}
		static ::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::MonsterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StarFightUtils___c_TypeDefinitionIndex)->GetStaticField(0x37550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMonsterDataList_b__0_0(::RPG::Client::MonsterData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetMonsterDataList_b__0_1(::RPG::Client::MonsterData* a1, ::RPG::Client::MonsterData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS___C__GETMONSTERDATALIST_B__0_1_OFFSET))(this, a1, a2);
		}
	};
}
