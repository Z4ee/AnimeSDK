#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRAWINDCATALYZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A07E7D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_DamageText_ConfigSpecialDamageTextExtraWindCatalyze_TypeDefinitionIndex = 55542;

	class ConfigUICommon_DamageText_ConfigSpecialDamageTextExtraWindCatalyze : public ::MoleMole::ConfigUICommon_DamageText_ConfigSpecialDamageTextExtra
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* TextureReplaceConfigsTC; // 0x10
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* TextureReplaceConfigsJP; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* TextureReplaceConfigsEN; // 0x20
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* TextureReplaceConfigs; // 0x28
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*>* TextureReplaceConfigsKR; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_DAMAGETEXT_CONFIGSPECIALDAMAGETEXTEXTRAWINDCATALYZE__CTOR_OFFSET))(this);
		}
	};
}
