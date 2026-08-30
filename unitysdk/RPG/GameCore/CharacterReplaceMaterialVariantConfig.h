#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterReplaceMaterialVariant; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_METHOD_2_AFA13D06C4CA73E3_OFFSET UNITYSDK_OFFSET(0x1CF9DD90)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9DE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceMaterialVariantConfig_TypeDefinitionIndex = 17248;

	class CharacterReplaceMaterialVariantConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterReplaceMaterialVariant*>* PropertyConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AFA13D06C4CA73E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterReplaceMaterialVariantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterReplaceMaterialVariantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALVARIANTCONFIG_METHOD_2_AFA13D06C4CA73E3_OFFSET))(a1, a2);
		}
	};
}
