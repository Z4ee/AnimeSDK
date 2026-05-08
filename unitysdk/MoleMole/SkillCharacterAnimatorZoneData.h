#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class AnimatorZone; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x117828A0)

namespace MoleMole
{
	inline static constexpr unsigned int SkillCharacterAnimatorZoneData_TypeDefinitionIndex = 80008;

	class SkillCharacterAnimatorZoneData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AnimatorZone*>* AnimatorZoneGroup; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SKILLCHARACTERANIMATORZONEDATA__CTOR_OFFSET))(this);
		}
	};
}
