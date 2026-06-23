#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectsByCharacterSize.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGWINDBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3D610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWindBuff_TypeDefinitionIndex = 53067;

	class ConfigWindBuff : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_MaterialPropertyModifiersByCharacterSize>* AbnomalConversionMatPropMdfs; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::MoleMole::Config::ConfigBuffMisc_EffectsByCharacterSize>* AbnomalConversionEffects; // 0x18
		::System::Collections::Generic::HashSet_1<::MoleMole::Config::DamageElementType>* ConvertibleElements; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWINDBUFF__CTOR_OFFSET))(this);
		}
	};
}
