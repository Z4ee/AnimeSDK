#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETSERVERGROUPPROPERTY_METHOD_3_3E784620D32219B7_OFFSET UNITYSDK_OFFSET(0x176DD4E0)
#define RPG_GAMECORE_SETSERVERGROUPPROPERTY_METHOD_3_EC4C29FEE0022790_OFFSET UNITYSDK_OFFSET(0x176DD550)
#define RPG_GAMECORE_SETSERVERGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x176DD520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetServerGroupProperty_TypeDefinitionIndex = 19046;

	class SetServerGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E784620D32219B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetServerGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetServerGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY_METHOD_3_3E784620D32219B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC4C29FEE0022790(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSERVERGROUPPROPERTY_METHOD_3_EC4C29FEE0022790_OFFSET))(a1, a2);
		}
	};
}
