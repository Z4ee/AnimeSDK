#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EffectAdaptCharaScaleDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERSCALEDATACONFIG_METHOD_2_5D827DF73B42C643_OFFSET UNITYSDK_OFFSET(0x17072A40)
#define RPG_GAMECORE_CHARACTERSCALEDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17072B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterScaleDataConfig_TypeDefinitionIndex = 15103;

	class CharacterScaleDataConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectAdaptCharaScaleDataItem*>* EffectAdaptCharaScaleDataMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSCALEDATACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5D827DF73B42C643(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterScaleDataConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterScaleDataConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSCALEDATACONFIG_METHOD_2_5D827DF73B42C643_OFFSET))(a1, a2);
		}
	};
}
