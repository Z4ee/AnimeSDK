#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class Class_3_07AAFA6F7F79BEB3;

#define FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x741140)
#define FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x7410E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneEntityData_TypeDefinitionIndex = 43547;

	struct alignas(8) SceneEntityData
	{
		::Class_3_07AAFA6F7F79BEB3* ServerInfo; // 0x10
		::Foundation::ViewObject::ViewObjectHandle ViewObjectHandle; // 0x18
		::System::UInt64 CombineConfigID; // 0x28

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENEENTITYDATA_GET_CONFIGID_OFFSET))(this);
		}
	};
}
