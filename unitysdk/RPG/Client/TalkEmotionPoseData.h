#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TALKEMOTIONPOSEDATA_METHOD_1_266E4AA4DCCA8C69_OFFSET UNITYSDK_OFFSET(0xE158D80)
#define RPG_CLIENT_TALKEMOTIONPOSEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE158DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkEmotionPoseData_TypeDefinitionIndex = 71094;

	class TalkEmotionPoseData : public ::System::Object
	{
	public:
		::System::String* Clip; // 0x10
		::System::Single LeftWeight; // 0x18
		::System::Single RightWeight; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKEMOTIONPOSEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_266E4AA4DCCA8C69(::RPG::Client::TalkEmotionPoseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TalkEmotionPoseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKEMOTIONPOSEDATA_METHOD_1_266E4AA4DCCA8C69_OFFSET))(this, a1);
		}
	};
}
