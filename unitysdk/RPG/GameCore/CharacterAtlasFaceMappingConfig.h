#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterAtlasFaceSet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_METHOD_2_39C87D6E6793C4D7_OFFSET UNITYSDK_OFFSET(0x187CA810)
#define RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187CA8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAtlasFaceMappingConfig_TypeDefinitionIndex = 16567;

	class CharacterAtlasFaceMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterAtlasFaceSet*>* SetConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_39C87D6E6793C4D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterAtlasFaceMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterAtlasFaceMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERATLASFACEMAPPINGCONFIG_METHOD_2_39C87D6E6793C4D7_OFFSET))(a1, a2);
		}
	};
}
