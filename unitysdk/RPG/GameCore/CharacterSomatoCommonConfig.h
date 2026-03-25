#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SomatoCommonCameraConfig; }

#define RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_METHOD_2_D75A76959AFBB71D_OFFSET UNITYSDK_OFFSET(0x17073020)
#define RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170730F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSomatoCommonConfig_TypeDefinitionIndex = 15159;

	class CharacterSomatoCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SomatoCommonCameraConfig*>* SomatoCameraConfigList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D75A76959AFBB71D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSomatoCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSomatoCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSOMATOCOMMONCONFIG_METHOD_2_D75A76959AFBB71D_OFFSET))(a1, a2);
		}
	};
}
