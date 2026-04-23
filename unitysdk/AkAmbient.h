#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkEvent.h"
#include "unitysdk/AkMultiPositionType.h"
#include "unitysdk/MultiPositionTypeLabel.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkAmbientLargeModePositioner;
class AkMultiPosEvent;
class AkPositionArray;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKAMBIENT_BUILDAKPOSITIONARRAY_OFFSET UNITYSDK_OFFSET(0x1A5C6610)
#define AKAMBIENT_BUILDMULTIDIRECTIONARRAY_OFFSET UNITYSDK_OFFSET(0x1A5C5D50)
#define AKAMBIENT_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1A5C7010)
#define AKAMBIENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A5C6D70)
#define AKAMBIENT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1A5C7750)
#define AKAMBIENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5C58A0)
#define AKAMBIENT_START_OFFSET UNITYSDK_OFFSET(0x1A5C62C0)
#define AKAMBIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C7DA0)
#define AKAMBIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C7C60)
#define AKAMBIENT___IFIXBASEPROXY_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1A5C7EF0)
#define AKAMBIENT___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A5C7E40)
#define AKAMBIENT___IFIXBASEPROXY_START_OFFSET UNITYSDK_OFFSET(0x1A5C7EE0)

inline static constexpr unsigned int AkAmbient_TypeDefinitionIndex = 40464;

class AkAmbient : public ::AkEvent
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkMultiPosEvent*>** StaticGet_multiPosEventTree()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkMultiPosEvent*>**)Il2CppClass::FromTypeDefinitionIndex(AkAmbient_TypeDefinitionIndex)->GetStaticField(0x348A0);
	}
	::AkMultiPositionType MultiPositionType; // 0x90
	::MultiPositionTypeLabel multiPositionTypeLabel; // 0x94
	::Il2CppArray<::AkAmbientLargeModePositioner*>* LargeModePositions; // 0x98
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* multiPositionArray; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAMBIENT__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_ONENABLE_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_START_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_ONDISABLE_OFFSET))(this);
	}

	::System::Void HandleEvent(::UnityEngine::GameObject* in_gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAMBIENT_HANDLEEVENT_OFFSET))(this, in_gameObject);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::AkPositionArray* BuildMultiDirectionArray(::AkMultiPosEvent* eventPosList)
	{
		return ((::AkPositionArray*(*)(::PVOID, ::AkMultiPosEvent*))((::PBYTE)hIl2Cpp + AKAMBIENT_BUILDMULTIDIRECTIONARRAY_OFFSET))(this, eventPosList);
	}

	::AkPositionArray* BuildAkPositionArray()
	{
		return ((::AkPositionArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_BUILDAKPOSITIONARRAY_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT___IFIXBASEPROXY_START_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_HandleEvent(::UnityEngine::GameObject* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAMBIENT___IFIXBASEPROXY_HANDLEEVENT_OFFSET))(this, P0);
	}
};
