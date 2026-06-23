#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_66C4D81440373C6E;
class Class_1_D9E0C80DACE89226;
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B834D0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x13B830C0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x13B830D0)
#define FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13B82F60)

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FEntityHPChangeAction_TypeDefinitionIndex = 70829;

	class FEntityHPChangeAction : public ::System::Object
	{
	public:
		// static const ::System::Single MinHpNotifyDeltaRatio; // 0x0
		::Class_1_66C4D81440373C6E* _fighter; // 0x10
		::System::String* Name; // 0x18
		::Class_1_D9E0C80DACE89226* Graph; // 0x20
		::Foundation::ViewObject::ViewObjectHandle GroupHandle; // 0x28
		::MoleMole::EntityHandle EntityHandle; // 0x38
		::System::Int32 ListenType; // 0x48
		::System::Single ListenValue; // 0x4C
		::System::Boolean _triggered; // 0x50

		::System::Void _ctor(::System::String* name, ::MoleMole::EntityHandle entityHandle, ::System::Int32 listenType, ::System::Single listenValue, ::Class_1_D9E0C80DACE89226* graph, ::Foundation::ViewObject::ViewObjectHandle groupHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::EntityHandle, ::System::Int32, ::System::Single, ::Class_1_D9E0C80DACE89226*, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION__CTOR_OFFSET))(this, name, entityHandle, listenType, listenValue, graph, groupHandle);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_STRUCTURES_FENTITYHPCHANGEACTION_DISPOSE_OFFSET))(this);
		}
	};
}
