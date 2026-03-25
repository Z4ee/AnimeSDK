#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonsterData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FB5A90)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FB5AD0)
#define RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__GETSORTEDMONSTERS_B__23_0_OFFSET UNITYSDK_OFFSET(0x8FB5AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySummonLevel___c_TypeDefinitionIndex = 50256;

	class ActivitySummonLevel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivitySummonLevel___c** StaticGet___9()
		{
			return (::RPG::Client::ActivitySummonLevel___c**)Il2CppClass::FromTypeDefinitionIndex(ActivitySummonLevel___c_TypeDefinitionIndex)->GetStaticField(0x2FD90);
		}
		static ::System::Comparison_1<::RPG::Client::MonsterData*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonsterData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivitySummonLevel___c_TypeDefinitionIndex)->GetStaticField(0x2FD98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedMonsters_b__23_0(::RPG::Client::MonsterData* a, ::RPG::Client::MonsterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonsterData*, ::RPG::Client::MonsterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSUMMONLEVEL___C__GETSORTEDMONSTERS_B__23_0_OFFSET))(this, a, b);
		}
	};
}
