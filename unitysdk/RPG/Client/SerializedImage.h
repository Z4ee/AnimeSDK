#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_SERIALIZEDIMAGE_CULL_OFFSET UNITYSDK_OFFSET(0xB160010)
#define RPG_CLIENT_SERIALIZEDIMAGE_GET_MESH_OFFSET UNITYSDK_OFFSET(0xB160070)
#define RPG_CLIENT_SERIALIZEDIMAGE_SET_MESH_OFFSET UNITYSDK_OFFSET(0xB160080)
#define RPG_CLIENT_SERIALIZEDIMAGE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB15FF20)
#define RPG_CLIENT_SERIALIZEDIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB160090)
#define RPG_CLIENT_SERIALIZEDIMAGE___IFIXBASEPROXY_CULL_OFFSET UNITYSDK_OFFSET(0xB1600D0)
#define RPG_CLIENT_SERIALIZEDIMAGE___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xB1600C0)

namespace RPG::Client
{
	inline static constexpr unsigned int SerializedImage_TypeDefinitionIndex = 66933;

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

		::System::Void __iFixBaseProxy_UpdateGeometry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE___IFIXBASEPROXY_UPDATEGEOMETRY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Cull(::UnityEngine::Rect P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SERIALIZEDIMAGE___IFIXBASEPROXY_CULL_OFFSET))(this, P0, P1);
		}
	};
}
