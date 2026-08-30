#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RemoveEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_REMOVEEFFECTDATA_METHOD_1_7D8D9CDFAEF2C143_OFFSET UNITYSDK_OFFSET(0xE8DD100)
#define RPGTOOLS_TIMELINE_REMOVEEFFECTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE8DD1D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RemoveEffectData_TypeDefinitionIndex = 48788;

	class RemoveEffectData : public ::System::Object
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::String* EffectPath; // 0x18
		::System::String* UniqueEffectName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RemoveEffect* Method_1_7D8D9CDFAEF2C143()
		{
			return ((::RPG::GameCore::RemoveEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_REMOVEEFFECTDATA_METHOD_1_7D8D9CDFAEF2C143_OFFSET))(this);
		}
	};
}
