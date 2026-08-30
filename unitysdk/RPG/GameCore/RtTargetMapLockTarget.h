#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_27C2529E1748E483_OFFSET UNITYSDK_OFFSET(0x1D4B75A0)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_42EFA8E6F02C2469_OFFSET UNITYSDK_OFFSET(0x1D4B7500)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_680BEAE287B8BB7F_OFFSET UNITYSDK_OFFSET(0x1D4B7560)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_E937B848A4BD5594_OFFSET UNITYSDK_OFFSET(0x1D4B7460)
#define RPG_GAMECORE_RTTARGETMAPLOCKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B74F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapLockTarget_TypeDefinitionIndex = 23972;

	class RtTargetMapLockTarget : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E937B848A4BD5594(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapLockTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_E937B848A4BD5594_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_42EFA8E6F02C2469(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_42EFA8E6F02C2469_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_680BEAE287B8BB7F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_680BEAE287B8BB7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_27C2529E1748E483(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapLockTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapLockTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPLOCKTARGET_METHOD_3_27C2529E1748E483_OFFSET))(a1, a2);
		}
	};
}
