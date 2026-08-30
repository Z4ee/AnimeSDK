#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenLookAtType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_METHOD_4_B47524ECA659C43F_OFFSET UNITYSDK_OFFSET(0x1D4D0830)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_METHOD_4_C49E77C19E8C1B86_OFFSET UNITYSDK_OFFSET(0x1D4D0890)
#define RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D0870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_Hipplen_LookAt_TypeDefinitionIndex = 21059;

	class ST_Side_Hipplen_LookAt : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::HipplenLookAtType LookAtType; // 0x18
		::System::String* AttachPointName; // 0x20
		::System::Single Delay; // 0x28
		::System::Single TransitionTime; // 0x2C
		::System::Boolean OverrideConfigs; // 0x30
		::System::Single OverrideBodyWeight; // 0x34
		::System::Single OverrideHeadWeight; // 0x38
		::System::Single OverrideWeightTransitionTime; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B47524ECA659C43F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_METHOD_4_B47524ECA659C43F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C49E77C19E8C1B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_Hipplen_LookAt* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_Hipplen_LookAt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_HIPPLEN_LOOKAT_METHOD_4_C49E77C19E8C1B86_OFFSET))(a1, a2);
		}
	};
}
