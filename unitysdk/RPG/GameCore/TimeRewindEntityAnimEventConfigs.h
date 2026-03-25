#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SingleTimeRewindEntityAnimClipEventConfig; }
namespace RPG::GameCore { class SingleTimeRewindEntityAnimStateEventConfig; }

#define RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_METHOD_2_98308F8FB54F7ABA_OFFSET UNITYSDK_OFFSET(0x1789F2D0)
#define RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1789F440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEntityAnimEventConfigs_TypeDefinitionIndex = 15203;

	class TimeRewindEntityAnimEventConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleTimeRewindEntityAnimStateEventConfig*>* AnimStateEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::SingleTimeRewindEntityAnimClipEventConfig*>* AnimClipEvents; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_98308F8FB54F7ABA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TimeRewindEntityAnimEventConfigs*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TimeRewindEntityAnimEventConfigs*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDENTITYANIMEVENTCONFIGS_METHOD_2_98308F8FB54F7ABA_OFFSET))(a1, a2);
		}
	};
}
