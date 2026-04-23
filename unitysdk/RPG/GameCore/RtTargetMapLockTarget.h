#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_2AF889255713E1C7_OFFSET UNITYSDK_OFFSET(0x18DDAE20)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_42EFA8E6F02C2469_OFFSET UNITYSDK_OFFSET(0x18DDAF00)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDAEE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapLockTarget_TypeDefinitionIndex = 23257;

	class RtTargetMapLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2AF889255713E1C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_2AF889255713E1C7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42EFA8E6F02C2469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_42EFA8E6F02C2469_OFFSET))(a1, a2);
		}
	};
}
