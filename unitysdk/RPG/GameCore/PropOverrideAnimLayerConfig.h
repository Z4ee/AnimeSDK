#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_METHOD_2_A1F8D543E28D0146_OFFSET UNITYSDK_OFFSET(0x1BA25DF0)
#define RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA25F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOverrideAnimLayerConfig_TypeDefinitionIndex = 16871;

	class PropOverrideAnimLayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimationClipPath; // 0x10
		::System::Single FixedNormalizedTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A1F8D543E28D0146(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropOverrideAnimLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropOverrideAnimLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDEANIMLAYERCONFIG_METHOD_2_A1F8D543E28D0146_OFFSET))(a1, a2);
		}
	};
}
