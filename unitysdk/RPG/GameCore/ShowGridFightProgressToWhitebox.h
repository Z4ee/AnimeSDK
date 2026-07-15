#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_METHOD_3_A92AC528E89D284B_OFFSET UNITYSDK_OFFSET(0x1BE3FDE0)
#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_METHOD_3_FC30094AEA603F38_OFFSET UNITYSDK_OFFSET(0x1BE3FDA0)
#define RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3FDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGridFightProgressToWhitebox_TypeDefinitionIndex = 22465;

	class ShowGridFightProgressToWhitebox : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOpen; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FC30094AEA603F38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_METHOD_3_FC30094AEA603F38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A92AC528E89D284B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGridFightProgressToWhitebox* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGridFightProgressToWhitebox*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGRIDFIGHTPROGRESSTOWHITEBOX_METHOD_3_A92AC528E89D284B_OFFSET))(a1, a2);
		}
	};
}
