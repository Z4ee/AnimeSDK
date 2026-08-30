#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AABB.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2TreeNode.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Vec2.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREE_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2FC750)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2FC770)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2DynamicTree_TypeDefinitionIndex = 35976;

	class B2DynamicTree : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2TreeNode>* nodes; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AABB>* leafBoxes; // 0x18
		::Il2CppArray<::System::Int32>* binIndices; // 0x20
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Vec2>* leafCenters; // 0x28
		::Il2CppArray<::System::Int32>* leafIndices; // 0x30
		::System::Int32 proxyCount; // 0x38
		::System::Int32 root; // 0x3C
		::System::Int32 nodeCapacity; // 0x40
		::System::Int32 rebuildCapacity; // 0x44
		::System::Int32 freeList; // 0x48
		::System::Int32 nodeCount; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREE__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DYNAMICTREE_CLEAR_OFFSET))(this);
		}
	};
}
