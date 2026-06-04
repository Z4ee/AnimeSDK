#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BuildEffectPreloadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_METHOD_2_FCC5DFFDAE3B699E_OFFSET UNITYSDK_OFFSET(0x194EF540)
#define RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194EF6C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BuildEffectPreloadConfig_TypeDefinitionIndex = 15531;

	class BuildEffectPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BuildEffectPreloadItem*>* BuildMonsterEffectConfigMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::BuildEffectPreloadItem*>* BuildAvatarEffectConfigMap; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FCC5DFFDAE3B699E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BuildEffectPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BuildEffectPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADCONFIG_METHOD_2_FCC5DFFDAE3B699E_OFFSET))(a1, a2);
		}
	};
}
