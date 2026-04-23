#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_336EDAEE54CA4B36_OFFSET UNITYSDK_OFFSET(0x18DDA1A0)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_5E1BF5CFB6D1ADF4_OFFSET UNITYSDK_OFFSET(0x18DDA0C0)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDA180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBelongGrid_TypeDefinitionIndex = 23261;

	class RtTargetMapBelongGrid : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5E1BF5CFB6D1ADF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBelongGrid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBelongGrid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_5E1BF5CFB6D1ADF4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_336EDAEE54CA4B36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_336EDAEE54CA4B36_OFFSET))(a1, a2);
		}
	};
}
