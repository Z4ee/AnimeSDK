#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CameraLookAtScreenRange; }
namespace System { class String; }

#define RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_METHOD_2_023088A00DFD821B_OFFSET UNITYSDK_OFFSET(0x187B6CF0)
#define RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187B6E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraLookAtScreenRangeConfig_TypeDefinitionIndex = 19463;

	class CameraLookAtScreenRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::RPG::GameCore::CameraLookAtScreenRange* InRange; // 0x18
		::RPG::GameCore::CameraLookAtScreenRange* OutRange; // 0x20
		::System::String* RecoverCurvePath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_023088A00DFD821B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CameraLookAtScreenRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CameraLookAtScreenRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_METHOD_2_023088A00DFD821B_OFFSET))(a1, a2);
		}
	};
}
