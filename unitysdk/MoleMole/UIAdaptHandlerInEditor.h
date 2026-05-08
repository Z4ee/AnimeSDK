#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_UIADAPTHANDLERINEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC4930)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptHandlerInEditor_TypeDefinitionIndex = 82964;

	class UIAdaptHandlerInEditor : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTHANDLERINEDITOR__CTOR_OFFSET))(this);
		}
	};
}
