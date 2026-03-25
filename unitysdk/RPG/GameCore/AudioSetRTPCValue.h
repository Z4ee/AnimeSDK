#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_1B308CF71E714FC2_OFFSET UNITYSDK_OFFSET(0x16F918E0)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_71C01BBD2555D375_OFFSET UNITYSDK_OFFSET(0x16F91860)
#define RPG_GAMECORE_AUDIOSETRTPCVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F918B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioSetRTPCValue_TypeDefinitionIndex = 18923;

	class AudioSetRTPCValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RTPCName; // 0x18
		::System::Single Value; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_71C01BBD2555D375(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_71C01BBD2555D375_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B308CF71E714FC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AudioSetRTPCValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AudioSetRTPCValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOSETRTPCVALUE_METHOD_3_1B308CF71E714FC2_OFFSET))(a1, a2);
		}
	};
}
