#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_7EC1DC801A5784C8_OFFSET UNITYSDK_OFFSET(0x177C2CE0)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST_METHOD_3_87F8983D39A6305A_OFFSET UNITYSDK_OFFSET(0x177C2DC0)
#define RPG_GAMECORE_TARGETMAPDAMAGECHUNKTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177C2DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageChunkTargetList_TypeDefinitionIndex = 22295;

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
	};
}
