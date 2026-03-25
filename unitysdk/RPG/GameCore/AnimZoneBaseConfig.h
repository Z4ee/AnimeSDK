#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ANIMZONEBASECONFIG_METHOD_2_11F3ADFC5CB57C83_OFFSET UNITYSDK_OFFSET(0x16F82480)
#define RPG_GAMECORE_ANIMZONEBASECONFIG_METHOD_2_A3F66B40D05E28A4_OFFSET UNITYSDK_OFFSET(0x16F825E0)
#define RPG_GAMECORE_ANIMZONEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F825D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimZoneBaseConfig_TypeDefinitionIndex = 14938;

	class AnimZoneBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AnimZoneType ZoneType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_11F3ADFC5CB57C83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimZoneBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimZoneBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG_METHOD_2_11F3ADFC5CB57C83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_A3F66B40D05E28A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AnimZoneBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AnimZoneBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANIMZONEBASECONFIG_METHOD_2_A3F66B40D05E28A4_OFFSET))(a1, a2);
		}
	};
}
