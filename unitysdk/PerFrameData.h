#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

class ParticlesData;

#define PERFRAMEDATA_GET_PARTICLESCOUNT_OFFSET UNITYSDK_OFFSET(0xF7EB6A0)
#define PERFRAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EB810)

inline static constexpr unsigned int PerFrameData_TypeDefinitionIndex = 29503;

class PerFrameData : public ::System::Object
{
public:
	::Il2CppArray<::ParticlesData*>* particleGroups; // 0x10
	::System::Boolean hasFrameBounds; // 0x18
	::UnityEngine::Bounds frameBounds; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERFRAMEDATA__CTOR_OFFSET))(this);
	}

	::System::Int32 get_ParticlesCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PERFRAMEDATA_GET_PARTICLESCOUNT_OFFSET))(this);
	}
};
