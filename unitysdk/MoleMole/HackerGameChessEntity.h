#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/StatusEffectType.h"

class Class_1_46BF3F90EBBA041A;
class Class_1_821BF6236DB9DEE1;
namespace MoleMole::FlowCanvas { class HackShardedInfo; }

#define MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x19BF6060)
#define MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0x19BF5FC0)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0x19BF60C0)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BF5FE0)
#define MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0x19BF5FD0)
#define MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF6110)
#define MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19BF6120)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameChessEntity_TypeDefinitionIndex = 65843;

	class HackerGameChessEntity : public ::MoleMole::ChessEntity
	{
	public:
		::Class_1_821BF6236DB9DEE1* _Damageable_k__BackingField; // 0x40
		::MoleMole::FlowCanvas::HackShardedInfo* ShardedInfo; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET))(this);
		}

		::Class_1_821BF6236DB9DEE1* get_Damageable()
		{
			return ((::Class_1_821BF6236DB9DEE1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET))(this);
		}

		::System::Void set_Damageable(::Class_1_821BF6236DB9DEE1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_821BF6236DB9DEE1*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET))(this, value);
		}

		::System::Void OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void AttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void OnAttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void __base_OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET))(this);
		}
	};
}
