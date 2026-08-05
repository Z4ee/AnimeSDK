#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOETHERSHARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B01060)
#define MONOETHERSHARD__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B012A0)
#define MONOETHERSHARD__CTOR_OFFSET UNITYSDK_OFFSET(0x10B01250)

inline static constexpr unsigned int MonoEtherShard_TypeDefinitionIndex = 90180;

class MonoEtherShard : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_RandomValue()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEtherShard_TypeDefinitionIndex)->GetStaticField(0x11C20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHERSHARD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOETHERSHARD__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHERSHARD_ONENABLE_OFFSET))(this);
	}
};
