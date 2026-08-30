#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class SerializedWarmupPSO;

#define SERIALIZEDWARMUPPSOSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF484D0)

inline static constexpr unsigned int SerializedWarmupPSOSet_TypeDefinitionIndex = 47888;

class SerializedWarmupPSOSet : public ::UnityEngine::ScriptableObject
{
public:
	::Il2CppArray<::SerializedWarmupPSO*>* psos; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSOSET__CTOR_OFFSET))(this);
	}
};
