#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_1620026A22D12DC9_OFFSET UNITYSDK_OFFSET(0x1C5FAB50)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_E448B03A4E847242_OFFSET UNITYSDK_OFFSET(0x1C5FAB00)
#define RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FAB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFollowLightDeviceDamp_TypeDefinitionIndex = 21529;

	class SetFollowLightDeviceDamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean On; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E448B03A4E847242(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFollowLightDeviceDamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFollowLightDeviceDamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_E448B03A4E847242_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1620026A22D12DC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFollowLightDeviceDamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFollowLightDeviceDamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFOLLOWLIGHTDEVICEDAMP_METHOD_3_1620026A22D12DC9_OFFSET))(a1, a2);
		}
	};
}
