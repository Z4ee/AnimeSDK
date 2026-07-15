#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_C68FCD99CEC4658B_OFFSET UNITYSDK_OFFSET(0x1A06C9D0)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_DAD22F0FB571C142_OFFSET UNITYSDK_OFFSET(0x1A06C990)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06C9C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioSetRTPCValue_TypeDefinitionIndex = 19828;

	class AudioSetRTPCValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RTPCName; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAD22F0FB571C142(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_DAD22F0FB571C142_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C68FCD99CEC4658B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_C68FCD99CEC4658B_OFFSET))(a1, a2);
		}
	};
}
