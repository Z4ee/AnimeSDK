#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterCustomPreloadConfigBase; }
namespace RPG::GameCore { class EffectInstanceConfig; }
namespace RPG::GameCore { class PreloadStateTransitionConfig; }
namespace RPG::GameCore { class SummonEntityPreloadConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE_METHOD_2_1C69A7E6203BF7AF_OFFSET UNITYSDK_OFFSET(0x1D127680)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE_METHOD_2_CF8C4B19F780492F_OFFSET UNITYSDK_OFFSET(0x1D1278C0)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D127670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPreloadConfigBase_TypeDefinitionIndex = 16165;

	class CharacterPreloadConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* EffectAssetList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectInstanceConfig*>* EffectInstanceMap; // 0x18
		::Il2CppArray<::RPG::GameCore::SummonEntityPreloadConfig*>* SummonEntityList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PreloadStateMaskMap; // 0x28
		::Il2CppArray<::RPG::GameCore::PreloadStateTransitionConfig*>* PreloadStateTransitionList; // 0x30
		::Il2CppArray<::RPG::GameCore::CharacterCustomPreloadConfigBase*>* Custom; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1C69A7E6203BF7AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE_METHOD_2_1C69A7E6203BF7AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_CF8C4B19F780492F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIGBASE_METHOD_2_CF8C4B19F780492F_OFFSET))(a1, a2);
		}
	};
}
