#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ParticleBaseDataType;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PARTICLESDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F88C0)

inline static constexpr unsigned int ParticlesData_TypeDefinitionIndex = 27041;

class ParticlesData : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* randomSeeds; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x18
	::Il2CppArray<::UnityEngine::Quaternion>* rotations; // 0x20
	::Il2CppArray<::UnityEngine::Vector3>* scales; // 0x28
	::Il2CppArray<::System::Int32>* nextFrameIndex; // 0x30
	::System::Collections::Generic::List_1<::ParticleBaseDataType*>* dataList; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLESDATA__CTOR_OFFSET))(this);
	}
};
