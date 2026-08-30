#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HipplenIncidentOptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_METHOD_3_011538B22175590B_OFFSET UNITYSDK_OFFSET(0x1D2036D0)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_METHOD_3_F4CD955283B3C0EC_OFFSET UNITYSDK_OFFSET(0x1D203670)
#define RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2036C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentOptionStepConfig_TypeDefinitionIndex = 16630;

	class HipplenIncidentOptionStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 DialogID; // 0x18
		::Il2CppArray<::RPG::GameCore::HipplenIncidentOptionConfig*>* Options; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4CD955283B3C0EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentOptionStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentOptionStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_METHOD_3_F4CD955283B3C0EC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_011538B22175590B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentOptionStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentOptionStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTOPTIONSTEPCONFIG_METHOD_3_011538B22175590B_OFFSET))(a1, a2);
		}
	};
}
