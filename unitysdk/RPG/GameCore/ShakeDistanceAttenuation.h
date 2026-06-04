#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHAKEDISTANCEATTENUATION_METHOD_2_4D9185EE61470553_OFFSET UNITYSDK_OFFSET(0x19C6C1F0)
#define RPG_GAMECORE_SHAKEDISTANCEATTENUATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C6C390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShakeDistanceAttenuation_TypeDefinitionIndex = 15595;

	class ShakeDistanceAttenuation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::String* AttachPointName; // 0x18
		::System::Single ShakeDistance; // 0x20
		::System::String* ShakeAttenuationCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAKEDISTANCEATTENUATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4D9185EE61470553(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShakeDistanceAttenuation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShakeDistanceAttenuation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHAKEDISTANCEATTENUATION_METHOD_2_4D9185EE61470553_OFFSET))(a1, a2);
		}
	};
}
