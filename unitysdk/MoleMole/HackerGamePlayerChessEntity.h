#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HackerGameChessEntity.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/StatusEffectType.h"

class Class_1_46BF3F90EBBA041A;
class Class_1_481C77891EF02060;
class Class_5_AF65C3A968E836D2;

#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0x170D6440)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x170D6750)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ONEFFECTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x170D6950)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_SETEFFECT_OFFSET UNITYSDK_OFFSET(0x170D66B0)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_TAKEDAMAGE_OFFSET UNITYSDK_OFFSET(0x170D6270)
#define MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x170D6B00)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGamePlayerChessEntity_TypeDefinitionIndex = 49243;

	class HackerGamePlayerChessEntity : public ::MoleMole::HackerGameChessEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY__CTOR_OFFSET))(this);
		}

		::System::Boolean TakeDamage(::MoleMole::HackerGameDamageData data, ::System::Int32 damageIn)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_TAKEDAMAGE_OFFSET))(this, data, damageIn);
		}

		::System::Boolean AttachEffect(::MoleMole::HackerGameDamageData data, ::Class_1_46BF3F90EBBA041A* statusEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HackerGameDamageData, ::Class_1_46BF3F90EBBA041A*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ATTACHEFFECT_OFFSET))(this, data, statusEffect);
		}

		::System::Void SetEffect(::MoleMole::StatusEffectType type, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_SETEFFECT_OFFSET))(this, type, value);
		}

		::System::Void Init(::Class_5_AF65C3A968E836D2* chessboard, ::System::UInt32 entityID, ::Class_1_481C77891EF02060* damageable)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_AF65C3A968E836D2*, ::System::UInt32, ::Class_1_481C77891EF02060*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_INIT_OFFSET))(this, chessboard, entityID, damageable);
		}

		::System::Void OnEffectTypeChanged(::MoleMole::StatusEffectType pre, ::MoleMole::StatusEffectType cur)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StatusEffectType, ::MoleMole::StatusEffectType))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMEPLAYERCHESSENTITY_ONEFFECTTYPECHANGED_OFFSET))(this, pre, cur);
		}
	};
}
