#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_GET_RANKSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B892EE0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_SETRANSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B8901D0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_SET_RANKSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B892EF0)
#define RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B892F00)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRankViewModel_TypeDefinitionIndex = 64008;

	class ExpeditionBattleRankViewModel : public ::System::Object
	{
	public:
		::System::String* _RankStateName_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* get_RankStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_GET_RANKSTATENAME_OFFSET))(this);
		}

		::System::Void set_RankStateName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_SET_RANKSTATENAME_OFFSET))(this, a1);
		}

		::System::Void SetRanStateName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERANKVIEWMODEL_SETRANSTATENAME_OFFSET))(this, a1);
		}
	};
}
