#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EReloadGroupReason.h"
#include "unitysdk/System/Object.h"

class Class_3_3EC97B498E0B85D2;
namespace System { class Action; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE_CHECKFLAG_OFFSET UNITYSDK_OFFSET(0x15FA4DB0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15FA4E90)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ReloadParamBase_TypeDefinitionIndex = 55558;

	class ViewObjectManager_ReloadParamBase : public ::System::Object
	{
	public:
		::System::Action* OnCompleted; // 0x10
		::System::Object* _flag; // 0x18
		::Class_3_3EC97B498E0B85D2* reason; // 0x20
		::Foundation::ViewObject::EReloadGroupReason reloadGroupReason; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE_CHECKFLAG_OFFSET))(this);
		}
	};
}
