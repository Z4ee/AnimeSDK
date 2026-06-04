#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_1620026A22D12DC9_OFFSET UNITYSDK_OFFSET(0x19C4F880)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_BEBC71F5A9CFC810_OFFSET UNITYSDK_OFFSET(0x19C4F800)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C4F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFollowLightDeviceDamp_TypeDefinitionIndex = 21114;

	class SetFollowLightDeviceDamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean On; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEBC71F5A9CFC810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFollowLightDeviceDamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFollowLightDeviceDamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_BEBC71F5A9CFC810_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1620026A22D12DC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_1620026A22D12DC9_OFFSET))(a1, a2);
		}
	};
}
