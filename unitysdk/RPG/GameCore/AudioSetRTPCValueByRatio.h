#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_METHOD_3_1CBB9A472362FA2B_OFFSET UNITYSDK_OFFSET(0x1948CB00)
#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_METHOD_3_44530D94017052A7_OFFSET UNITYSDK_OFFSET(0x1948C950)
#define RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1948CA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioSetRTPCValueByRatio_TypeDefinitionIndex = 19471;

	class AudioSetRTPCValueByRatio : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RTPCName; // 0x18
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x20
		::RPG::GameCore::DynamicFloat* CurValue; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44530D94017052A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValueByRatio*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_METHOD_3_44530D94017052A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CBB9A472362FA2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValueByRatio* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValueByRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUEBYRATIO_METHOD_3_1CBB9A472362FA2B_OFFSET))(a1, a2);
		}
	};
}
