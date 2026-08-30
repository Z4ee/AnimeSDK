#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_5EC4CE779EB196B2_OFFSET UNITYSDK_OFFSET(0x1D4B7450)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_899EF891AAFA61E5_OFFSET UNITYSDK_OFFSET(0x1D4B7310)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_A60A4D91141B3820_OFFSET UNITYSDK_OFFSET(0x1D4B73B0)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_C4E4CF1571A0E5D6_OFFSET UNITYSDK_OFFSET(0x1D4B7410)
#define RPG_GAMECORE_RTTARGETMAPGRIDOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B73A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapGridOwner_TypeDefinitionIndex = 23981;

	class RtTargetMapGridOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_899EF891AAFA61E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_899EF891AAFA61E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A60A4D91141B3820(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_A60A4D91141B3820_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4E4CF1571A0E5D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_C4E4CF1571A0E5D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5EC4CE779EB196B2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapGridOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapGridOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPGRIDOWNER_METHOD_3_5EC4CE779EB196B2_OFFSET))(a1, a2);
		}
	};
}
