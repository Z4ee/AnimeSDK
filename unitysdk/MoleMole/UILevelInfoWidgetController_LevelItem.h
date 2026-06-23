#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_UILEVELINFOWIDGETCONTROLLER_LEVELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177DB250)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelInfoWidgetController_LevelItem_TypeDefinitionIndex = 45858;

	class UILevelInfoWidgetController_LevelItem : public ::System::Object
	{
	public:
		::System::String* desc; // 0x10
		::System::Boolean changeColor; // 0x18
		::System::Boolean locked; // 0x19
		::System::Int32 level; // 0x1C
		::UnityEngine::Color descColor; // 0x20
		::System::Int32 rankid; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELINFOWIDGETCONTROLLER_LEVELITEM__CTOR_OFFSET))(this);
		}
	};
}
