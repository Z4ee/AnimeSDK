#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_METHOD_3_F3F3DBA230468BFA_OFFSET UNITYSDK_OFFSET(0x17599B90)
#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_METHOD_3_FB609807627154F3_OFFSET UNITYSDK_OFFSET(0x17599B10)
#define RPG_GAMECORE_REMOVESTAGEABILITYBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x17599B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveStageAbilityByName_TypeDefinitionIndex = 21178;

	class RemoveStageAbilityByName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* StageAbilityName; // 0x18
		::System::Boolean ReadFromTable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FB609807627154F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveStageAbilityByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveStageAbilityByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_METHOD_3_FB609807627154F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3F3DBA230468BFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveStageAbilityByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveStageAbilityByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTAGEABILITYBYNAME_METHOD_3_F3F3DBA230468BFA_OFFSET))(a1, a2);
		}
	};
}
