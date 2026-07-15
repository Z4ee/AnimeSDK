#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_3817B6FB4DC0936B_OFFSET UNITYSDK_OFFSET(0x1B97E270)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_681B5AF7F5C1EB88_OFFSET UNITYSDK_OFFSET(0x1B97E2C0)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97E2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameCaptureIfNeed_TypeDefinitionIndex = 21907;

	class FrameCaptureIfNeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitCaptureDone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3817B6FB4DC0936B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameCaptureIfNeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameCaptureIfNeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_3817B6FB4DC0936B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_681B5AF7F5C1EB88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_681B5AF7F5C1EB88_OFFSET))(a1, a2);
		}
	};
}
