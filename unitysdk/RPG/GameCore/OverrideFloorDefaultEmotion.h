#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_METHOD_3_5A7321E12357D98E_OFFSET UNITYSDK_OFFSET(0x199DDC00)
#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_METHOD_3_7B7BC59C92208ADF_OFFSET UNITYSDK_OFFSET(0x199DDB80)
#define RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x199DDBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideFloorDefaultEmotion_TypeDefinitionIndex = 20105;

	class OverrideFloorDefaultEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EmotionName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B7BC59C92208ADF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideFloorDefaultEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_METHOD_3_7B7BC59C92208ADF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A7321E12357D98E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideFloorDefaultEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideFloorDefaultEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFLOORDEFAULTEMOTION_METHOD_3_5A7321E12357D98E_OFFSET))(a1, a2);
		}
	};
}
