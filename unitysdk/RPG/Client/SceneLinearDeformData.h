#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_SCENELINEARDEFORMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF5C240)

namespace RPG::Client
{
	inline static constexpr unsigned int SceneLinearDeformData_TypeDefinitionIndex = 70812;

	struct alignas(4) SceneLinearDeformData
	{
		static ::RPG::Client::SceneLinearDeformData* StaticGet_Default()
		{
			return (::RPG::Client::SceneLinearDeformData*)Il2CppClass::FromTypeDefinitionIndex(SceneLinearDeformData_TypeDefinitionIndex)->GetStaticField(0xA380);
		}
		::UnityEngine::Vector3 ModuleSize; // 0x10
		::System::Single VertexOffsetXZ1; // 0x1C
		::System::Single VertexOffsetXZ2; // 0x20
		::System::Single VertexOffsetYZ1; // 0x24
		::System::Single VertexOffsetYZ2; // 0x28
		::System::Single VertexOffsetXY1; // 0x2C
		::System::Single VertexOffsetYX1; // 0x30
		::System::Single VertexOffsetZY2; // 0x34
		::System::Single UVOffset; // 0x38
		::System::Boolean IfForceUpNormal; // 0x3C
		::System::Single MainUVScale; // 0x40
		::System::Boolean UseAtlas; // 0x44
		::System::Int32 AtlasID; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SCENELINEARDEFORMDATA__CCTOR_OFFSET))();
		}
	};
}
