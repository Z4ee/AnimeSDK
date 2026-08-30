#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_SCENEQUADDEFORMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE05A900)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneQuadDeformData_TypeDefinitionIndex = 70811;

	struct alignas(4) SceneQuadDeformData
	{
		static ::RPG::Client::SceneQuadDeformData* StaticGet_Default()
		{
			return (::RPG::Client::SceneQuadDeformData*)Il2CppClass::FromTypeDefinitionIndex(SceneQuadDeformData_TypeDefinitionIndex)->GetStaticField(0xA890);
		}
		::UnityEngine::Vector3 ModuleSize; // 0x10
		::System::Single LeftTopOffsetZ; // 0x1C
		::System::Single RightTopOffsetZ; // 0x20
		::System::Single RightTopOffsetX; // 0x24
		::System::Single RightTopOffsetY; // 0x28
		::System::Boolean UseAtlas; // 0x2C
		::System::Int32 AtlasID; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENEQUADDEFORMDATA__CCTOR_OFFSET))();
		}
	};
}
