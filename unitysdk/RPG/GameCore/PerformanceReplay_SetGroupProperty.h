#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_METHOD_3_13900B039E692EA7_OFFSET UNITYSDK_OFFSET(0x1749DAA0)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_METHOD_3_BFB7600C2BD496AC_OFFSET UNITYSDK_OFFSET(0x1749DB20)
#define RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1749DAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceReplay_SetGroupProperty_TypeDefinitionIndex = 20020;

	class PerformanceReplay_SetGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_13900B039E692EA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_METHOD_3_13900B039E692EA7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BFB7600C2BD496AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PerformanceReplay_SetGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PerformanceReplay_SetGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEREPLAY_SETGROUPPROPERTY_METHOD_3_BFB7600C2BD496AC_OFFSET))(a1, a2);
		}
	};
}
