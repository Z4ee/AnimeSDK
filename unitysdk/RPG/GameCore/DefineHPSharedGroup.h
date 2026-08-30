#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DEFINEHPSHAREDGROUP_METHOD_3_2A4ACF4D434BB00C_OFFSET UNITYSDK_OFFSET(0x1D815750)
#define RPG_GAMECORE_DEFINEHPSHAREDGROUP_METHOD_3_5D767CC31CB9806D_OFFSET UNITYSDK_OFFSET(0x1D815700)
#define RPG_GAMECORE_DEFINEHPSHAREDGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D815740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DefineHPSharedGroup_TypeDefinitionIndex = 22568;

	class DefineHPSharedGroup : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MainTarget; // 0x18
		::RPG::GameCore::TargetEvaluator* SubTargets; // 0x20
		::System::Boolean ResolveShield; // 0x28
		::System::Boolean ResolveSubLockHP; // 0x29
		::System::Boolean CanMakeSubDie; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEHPSHAREDGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D767CC31CB9806D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineHPSharedGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineHPSharedGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEHPSHAREDGROUP_METHOD_3_5D767CC31CB9806D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2A4ACF4D434BB00C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DefineHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DefineHPSharedGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEFINEHPSHAREDGROUP_METHOD_3_2A4ACF4D434BB00C_OFFSET))(a1, a2);
		}
	};
}
