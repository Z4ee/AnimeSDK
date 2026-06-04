#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITMISSIONTALKFINISH_METHOD_3_856C3D9F2B5A12BF_OFFSET UNITYSDK_OFFSET(0x19E5A970)
#define RPG_GAMECORE_WAITMISSIONTALKFINISH_METHOD_3_D9761DE28CC10713_OFFSET UNITYSDK_OFFSET(0x19E5AA80)
#define RPG_GAMECORE_WAITMISSIONTALKFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19E5AA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitMissionTalkFinish_TypeDefinitionIndex = 22506;

	class WaitMissionTalkFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_856C3D9F2B5A12BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMissionTalkFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMissionTalkFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH_METHOD_3_856C3D9F2B5A12BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9761DE28CC10713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitMissionTalkFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitMissionTalkFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITMISSIONTALKFINISH_METHOD_3_D9761DE28CC10713_OFFSET))(a1, a2);
		}
	};
}
