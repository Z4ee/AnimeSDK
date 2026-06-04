#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_WAITFORWITHDURATION_METHOD_3_3AA556121B268660_OFFSET UNITYSDK_OFFSET(0x19E56E00)
#define RPG_GAMECORE_WAITFORWITHDURATION_METHOD_3_99A7552C98D72D8C_OFFSET UNITYSDK_OFFSET(0x19E56F20)
#define RPG_GAMECORE_WAITFORWITHDURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19E56EA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitForWithDuration_TypeDefinitionIndex = 22489;

	class WaitForWithDuration : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3AA556121B268660(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForWithDuration*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForWithDuration*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION_METHOD_3_3AA556121B268660_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99A7552C98D72D8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitForWithDuration* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitForWithDuration*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITFORWITHDURATION_METHOD_3_99A7552C98D72D8C_OFFSET))(a1, a2);
		}
	};
}
