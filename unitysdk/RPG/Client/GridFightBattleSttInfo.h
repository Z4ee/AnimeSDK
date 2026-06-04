#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9EFCB63E481ADB7_2;
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xBAF2ED0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xBAF2EE0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xBAF2010)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xBAF2EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo_TypeDefinitionIndex = 60200;

	class GridFightBattleSttInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F9EFCB63E481ADB7_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* get_DamageStatistics()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_GET_DAMAGESTATISTICS_OFFSET))(this);
		}

		::System::Void set_DamageStatistics(::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SET_DAMAGESTATISTICS_OFFSET))(this, a1);
		}
	};
}
