#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_METHOD_3_263C9029BA8E4E5B_OFFSET UNITYSDK_OFFSET(0x1988D980)
#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_METHOD_3_868885340C799948_OFFSET UNITYSDK_OFFSET(0x1988D8E0)
#define RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1988D940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimitFrameMaxTimeStep_TypeDefinitionIndex = 19742;

	class LimitFrameMaxTimeStep : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single MaxTimeStep; // 0x18
		::System::Int32 LimitFrames; // 0x1C
		::System::Single LimitTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_868885340C799948(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LimitFrameMaxTimeStep*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LimitFrameMaxTimeStep*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_METHOD_3_868885340C799948_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_263C9029BA8E4E5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LimitFrameMaxTimeStep* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LimitFrameMaxTimeStep*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIMITFRAMEMAXTIMESTEP_METHOD_3_263C9029BA8E4E5B_OFFSET))(a1, a2);
		}
	};
}
