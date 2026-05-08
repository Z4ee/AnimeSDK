#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffAttackPropertType.h"
#include "unitysdk/MoleMole/Config/EVariantElement.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class BuffAttackProperty; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_BUFFVARIANTELEMENTATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1743CF40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffVariantElementAttack_TypeDefinitionIndex = 72533;

	class BuffVariantElementAttack : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EVariantElement, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BuffAttackPropertType, ::MoleMole::Config::BuffAttackProperty*>*>* BuffAttackProperties; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUFFVARIANTELEMENTATTACK__CTOR_OFFSET))(this);
		}
	};
}
