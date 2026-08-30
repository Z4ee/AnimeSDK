#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_METHOD_3_3C7F17FB9A67D410_OFFSET UNITYSDK_OFFSET(0x1CDCC6B0)
#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_METHOD_3_FB454D8F3FC1AAE4_OFFSET UNITYSDK_OFFSET(0x1CDCC670)
#define RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCC6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricSetSwipeCamera_TypeDefinitionIndex = 21966;

	class AdvIsometricSetSwipeCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsActive; // 0x18
		::RPG::GameCore::DynamicFloat* OffsetUp; // 0x20
		::RPG::GameCore::DynamicFloat* OffsetDown; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetLeft; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetRight; // 0x38
		::RPG::GameCore::DynamicFloat* RecoverTime; // 0x40
		::RPG::GameCore::DynamicFloat* JoystickFactor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB454D8F3FC1AAE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_METHOD_3_FB454D8F3FC1AAE4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3C7F17FB9A67D410(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvIsometricSetSwipeCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvIsometricSetSwipeCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICSETSWIPECAMERA_METHOD_3_3C7F17FB9A67D410_OFFSET))(a1, a2);
		}
	};
}
