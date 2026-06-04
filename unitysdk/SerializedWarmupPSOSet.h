#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class SerializedWarmupPSO;

#define SERIALIZEDWARMUPPSOSET__CTOR_OFFSET UNITYSDK_OFFSET(0xD07FD70)

inline static constexpr unsigned int SerializedWarmupPSOSet_TypeDefinitionIndex = 44722;

class SerializedWarmupPSOSet : public ::UnityEngine::ScriptableObject
{
public:
	::Il2CppArray<::SerializedWarmupPSO*>* psos; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSOSET__CTOR_OFFSET))(this);
	}
};
