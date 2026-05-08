#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase.h"
#include "unitysdk/Struct_2_C87A89B4261FDC79.h"

class Class_1_32D1736C0D56C181;
class Class_2_6D8377DB91A00B0F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_CHECK_OFFSET UNITYSDK_OFFSET(0x186A9170)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_FINISH_OFFSET UNITYSDK_OFFSET(0x186A9690)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET UNITYSDK_OFFSET(0x186A8C70)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONSTOP_OFFSET UNITYSDK_OFFSET(0x186A9270)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_PLAYBEHAVIOR_OFFSET UNITYSDK_OFFSET(0x186A8D10)
#define MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x186A96E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BehaviorBetweenPlayerAndTarget_TypeDefinitionIndex = 49554;

	class BehaviorBetweenPlayerAndTarget : public ::MoleMole::Config::HollowInteractEffectImpBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_2_6D8377DB91A00B0F*>* workingDatas; // 0x20
		::System::Collections::Generic::List_1<::Struct_2_C87A89B4261FDC79>* handles; // 0x28
		::System::String* TargetBehavior; // 0x30
		::System::String* PlayerBehavior; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnInteractInternal(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONINTERACTINTERNAL_OFFSET))(this, context);
		}

		::System::Void Check()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_CHECK_OFFSET))(this);
		}

		::System::Void PlayBehavior(::MoleMole::HollowChessboard::HollowEntity* entity, ::Class_1_32D1736C0D56C181* context, ::System::String* behavior, ::System::Boolean isPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_1_32D1736C0D56C181*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_PLAYBEHAVIOR_OFFSET))(this, entity, context, behavior, isPlayer);
		}

		::System::Void OnStop(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_ONSTOP_OFFSET))(this, context);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BEHAVIORBETWEENPLAYERANDTARGET_FINISH_OFFSET))(this);
		}
	};
}
