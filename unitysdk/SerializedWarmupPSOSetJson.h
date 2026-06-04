#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class SerializedWarmupPSO;

#define SERIALIZEDWARMUPPSOSETJSON__CTOR_OFFSET UNITYSDK_OFFSET(0xD07FD80)

inline static constexpr unsigned int SerializedWarmupPSOSetJson_TypeDefinitionIndex = 44716;

class SerializedWarmupPSOSetJson : public ::System::Object
{
public:
	::Il2CppArray<::SerializedWarmupPSO*>* psos; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDWARMUPPSOSETJSON__CTOR_OFFSET))(this);
	}
};
