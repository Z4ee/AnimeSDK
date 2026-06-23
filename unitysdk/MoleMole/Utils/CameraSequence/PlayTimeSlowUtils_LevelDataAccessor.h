#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_EA02B975BED3466B;
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x86D110)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int PlayTimeSlowUtils_LevelDataAccessor_TypeDefinitionIndex = 41086;

	struct alignas(8) PlayTimeSlowUtils_LevelDataAccessor
	{
		::System::String* Result; // 0x10

		::System::Void _ctor(::System::String* fallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR__CTOR_OFFSET))(this, fallback);
		}

		::System::Void Invoke(::Class_3_EA02B975BED3466B* levelDataComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_PLAYTIMESLOWUTILS_LEVELDATAACCESSOR_INVOKE_OFFSET))(this, levelDataComponent);
		}
	};
}
