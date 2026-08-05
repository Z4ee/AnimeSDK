#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_CG_MONOCGCHARACTERSHADOW__CTOR_OFFSET UNITYSDK_OFFSET(0xF11E440)

namespace MoleMole::CG
{
	inline static constexpr unsigned int MonoCGCharacterShadow_TypeDefinitionIndex = 40754;

	class MonoCGCharacterShadow : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CG_MONOCGCHARACTERSHADOW__CTOR_OFFSET))(this);
		}
	};
}
