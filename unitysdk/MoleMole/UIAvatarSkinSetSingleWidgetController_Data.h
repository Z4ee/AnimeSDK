#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1601B5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSkinSetSingleWidgetController_Data_TypeDefinitionIndex = 57189;

	class UIAvatarSkinSetSingleWidgetController_Data : public ::System::Object
	{
	public:
		::System::Int32 SkinID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSKINSETSINGLEWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
