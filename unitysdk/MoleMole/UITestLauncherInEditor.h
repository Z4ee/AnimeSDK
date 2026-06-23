#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_UITESTLAUNCHERINEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x166A8A50)

namespace MoleMole
{
	inline static constexpr unsigned int UITestLauncherInEditor_TypeDefinitionIndex = 43292;

	class UITestLauncherInEditor : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITESTLAUNCHERINEDITOR__CTOR_OFFSET))(this);
		}
	};
}
