#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PolygonType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_POLYGONMESH_METHOD_1_E8947406FBA55064_OFFSET UNITYSDK_OFFSET(0xAE81D70)
#define RPG_CLIENT_PROP_POLYGONMESH_METHOD_1_EA6474AC2169BCED_OFFSET UNITYSDK_OFFSET(0xAEA54E0)
#define RPG_CLIENT_PROP_POLYGONMESH__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA5700)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PolygonMesh_TypeDefinitionIndex = 72223;

	class PolygonMesh : public ::System::Object
	{
	public:
		::RPG::Client::Prop::PolygonType PolygonType; // 0x10
		::System::Int32 PolygonID; // 0x14
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_1_E8947406FBA55064()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH_METHOD_1_E8947406FBA55064_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* Method_1_EA6474AC2169BCED()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_POLYGONMESH_METHOD_1_EA6474AC2169BCED_OFFSET))(this);
		}
	};
}
