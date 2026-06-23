#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::ViewObject { class ViewObjectManager; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DANGEROUSVISITOR_CLEARALL_OFFSET UNITYSDK_OFFSET(0x7966E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DANGEROUSVISITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_DangerousVisitor_TypeDefinitionIndex = 73631;

	struct alignas(8) ViewObjectManager_DangerousVisitor
	{
		::Foundation::ViewObject::ViewObjectManager* _mgr; // 0x10

		::System::Void _ctor(::Foundation::ViewObject::ViewObjectManager* mgr)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectManager*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DANGEROUSVISITOR__CTOR_OFFSET))(this, mgr);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_DANGEROUSVISITOR_CLEARALL_OFFSET))(this);
		}
	};
}
