#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AUiStateTagBase;
class StateTag;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define AUISTATEMANAGER_CHECKINDEX_OFFSET UNITYSDK_OFFSET(0x13976FA0)
#define AUISTATEMANAGER_FRESHSTATE_OFFSET UNITYSDK_OFFSET(0x13977770)
#define AUISTATEMANAGER_GETALLTAG_OFFSET UNITYSDK_OFFSET(0x13976E40)
#define AUISTATEMANAGER_METHOD_5_134D4FD742CDB047_OFFSET UNITYSDK_OFFSET(0x13977220)
#define AUISTATEMANAGER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x13976DF0)
#define AUISTATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13977950)

inline static constexpr unsigned int AUiStateManager_TypeDefinitionIndex = 44866;

class AUiStateManager : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Int32 Field_5_0; // 0x18
	::System::Int32 Field_5_1; // 0x1C
	::System::Int32 StateIndex; // 0x20
	::System::Collections::Generic::List_1<::StateTag*>* ListStateTag; // 0x28
	::System::Collections::Generic::List_1<::AUiStateTagBase*>* listTagComp; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATEMANAGER__CTOR_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATEMANAGER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void GetAllTag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATEMANAGER_GETALLTAG_OFFSET))(this);
	}

	::System::Void Method_5_134D4FD742CDB047(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + AUISTATEMANAGER_METHOD_5_134D4FD742CDB047_OFFSET))(this, a1, a2);
	}

	::System::Void FreshState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATEMANAGER_FRESHSTATE_OFFSET))(this);
	}

	::System::Void CheckIndex()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUISTATEMANAGER_CHECKINDEX_OFFSET))(this);
	}
};
