#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_40CFAE43F24C4321_OFFSET UNITYSDK_OFFSET(0x1721E4A0)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_681B5AF7F5C1EB88_OFFSET UNITYSDK_OFFSET(0x1721E520)
#define RPG_GAMECORE_FRAMECAPTUREIFNEED__CTOR_OFFSET UNITYSDK_OFFSET(0x1721E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FrameCaptureIfNeed_TypeDefinitionIndex = 20913;

	class FrameCaptureIfNeed : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean WaitCaptureDone; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_40CFAE43F24C4321(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameCaptureIfNeed*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameCaptureIfNeed*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_40CFAE43F24C4321_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_681B5AF7F5C1EB88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FrameCaptureIfNeed* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FrameCaptureIfNeed*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FRAMECAPTUREIFNEED_METHOD_3_681B5AF7F5C1EB88_OFFSET))(a1, a2);
		}
	};
}
