#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HollowInteractEffectImpBase_EffectImpState.h"
#include "unitysdk/System/Object.h"

class Class_1_32D1736C0D56C181;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x16269AF0)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x16269B00)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_ONINTERACT_OFFSET UNITYSDK_OFFSET(0x16269B10)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_RESET_OFFSET UNITYSDK_OFFSET(0x16269CF0)
#define MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16269D40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractEffectImpBase_TypeDefinitionIndex = 85263;

	class HollowInteractEffectImpBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractCondition*>* conditions; // 0x10
		::MoleMole::Config::HollowInteractEffectImpBase_EffectImpState State; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void OnInteract(::Class_1_32D1736C0D56C181* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32D1736C0D56C181*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_ONINTERACT_OFFSET))(this, context);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWINTERACTEFFECTIMPBASE_RESET_OFFSET))(this);
		}
	};
}
