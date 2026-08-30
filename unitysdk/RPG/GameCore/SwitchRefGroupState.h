#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHREFGROUPSTATE_METHOD_3_8465BD37F16DAE44_OFFSET UNITYSDK_OFFSET(0x1E153660)
#define RPG_GAMECORE_SWITCHREFGROUPSTATE_METHOD_3_ED2F251C511A1919_OFFSET UNITYSDK_OFFSET(0x1E152FA0)
#define RPG_GAMECORE_SWITCHREFGROUPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E152F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGroupState_TypeDefinitionIndex = 17330;

	class SwitchRefGroupState : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8465BD37F16DAE44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGroupState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGroupState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE_METHOD_3_8465BD37F16DAE44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ED2F251C511A1919(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGroupState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGroupState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPSTATE_METHOD_3_ED2F251C511A1919_OFFSET))(a1, a2);
		}
	};
}
