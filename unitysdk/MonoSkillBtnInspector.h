#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MONOSKILLBTNINSPECTOR_ADD_OFFSET UNITYSDK_OFFSET(0xD080700)
#define MONOSKILLBTNINSPECTOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD07FC60)
#define MONOSKILLBTNINSPECTOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD07FBB0)
#define MONOSKILLBTNINSPECTOR_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD07FD10)
#define MONOSKILLBTNINSPECTOR_REMOVE_OFFSET UNITYSDK_OFFSET(0xD080C30)
#define MONOSKILLBTNINSPECTOR_START_OFFSET UNITYSDK_OFFSET(0xD07F9B0)
#define MONOSKILLBTNINSPECTOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD07FD70)
#define MONOSKILLBTNINSPECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xD080FE0)
#define MONOSKILLBTNINSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD080E80)

inline static constexpr unsigned int MonoSkillBtnInspector_TypeDefinitionIndex = 64801;

class MonoSkillBtnInspector : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Text::StringBuilder** StaticGet__sb()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(MonoSkillBtnInspector_TypeDefinitionIndex)->GetStaticField(0x35610);
	}
	static ::System::Collections::Generic::List_1<::MonoSkillBtnInspector*>** StaticGet_InstancePool()
	{
		return (::System::Collections::Generic::List_1<::MonoSkillBtnInspector*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSkillBtnInspector_TypeDefinitionIndex)->GetStaticField(0x35618);
	}
	static ::UnityEngine::Vector2* StaticGet__scrollPos()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MonoSkillBtnInspector_TypeDefinitionIndex)->GetStaticField(0xD170);
	}
	static ::System::Boolean* StaticGet__isShow()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoSkillBtnInspector_TypeDefinitionIndex)->GetStaticField(0xD178);
	}
	::System::Collections::Generic::List_1<::System::String*>* BindAnimatorStateNameList; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _hashToNameDic; // 0x20
	::UnityEngine::Animator* _avatarAnimator; // 0x28
	::System::Single _clickFrameCount; // 0x30
	::System::Single _cacheClickFrameCount; // 0x34
	::System::Single _stateChangeFrameCount; // 0x38
	::System::Single _usedTime; // 0x3C
	::System::String* _stateName; // 0x40
	::System::Int32 _lastFrameStateNameHash; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_ONPOINTERDOWN_OFFSET))(this, eventData);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_UPDATE_OFFSET))(this);
	}

	static ::System::Void Add()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_ADD_OFFSET))();
	}

	static ::System::Void Remove()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOSKILLBTNINSPECTOR_REMOVE_OFFSET))();
	}
};
