#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaitLevelGraphFinishMode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITLEVELGRAPHFINISH_METHOD_3_292347D820564F67_OFFSET UNITYSDK_OFFSET(0x1D6A5A50)
#define RPG_GAMECORE_WAITLEVELGRAPHFINISH_METHOD_3_6C8578269E41A10A_OFFSET UNITYSDK_OFFSET(0x1D6A5A90)
#define RPG_GAMECORE_WAITLEVELGRAPHFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLevelGraphFinish_TypeDefinitionIndex = 23128;

	class WaitLevelGraphFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WaitLevelGraphFinishMode WaitMode; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_292347D820564F67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLevelGraphFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLevelGraphFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH_METHOD_3_292347D820564F67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6C8578269E41A10A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitLevelGraphFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitLevelGraphFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH_METHOD_3_6C8578269E41A10A_OFFSET))(a1, a2);
		}
	};
}
