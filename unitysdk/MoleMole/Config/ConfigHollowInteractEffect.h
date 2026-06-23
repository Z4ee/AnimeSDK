#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowInteractEffectImp; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA52230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractEffect_TypeDefinitionIndex = 60655;

	class ConfigHollowInteractEffect : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractEffectImp*>* EffectImp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTEFFECT__CTOR_OFFSET))(this);
		}
	};
}
