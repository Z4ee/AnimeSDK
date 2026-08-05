#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/SoftScriptObjectReference_1.h"

namespace MoleMole::Utils { class NapCameraSequence; }

#define MOLEMOLE_UTILS_NAPCAMERASEQUENCESOFTREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA8320)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceSoftReference_TypeDefinitionIndex = 51896;

	class NapCameraSequenceSoftReference : public ::MoleMole::Utils::SoftScriptObjectReference_1<::MoleMole::Utils::NapCameraSequence*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_NAPCAMERASEQUENCESOFTREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
