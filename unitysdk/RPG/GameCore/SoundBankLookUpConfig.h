#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EventLookUpConfig; }

#define RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_METHOD_2_FE47A9DAE5F72BF9_OFFSET UNITYSDK_OFFSET(0x1D53CE80)
#define RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53CF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SoundBankLookUpConfig_TypeDefinitionIndex = 16216;

	class SoundBankLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EventLookUpConfig*>* Events; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FE47A9DAE5F72BF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SoundBankLookUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SoundBankLookUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SOUNDBANKLOOKUPCONFIG_METHOD_2_FE47A9DAE5F72BF9_OFFSET))(a1, a2);
		}
	};
}
