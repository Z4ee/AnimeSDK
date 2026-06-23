#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RANDOMINSTANCING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1AC75510)
#define RANDOMINSTANCING_HASH2_OFFSET UNITYSDK_OFFSET(0x1AC761A0)
#define RANDOMINSTANCING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC75910)
#define RANDOMINSTANCING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AC75670)
#define RANDOMINSTANCING_RANDOM_OFFSET UNITYSDK_OFFSET(0x1AC761F0)
#define RANDOMINSTANCING_UPDATEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1AC756C0)
#define RANDOMINSTANCING_UPDATETILEINSTANCES_OFFSET UNITYSDK_OFFSET(0x1AC75BF0)
#define RANDOMINSTANCING_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC75BA0)
#define RANDOMINSTANCING__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC76290)

inline static constexpr unsigned int RandomInstancing_TypeDefinitionIndex = 78868;

class RandomInstancing : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* m_Prefab; // 0x18
	::System::Int32 m_PoolSize; // 0x20
	::System::Int32 m_InstancesPerTile; // 0x24
	::System::Boolean m_RandomPosition; // 0x28
	::System::Boolean m_RandomOrientation; // 0x29
	::System::Single m_Height; // 0x2C
	::System::Int32 m_BaseHash; // 0x30
	::System::Single m_Size; // 0x34
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_Instances; // 0x38
	::System::Int32 m_Used; // 0x40
	::System::Int32 m_LocX; // 0x44
	::System::Int32 m_LocZ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_ONDESTROY_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateInstances()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_UPDATEINSTANCES_OFFSET))(this);
	}

	::System::Int32 UpdateTileInstances(::System::Int32 i, ::System::Int32 j)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_UPDATETILEINSTANCES_OFFSET))(this, i, j);
	}

	static ::System::Int32 Hash2(::System::Int32 i, ::System::Int32 j)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_HASH2_OFFSET))(i, j);
	}

	static ::System::Single Random(::System::Int32& seed)
	{
		return ((::System::Single(*)(::System::Int32&))((::PBYTE)hIl2Cpp + RANDOMINSTANCING_RANDOM_OFFSET))(seed);
	}
};
