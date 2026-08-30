#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterEyeBloomConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_METHOD_2_41C2087F2111CB95_OFFSET UNITYSDK_OFFSET(0x1D121170)
#define RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D121250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeBloomMappingConfig_TypeDefinitionIndex = 17257;

	class CharacterEyeBloomMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEyeBloomConfig*>* SetConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_41C2087F2111CB95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEyeBloomMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEyeBloomMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYEBLOOMMAPPINGCONFIG_METHOD_2_41C2087F2111CB95_OFFSET))(a1, a2);
		}
	};
}
