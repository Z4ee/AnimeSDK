#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UILEVELINFOWIDGETCONTROLLER_LEVELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15004140)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelInfoWidgetController_LevelItem_TypeDefinitionIndex = 42696;

	class UILevelInfoWidgetController_LevelItem : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::System::Int32 level; // 0x18
		::System::Int32 rankid; // 0x1C
		::System::Boolean locked; // 0x20
		::System::Boolean changeColor; // 0x21
		::UnityEngine::Color descColor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFOWIDGETCONTROLLER_LEVELITEM__CTOR_OFFSET))(this);
		}
	};
}
