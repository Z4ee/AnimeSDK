#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_WAITUIANIM_METHOD_3_621287240969A22C_OFFSET UNITYSDK_OFFSET(0x1D6AF220)
#define RPG_GAMECORE_WAITUIANIM_METHOD_3_63AE727AE2E7D2F5_OFFSET UNITYSDK_OFFSET(0x1D6AF270)
#define RPG_GAMECORE_WAITUIANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitUIAnim_TypeDefinitionIndex = 24074;

	class WaitUIAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* AnimStateName; // 0x28
		::System::Single MaxWaitingTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_621287240969A22C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM_METHOD_3_621287240969A22C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63AE727AE2E7D2F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitUIAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitUIAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM_METHOD_3_63AE727AE2E7D2F5_OFFSET))(a1, a2);
		}
	};
}
