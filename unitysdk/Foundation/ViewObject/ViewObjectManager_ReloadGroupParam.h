#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_ReloadParamBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB1730)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ReloadGroupParam_TypeDefinitionIndex = 55575;

	class ViewObjectManager_ReloadGroupParam : public ::Foundation::ViewObject::ViewObjectManager_ReloadParamBase
	{
	public:
		::UnityEngine::Vector3 TargetRotation; // 0x30
		::UnityEngine::Vector3 TargetPosition; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPPARAM__CTOR_OFFSET))(this);
		}
	};
}
