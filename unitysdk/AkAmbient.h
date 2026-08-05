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

#define AKAMBIENT_BUILDAKPOSITIONARRAY_OFFSET UNITYSDK_OFFSET(0x1F8783E0)
#define AKAMBIENT_BUILDMULTIDIRECTIONARRAY_OFFSET UNITYSDK_OFFSET(0x1F877D20)
#define AKAMBIENT_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1F878A30)
#define AKAMBIENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1F8787D0)
#define AKAMBIENT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1F878C30)
#define AKAMBIENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F877890)
#define AKAMBIENT_START_OFFSET UNITYSDK_OFFSET(0x1F878210)
#define AKAMBIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F878CF0)
#define AKAMBIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F878CE0)

inline static constexpr unsigned int AkAmbient_TypeDefinitionIndex = 33767;

class AkAmbient : public ::AkEvent
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkMultiPosEvent*>** StaticGet_multiPosEventTree()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AkMultiPosEvent*>**)Il2CppClass::FromTypeDefinitionIndex(AkAmbient_TypeDefinitionIndex)->GetStaticField(0x28B60);
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
};
