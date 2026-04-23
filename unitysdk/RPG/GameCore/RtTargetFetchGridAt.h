#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_6878803BF260A7BF_OFFSET UNITYSDK_OFFSET(0x18DD9230)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_6A55865FD175D202_OFFSET UNITYSDK_OFFSET(0x18DD92F0)
#define RPG_GAMECORE_RTTARGETFETCHGRIDAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD92A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetFetchGridAt_TypeDefinitionIndex = 23249;

	class RtTargetFetchGridAt : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* BasePos; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* x; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* y; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6878803BF260A7BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_6878803BF260A7BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6A55865FD175D202(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetFetchGridAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetFetchGridAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETFETCHGRIDAT_METHOD_4_6A55865FD175D202_OFFSET))(a1, a2);
		}
	};
}
