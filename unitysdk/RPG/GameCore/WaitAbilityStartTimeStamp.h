#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_METHOD_3_2580D19FB44E2B6C_OFFSET UNITYSDK_OFFSET(0x1D69E020)
#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_METHOD_3_E88042C494CD0B7C_OFFSET UNITYSDK_OFFSET(0x1D69DF20)
#define RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D69DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitAbilityStartTimeStamp_TypeDefinitionIndex = 22437;

	class WaitAbilityStartTimeStamp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E88042C494CD0B7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAbilityStartTimeStamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_METHOD_3_E88042C494CD0B7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2580D19FB44E2B6C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitAbilityStartTimeStamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitAbilityStartTimeStamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITABILITYSTARTTIMESTAMP_METHOD_3_2580D19FB44E2B6C_OFFSET))(a1, a2);
		}
	};
}
