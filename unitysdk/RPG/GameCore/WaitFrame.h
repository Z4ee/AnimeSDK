#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITFRAME_METHOD_3_622B9B2708997D6B_OFFSET UNITYSDK_OFFSET(0x1D6A4120)
#define RPG_GAMECORE_WAITFRAME_METHOD_3_7E9364849DBF2748_OFFSET UNITYSDK_OFFSET(0x1D6A40D0)
#define RPG_GAMECORE_WAITFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A4110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitFrame_TypeDefinitionIndex = 23513;

	class WaitFrame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 WaitFrameCount; // 0x18
		::System::Boolean RealFrame; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E9364849DBF2748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME_METHOD_3_7E9364849DBF2748_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_622B9B2708997D6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitFrame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitFrame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFRAME_METHOD_3_622B9B2708997D6B_OFFSET))(a1, a2);
		}
	};
}
