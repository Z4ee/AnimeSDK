#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8844A4E6AE686D5C_5;
namespace RPG::Client { class GridFightDamageStatisticInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_GET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD143080)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SET_DAMAGESTATISTICS_OFFSET UNITYSDK_OFFSET(0xD143090)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD141E20)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD1430A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo_TypeDefinitionIndex = 64472;

	class GridFightBattleSttInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightDamageStatisticInfo*>* _DamageStatistics_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_8844A4E6AE686D5C_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8844A4E6AE686D5C_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO_SYNC_OFFSET))(this, a1);
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
