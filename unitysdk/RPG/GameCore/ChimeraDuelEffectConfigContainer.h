#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }

#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_METHOD_2_DFFB601554DA07DF_OFFSET UNITYSDK_OFFSET(0x1E331380)
#define RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E331470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectConfigContainer_TypeDefinitionIndex = 15836;

	class ChimeraDuelEffectConfigContainer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEffectConfig*>* EffectConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DFFB601554DA07DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEffectConfigContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEffectConfigContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTCONFIGCONTAINER_METHOD_2_DFFB601554DA07DF_OFFSET))(a1, a2);
		}
	};
}
