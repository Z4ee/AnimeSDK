#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_METHOD_2_72E3807973F21397_OFFSET UNITYSDK_OFFSET(0x1CF963F0)
#define RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF964D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEyeCtrlMappingConfig_TypeDefinitionIndex = 17253;

	class CharacterEyeCtrlMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEyeCtrlConfig*>* SetConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_72E3807973F21397(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEyeCtrlMappingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEyeCtrlMappingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEREYECTRLMAPPINGCONFIG_METHOD_2_72E3807973F21397_OFFSET))(a1, a2);
		}
	};
}
