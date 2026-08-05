#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class Class_1_32D1736C0D56C181;
class Class_4_AC6D98911872E0CE;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET UNITYSDK_OFFSET(0x19AD2D80)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x19AD2A40)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONSTOP_OFFSET UNITYSDK_OFFSET(0x19AD2EA0)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD2EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowEffectPlayerAndTarget_TypeDefinitionIndex = 86180;

	class ShowEffectPlayerAndTarget : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::String* TargetEffect; // 0x20
		::System::String* PlayerEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnInteractInternal(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET))(this, context);
		}

		::System::Void OnStop(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONSTOP_OFFSET))(this, context);
		}

		::Class_4_AC6D98911872E0CE* GetEntityRawPiece(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::Class_4_AC6D98911872E0CE*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET))(this, entity);
		}
	};
}
