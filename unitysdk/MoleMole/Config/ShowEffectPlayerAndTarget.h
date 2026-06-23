#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"

class Class_1_32D1736C0D56C181;
class Class_4_DA19DD65175B97CF;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET UNITYSDK_OFFSET(0xE981B10)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0xE9817D0)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_ONSTOP_OFFSET UNITYSDK_OFFSET(0xE981C30)
#define MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xE981C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ShowEffectPlayerAndTarget_TypeDefinitionIndex = 56542;

	class ShowEffectPlayerAndTarget : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::String* PlayerEffect; // 0x20
		::System::String* TargetEffect; // 0x28

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

		::Class_4_DA19DD65175B97CF* GetEntityRawPiece(::MoleMole::HollowChessboard::HollowEntity* entity)
		{
			return ((::Class_4_DA19DD65175B97CF*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SHOWEFFECTPLAYERANDTARGET_GETENTITYRAWPIECE_OFFSET))(this, entity);
		}
	};
}
