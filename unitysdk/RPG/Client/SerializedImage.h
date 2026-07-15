#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_SERIALIZEDIMAGE_CULL_OFFSET UNITYSDK_OFFSET(0x19F3E7E0)
#define RPG_CLIENT_SERIALIZEDIMAGE_GET_MESH_OFFSET UNITYSDK_OFFSET(0x19F3E840)
#define RPG_CLIENT_SERIALIZEDIMAGE_SET_MESH_OFFSET UNITYSDK_OFFSET(0x19F3E890)
#define RPG_CLIENT_SERIALIZEDIMAGE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x19F3E6F0)
#define RPG_CLIENT_SERIALIZEDIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F3E8E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SerializedImage_TypeDefinitionIndex = 69359;

	class SerializedImage : public ::UnityEngine::UI::Image
	{
	public:
		::UnityEngine::Mesh* m_Mesh; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE_CULL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE_GET_MESH_OFFSET))(this);
		}

		::System::Void set_Mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE_SET_MESH_OFFSET))(this, a1);
		}
	};
}
