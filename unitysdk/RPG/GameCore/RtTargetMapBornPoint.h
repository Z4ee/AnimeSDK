#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET UNITYSDK_OFFSET(0x18DDA2E0)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_10FB9A382D91F85A_OFFSET UNITYSDK_OFFSET(0x18DDA200)
#define RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDA2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBornPoint_TypeDefinitionIndex = 23263;

	class RtTargetMapBornPoint : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_10FB9A382D91F85A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_10FB9A382D91F85A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_07C4DE7B0E434CC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBornPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBornPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBORNPOINT_METHOD_3_07C4DE7B0E434CC8_OFFSET))(a1, a2);
		}
	};
}
