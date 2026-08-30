#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkEnvironment_AkEnvironment_CompareByPriority;
class AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm;
namespace AK::Wwise { class AuxBus; }
namespace UnityEngine { class Collider; }

#define AKENVIRONMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1EEC7810)
#define AKENVIRONMENT_GETAUXBUSID_OFFSET UNITYSDK_OFFSET(0x1EEC7A50)
#define AKENVIRONMENT_GETCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1EEC7AA0)
#define AKENVIRONMENT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1EEC77F0)
#define AKENVIRONMENT_GET_M_AUXBUSID_OFFSET UNITYSDK_OFFSET(0x1EEC78B0)
#define AKENVIRONMENT_GET_VALUEGUID_OFFSET UNITYSDK_OFFSET(0x1EEC7910)
#define AKENVIRONMENT_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x1EEC7800)
#define AKENVIRONMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EEC7B20)
#define AKENVIRONMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC7AE0)

inline static constexpr unsigned int AkEnvironment_TypeDefinitionIndex = 43725;

class AkEnvironment : public ::UnityEngine::MonoBehaviour
{
public:
	static ::AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm** StaticGet_s_compareBySelectionAlgorithm()
	{
		return (::AkEnvironment_AkEnvironment_CompareBySelectionAlgorithm**)Il2CppClass::FromTypeDefinitionIndex(AkEnvironment_TypeDefinitionIndex)->GetStaticField(0x10120);
	}
	static ::AkEnvironment_AkEnvironment_CompareByPriority** StaticGet_s_compareByPriority()
	{
		return (::AkEnvironment_AkEnvironment_CompareByPriority**)Il2CppClass::FromTypeDefinitionIndex(AkEnvironment_TypeDefinitionIndex)->GetStaticField(0x10128);
	}
	// static const ::System::Int32 MAX_NB_ENVIRONMENTS = 0x4; // 0x0
	::System::Boolean excludeOthers; // 0x18
	::System::Boolean isDefault; // 0x19
	::AK::Wwise::AuxBus* data; // 0x20
	::UnityEngine::Collider* _Collider_k__BackingField; // 0x28
	::System::Int32 priority; // 0x30
	::System::Int32 auxBusIdInternal; // 0x34
	::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKENVIRONMENT__CCTOR_OFFSET))();
	}

	::UnityEngine::Collider* get_Collider()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_GET_COLLIDER_OFFSET))(this);
	}

	::System::Void set_Collider(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKENVIRONMENT_SET_COLLIDER_OFFSET))(this, a1);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_AWAKE_OFFSET))(this);
	}

	::System::Int32 get_m_auxBusID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_GET_M_AUXBUSID_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* get_valueGuid()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_GET_VALUEGUID_OFFSET))(this);
	}

	::System::UInt32 GetAuxBusID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_GETAUXBUSID_OFFSET))(this);
	}

	::UnityEngine::Collider* GetCollider()
	{
		return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENVIRONMENT_GETCOLLIDER_OFFSET))(this);
	}
};
