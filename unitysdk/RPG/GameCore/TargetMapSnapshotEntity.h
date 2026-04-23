#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_06E3DDDA2129CF58_OFFSET UNITYSDK_OFFSET(0x18EE9920)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_5500FE8EDE53ED89_OFFSET UNITYSDK_OFFSET(0x18EE9860)
#define RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE9900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSnapshotEntity_TypeDefinitionIndex = 22947;

	class TargetMapSnapshotEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5500FE8EDE53ED89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSnapshotEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSnapshotEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_5500FE8EDE53ED89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_06E3DDDA2129CF58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapSnapshotEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapSnapshotEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSNAPSHOTENTITY_METHOD_3_06E3DDDA2129CF58_OFFSET))(a1, a2);
		}
	};
}
