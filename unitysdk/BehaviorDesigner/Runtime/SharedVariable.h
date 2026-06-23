#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class BehaviorSource; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D4A99A0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x1D4A9980)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISNONE_OFFSET UNITYSDK_OFFSET(0x1D4A9A60)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1D4A99C0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISSHARED_OFFSET UNITYSDK_OFFSET(0x1D4A9960)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D4A99E0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_NETWORKSYNC_OFFSET UNITYSDK_OFFSET(0x1D4A9A40)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROPERTYMAPPINGOWNER_OFFSET UNITYSDK_OFFSET(0x1D4A9A20)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROPERTYMAPPING_OFFSET UNITYSDK_OFFSET(0x1D4A9A00)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D4A98A0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISGLOBAL_OFFSET UNITYSDK_OFFSET(0x1D4A9880)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1D4A98C0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISSHARED_OFFSET UNITYSDK_OFFSET(0x1D4A9860)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMNAME_OFFSET UNITYSDK_OFFSET(0x1D4A98E0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMNETWORKSYNC_OFFSET UNITYSDK_OFFSET(0x1D4A9940)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMPROPERTYMAPPINGOWNER_OFFSET UNITYSDK_OFFSET(0x1D4A9920)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMPROPERTYMAPPING_OFFSET UNITYSDK_OFFSET(0x1D4A9900)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_INITIALIZEPROPERTYMAPPING_OFFSET UNITYSDK_OFFSET(0x1D4A9B10)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D4A99B0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x1D4A9990)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1D4A99D0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISSHARED_OFFSET UNITYSDK_OFFSET(0x1D4A9970)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D4A99F0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_NETWORKSYNC_OFFSET UNITYSDK_OFFSET(0x1D4A9A50)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROPERTYMAPPINGOWNER_OFFSET UNITYSDK_OFFSET(0x1D4A9A30)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROPERTYMAPPING_OFFSET UNITYSDK_OFFSET(0x1D4A9A10)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D4A98B0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISGLOBAL_OFFSET UNITYSDK_OFFSET(0x1D4A9890)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISPRIVATE_OFFSET UNITYSDK_OFFSET(0x1D4A98D0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISSHARED_OFFSET UNITYSDK_OFFSET(0x1D4A9870)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMNAME_OFFSET UNITYSDK_OFFSET(0x1D4A98F0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMNETWORKSYNC_OFFSET UNITYSDK_OFFSET(0x1D4A9950)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMPROPERTYMAPPINGOWNER_OFFSET UNITYSDK_OFFSET(0x1D4A9930)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMPROPERTYMAPPING_OFFSET UNITYSDK_OFFSET(0x1D4A9910)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_VALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D4A9AD0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4A9B70)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A9B60)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVariable_TypeDefinitionIndex = 33238;

	class SharedVariable : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_s_LessGC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SharedVariable_TypeDefinitionIndex)->GetStaticField(0x81E0);
		}
		::System::Boolean mIsShared; // 0x10
		::System::Boolean mIsGlobal; // 0x11
		::System::Boolean mIsDynamic; // 0x12
		::System::Boolean mIsPrivate; // 0x13
		::System::String* mName; // 0x18
		::System::String* mPropertyMapping; // 0x20
		::UnityEngine::GameObject* mPropertyMappingOwner; // 0x28
		::System::Boolean mNetworkSync; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_ProxymIsShared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISSHARED_OFFSET))(this);
		}

		::System::Void set_ProxymIsShared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISSHARED_OFFSET))(this, value);
		}

		::System::Boolean get_ProxymIsGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISGLOBAL_OFFSET))(this);
		}

		::System::Void set_ProxymIsGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_ProxymIsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_ProxymIsDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISDYNAMIC_OFFSET))(this, value);
		}

		::System::Boolean get_ProxymIsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMISPRIVATE_OFFSET))(this);
		}

		::System::Void set_ProxymIsPrivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMISPRIVATE_OFFSET))(this, value);
		}

		::System::String* get_ProxymName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMNAME_OFFSET))(this);
		}

		::System::Void set_ProxymName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMNAME_OFFSET))(this, value);
		}

		::System::String* get_ProxymPropertyMapping()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMPROPERTYMAPPING_OFFSET))(this);
		}

		::System::Void set_ProxymPropertyMapping(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMPROPERTYMAPPING_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_ProxymPropertyMappingOwner()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMPROPERTYMAPPINGOWNER_OFFSET))(this);
		}

		::System::Void set_ProxymPropertyMappingOwner(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMPROPERTYMAPPINGOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_ProxymNetworkSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROXYMNETWORKSYNC_OFFSET))(this);
		}

		::System::Void set_ProxymNetworkSync(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROXYMNETWORKSYNC_OFFSET))(this, value);
		}

		::System::Boolean get_IsShared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISSHARED_OFFSET))(this);
		}

		::System::Void set_IsShared(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISSHARED_OFFSET))(this, value);
		}

		::System::Boolean get_IsGlobal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISGLOBAL_OFFSET))(this);
		}

		::System::Void set_IsGlobal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISGLOBAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISDYNAMIC_OFFSET))(this);
		}

		::System::Void set_IsDynamic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISDYNAMIC_OFFSET))(this, value);
		}

		::System::Boolean get_IsPrivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISPRIVATE_OFFSET))(this);
		}

		::System::Void set_IsPrivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_ISPRIVATE_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_PropertyMapping()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROPERTYMAPPING_OFFSET))(this);
		}

		::System::Void set_PropertyMapping(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROPERTYMAPPING_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_PropertyMappingOwner()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_PROPERTYMAPPINGOWNER_OFFSET))(this);
		}

		::System::Void set_PropertyMappingOwner(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_PROPERTYMAPPINGOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_NetworkSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_NETWORKSYNC_OFFSET))(this);
		}

		::System::Void set_NetworkSync(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_SET_NETWORKSYNC_OFFSET))(this, value);
		}

		::System::Boolean get_IsNone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_GET_ISNONE_OFFSET))(this);
		}

		::System::Void ValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_VALUECHANGED_OFFSET))(this);
		}

		::System::Void InitializePropertyMapping(::BehaviorDesigner::Runtime::BehaviorSource* behaviorSource)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::BehaviorSource*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVARIABLE_INITIALIZEPROPERTYMAPPING_OFFSET))(this, behaviorSource);
		}
	};
}
