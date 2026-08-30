#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SurfaceMaterial.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CHAINSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0xC2D94A0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ChainShape_TypeDefinitionIndex = 35923;

	class B2ChainShape : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* shapeIndices; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SurfaceMaterial>* materials; // 0x18
		::System::Int32 id; // 0x20
		::System::Int32 bodyId; // 0x24
		::System::Int32 count; // 0x28
		::System::Int32 materialCount; // 0x2C
		::System::UInt16 generation; // 0x30
		::System::Int32 nextChainId; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2CHAINSHAPE__CTOR_OFFSET))(this);
		}
	};
}
