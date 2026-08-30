#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WAITRAIDEXITNOTIFY_METHOD_3_4B8C0EEF94234EC9_OFFSET UNITYSDK_OFFSET(0x1DEBF950)
#define RPG_GAMECORE_WAITRAIDEXITNOTIFY_METHOD_3_F8DC904A8602E752_OFFSET UNITYSDK_OFFSET(0x1DEBF990)
#define RPG_GAMECORE_WAITRAIDEXITNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBF980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitRaidExitNotify_TypeDefinitionIndex = 20670;

	class WaitRaidExitNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* RaidID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B8C0EEF94234EC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRaidExitNotify*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRaidExitNotify*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY_METHOD_3_4B8C0EEF94234EC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8DC904A8602E752(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitRaidExitNotify* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitRaidExitNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITRAIDEXITNOTIFY_METHOD_3_F8DC904A8602E752_OFFSET))(a1, a2);
		}
	};
}
