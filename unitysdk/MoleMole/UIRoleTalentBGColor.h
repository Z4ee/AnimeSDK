#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class Texture; }

#define MOLEMOLE_UIROLETALENTBGCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1510F240)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleTalentBGColor_TypeDefinitionIndex = 52914;

	class UIRoleTalentBGColor : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Texture*>* talentIcons; // 0x58
		::Il2CppArray<::UnityEngine::Texture*>* talentLineIcons; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLETALENTBGCOLOR__CTOR_OFFSET))(this);
		}
	};
}
