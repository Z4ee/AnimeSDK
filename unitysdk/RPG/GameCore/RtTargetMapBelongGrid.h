#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_336EDAEE54CA4B36_OFFSET UNITYSDK_OFFSET(0x1CCF2510)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_9B3CAA5943E71BA7_OFFSET UNITYSDK_OFFSET(0x1CCF2470)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_EFF85AAD8B422C1C_OFFSET UNITYSDK_OFFSET(0x1CCF2570)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_FC24B8A231AA7B58_OFFSET UNITYSDK_OFFSET(0x1CCF25B0)
#define RPG_GAMECORE_RTTARGETMAPBELONGGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF2500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtTargetMapBelongGrid_TypeDefinitionIndex = 23976;

	class RtTargetMapBelongGrid : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9B3CAA5943E71BA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBelongGrid*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBelongGrid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_9B3CAA5943E71BA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_336EDAEE54CA4B36(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_336EDAEE54CA4B36_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EFF85AAD8B422C1C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_EFF85AAD8B422C1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC24B8A231AA7B58(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtTargetMapBelongGrid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTTARGETMAPBELONGGRID_METHOD_3_FC24B8A231AA7B58_OFFSET))(a1, a2);
		}
	};
}
