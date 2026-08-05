#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AnimatorBlendGroup; }

#define MOLEMOLE_ANIMATORBLENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13E9E7F0)

namespace MoleMole
{
	inline static constexpr unsigned int AnimatorBlendData_TypeDefinitionIndex = 67730;

	class AnimatorBlendData : public ::System::Object
	{
	public:
		::MoleMole::AnimatorBlendGroup* Group2; // 0x10
		::MoleMole::AnimatorBlendGroup* Group1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATORBLENDDATA__CTOR_OFFSET))(this);
		}
	};
}
