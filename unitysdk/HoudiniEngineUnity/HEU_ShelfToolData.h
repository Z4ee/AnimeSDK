#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_ShelfToolData_ToolType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_SHELFTOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4811A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_ShelfToolData_TypeDefinitionIndex = 39364;

	class HEU_ShelfToolData : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::HoudiniEngineUnity::HEU_ShelfToolData_ToolType _toolType; // 0x18
		::System::String* _toolTip; // 0x20
		::System::String* _iconPath; // 0x28
		::System::String* _assetPath; // 0x30
		::System::String* _helpURL; // 0x38
		::Il2CppArray<::System::String*>* _targets; // 0x40
		::System::String* _jsonPath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_SHELFTOOLDATA__CTOR_OFFSET))(this);
		}
	};
}
