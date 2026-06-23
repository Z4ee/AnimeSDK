#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_623FA07AC87B7A23.h"
#include "unitysdk/Enum_3_D7565B1E81CB39C8.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/DisplayCase/EDisplayItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_440;

#define MOLEMOLE_DISPLAYCASE_DISPLAYITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x158D6790)

namespace MoleMole::DisplayCase
{
	inline static constexpr unsigned int DisplayItemData_TypeDefinitionIndex = 79843;

	class DisplayItemData : public ::System::Object
	{
	public:
		::System::Int32 Id; // 0x10
		::Enum_3_623FA07AC87B7A23 ItemType; // 0x14
		::MoleMole::DisplayCase::EDisplayItemSubType ItemSubType; // 0x18
		::Foundation::AssetPath prefabPath; // 0x20
		::Enum_3_D7565B1E81CB39C8 StackType; // 0x30
		::Class_2_208CC9941471731A_440* Cfg; // 0x38
		::UnityEngine::Vector3 localPos; // 0x40
		::System::Single localYaw; // 0x4C
		::System::Int32 state; // 0x50

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DISPLAYCASE_DISPLAYITEMDATA__CTOR_OFFSET))(this, a1);
		}
	};
}
