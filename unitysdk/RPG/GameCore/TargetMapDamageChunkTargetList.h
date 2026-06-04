#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_0617BB01CB769054_OFFSET UNITYSDK_OFFSET(0x19D13390)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_64E9812DAF2B6A94_OFFSET UNITYSDK_OFFSET(0x19D133F0)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_7EC1DC801A5784C8_OFFSET UNITYSDK_OFFSET(0x19D13250)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_87F8983D39A6305A_OFFSET UNITYSDK_OFFSET(0x19D13330)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19D13310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageChunkTargetList_TypeDefinitionIndex = 22701;

	class TargetMapDamageChunkTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7EC1DC801A5784C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_7EC1DC801A5784C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_87F8983D39A6305A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_87F8983D39A6305A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0617BB01CB769054(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_0617BB01CB769054_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_64E9812DAF2B6A94(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageChunkTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageChunkTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_64E9812DAF2B6A94_OFFSET))(a1, a2);
		}
	};
}
