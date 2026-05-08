#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_3A3A95CA33F5CFBC;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x74D060)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2FED90)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_CharacterBaseDataAccessor_TypeDefinitionIndex = 61610;

	struct alignas(8) PlayTimeSlowUtils_CharacterBaseDataAccessor
	{
		::System::String* Result; // 0x10
		::System::String* _animationEventId; // 0x18

		::System::Void _ctor(::System::String* fallback, ::System::String* animationEventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR__CTOR_OFFSET))(this, fallback, animationEventId);
		}

		::System::Void Invoke(::Class_3_3A3A95CA33F5CFBC* component)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_3A3A95CA33F5CFBC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_CHARACTERBASEDATAACCESSOR_INVOKE_OFFSET))(this, component);
		}
	};
}
