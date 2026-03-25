#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_014F14AA4AD61EEC_OFFSET UNITYSDK_OFFSET(0x16E953E0)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_92DBCA80B3BA4678_OFFSET UNITYSDK_OFFSET(0x16E954F0)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x16E954C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortModifierPhasePerform_TypeDefinitionIndex = 21870;

	class AbortModifierPhasePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_014F14AA4AD61EEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortModifierPhasePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortModifierPhasePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_014F14AA4AD61EEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92DBCA80B3BA4678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_92DBCA80B3BA4678_OFFSET))(a1, a2);
		}
	};
}
