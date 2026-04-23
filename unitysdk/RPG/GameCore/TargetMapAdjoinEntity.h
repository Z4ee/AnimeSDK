#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdjoinType.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_6293A8663FBD49AF_OFFSET UNITYSDK_OFFSET(0x18EE7170)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_DCCAF6D535829D72_OFFSET UNITYSDK_OFFSET(0x18EE7200)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE71D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAdjoinEntity_TypeDefinitionIndex = 23006;

	class TargetMapAdjoinEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AdjoinType SideType; // 0x10
		::RPG::GameCore::AliveStateMask AliveType; // 0x12
		::System::Boolean IncludeAllRows; // 0x14
		::System::Int32 AdjoinCount; // 0x18
		::RPG::GameCore::TeamMemberCountingOption CountingOption; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6293A8663FBD49AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAdjoinEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAdjoinEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_6293A8663FBD49AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DCCAF6D535829D72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_METHOD_3_DCCAF6D535829D72_OFFSET))(a1, a2);
		}
	};
}
