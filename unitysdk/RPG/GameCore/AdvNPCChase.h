#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCCHASE_METHOD_3_7C5EA4D0B6671437_OFFSET UNITYSDK_OFFSET(0x18656170)
#define RPG_GAMECORE_ADVNPCCHASE_METHOD_3_F858BCF12B5500D1_OFFSET UNITYSDK_OFFSET(0x186561F0)
#define RPG_GAMECORE_ADVNPCCHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x186561C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCChase_TypeDefinitionIndex = 18898;

	class AdvNPCChase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single ChaseRadius; // 0x18
		::System::Single SearchOffsetFromTarget; // 0x1C
		::RPG::GameCore::TaskConfig* OnMissTarget; // 0x20
		::RPG::GameCore::TaskConfig* OnFoundTarget; // 0x28
		::RPG::GameCore::TaskConfig* OnEnterChase; // 0x30
		::RPG::GameCore::TaskConfig* OnLeaveChase; // 0x38
		::RPG::GameCore::TaskConfig* OnEnterChaseButNoTarget; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C5EA4D0B6671437(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCChase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCChase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE_METHOD_3_7C5EA4D0B6671437_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F858BCF12B5500D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNPCChase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNPCChase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCCHASE_METHOD_3_F858BCF12B5500D1_OFFSET))(a1, a2);
		}
	};
}
