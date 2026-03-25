#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPDecorateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_METHOD_3_CE0373ED0B8A6FED_OFFSET UNITYSDK_OFFSET(0x17760D40)
#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_METHOD_3_D95A4DA784187914_OFFSET UNITYSDK_OFFSET(0x17760DD0)
#define RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17760DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StackBoostPointCallbackDecorate_TypeDefinitionIndex = 21785;

	class StackBoostPointCallbackDecorate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Count; // 0x18
		::RPG::GameCore::TargetEvaluator* SourceTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* Delta; // 0x28
		::RPG::GameCore::BPDecorateType Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE0373ED0B8A6FED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackBoostPointCallbackDecorate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_METHOD_3_CE0373ED0B8A6FED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D95A4DA784187914(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StackBoostPointCallbackDecorate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StackBoostPointCallbackDecorate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STACKBOOSTPOINTCALLBACKDECORATE_METHOD_3_D95A4DA784187914_OFFSET))(a1, a2);
		}
	};
}
