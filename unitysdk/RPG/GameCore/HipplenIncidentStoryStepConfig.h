#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenIncidentStepConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_METHOD_3_828D44BB64A4714C_OFFSET UNITYSDK_OFFSET(0x1D203FA0)
#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_METHOD_3_B95F5DE74346076A_OFFSET UNITYSDK_OFFSET(0x1D203E20)
#define RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D203E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenIncidentStoryStepConfig_TypeDefinitionIndex = 16628;

	class HipplenIncidentStoryStepConfig : public ::RPG::GameCore::HipplenIncidentStepConfig
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 DialogID; // 0x18
		::RPG::GameCore::HipplenIncidentStepConfig* Next; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_828D44BB64A4714C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentStoryStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentStoryStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_METHOD_3_828D44BB64A4714C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B95F5DE74346076A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenIncidentStoryStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenIncidentStoryStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENINCIDENTSTORYSTEPCONFIG_METHOD_3_B95F5DE74346076A_OFFSET))(a1, a2);
		}
	};
}
