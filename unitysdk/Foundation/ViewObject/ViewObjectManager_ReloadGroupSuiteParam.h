#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_ReloadParamBase.h"

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPSUITEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1877F880)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ReloadGroupSuiteParam_TypeDefinitionIndex = 73623;

	class ViewObjectManager_ReloadGroupSuiteParam : public ::Foundation::ViewObject::ViewObjectManager_ReloadParamBase
	{
	public:
		::System::UInt32 GroupID; // 0x30
		::System::UInt32 SuiteIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADGROUPSUITEPARAM__CTOR_OFFSET))(this);
		}
	};
}
