#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_GET_DEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0xC25B550)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xC25B4D0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xC25B6C0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_SETCORNERS_OFFSET UNITYSDK_OFFSET(0xC25B560)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG__CTOR_OFFSET UNITYSDK_OFFSET(0xC25BCD0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG__GETSPRITESIZE_OFFSET UNITYSDK_OFFSET(0xC25BBF0)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET UNITYSDK_OFFSET(0xC25BE10)
#define RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xC25BE40)

namespace RPG::Client::NavMap::FiveDim
{
	inline static constexpr unsigned int SectionFog_TypeDefinitionIndex = 69724;

	class SectionFog : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* _Corners; // 0xF0
		::UnityEngine::Sprite* _Sprite; // 0xF8
		::System::Single _TextureRotation; // 0x100
		::UnityEngine::Vector2 _SpaceWidth; // 0x104

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_GET_MAINTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Material* get_defaultMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_GET_DEFAULTMATERIAL_OFFSET))(this);
		}

		::System::Void SetCorners(::Il2CppArray<::RPG::MVector2>* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_SETCORNERS_OFFSET))(this, a1, a2);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GetSpriteSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG__GETSPRITESIZE_OFFSET))(this);
		}

		::UnityEngine::Texture* __iFixBaseProxy_get_mainTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG___IFIXBASEPROXY_GET_MAINTEXTURE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_FIVEDIM_SECTIONFOG___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, a1);
		}
	};
}
