#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_92DBCA80B3BA4678_OFFSET UNITYSDK_OFFSET(0x1CD6BE60)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_AB2A092DBBBFDAB5_OFFSET UNITYSDK_OFFSET(0x1CD6BD90)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6BE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortModifierPhasePerform_TypeDefinitionIndex = 23357;

	class AbortModifierPhasePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB2A092DBBBFDAB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortModifierPhasePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortModifierPhasePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_AB2A092DBBBFDAB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92DBCA80B3BA4678(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_METHOD_3_92DBCA80B3BA4678_OFFSET))(a1, a2);
		}
	};
}
