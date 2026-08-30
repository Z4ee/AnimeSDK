#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE_METHOD_3_3A107AE2C4B34A74_OFFSET UNITYSDK_OFFSET(0x1DB912A0)
#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE_METHOD_3_8E00F712E627DF0F_OFFSET UNITYSDK_OFFSET(0x1DB91250)
#define RPG_GAMECORE_REQUESTGROUPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB91290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestGroupStateChange_TypeDefinitionIndex = 20485;

	class RequestGroupStateChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TargetState; // 0x18
		::System::Boolean NeedBlock; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E00F712E627DF0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestGroupStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestGroupStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE_METHOD_3_8E00F712E627DF0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A107AE2C4B34A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTGROUPSTATECHANGE_METHOD_3_3A107AE2C4B34A74_OFFSET))(a1, a2);
		}
	};
}
