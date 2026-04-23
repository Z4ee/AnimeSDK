#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_METHOD_3_50F3D35B0ED03FC8_OFFSET UNITYSDK_OFFSET(0x18A020C0)
#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_METHOD_3_B042469FB748F930_OFFSET UNITYSDK_OFFSET(0x18A02140)
#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A02110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameSwitchCamera_TypeDefinitionIndex = 20296;

	class HipplenGameSwitchCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CameraName; // 0x18
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x20
		::System::Boolean LookAtHipplen; // 0x28
		::System::Boolean FollowHipplen; // 0x29
		::System::String* FollowAnchorName; // 0x30
		::System::Single MinFov; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_50F3D35B0ED03FC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameSwitchCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameSwitchCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_METHOD_3_50F3D35B0ED03FC8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B042469FB748F930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameSwitchCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_METHOD_3_B042469FB748F930_OFFSET))(a1, a2);
		}
	};
}
