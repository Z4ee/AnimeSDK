#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine { class Texture2D; }

#define RPG_RENDERING_SDFATLASDATA_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x1B5051C0)
#define RPG_RENDERING_SDFATLASDATA_METHOD_3_E2CDADCAB2090CE4_OFFSET UNITYSDK_OFFSET(0x1B504D30)
#define RPG_RENDERING_SDFATLASDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B505C60)

namespace RPG::Rendering
{
	inline static constexpr unsigned int SDFAtlasData_TypeDefinitionIndex = 52089;

	class SDFAtlasData : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2D* atlasTexture; // 0x18
		::RPG::Rendering::SDFAtlasLayout layout; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_3_E2CDADCAB2090CE4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA_METHOD_3_E2CDADCAB2090CE4_OFFSET))(this);
		}

		::System::Void Method_3_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_RENDERING_SDFATLASDATA_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
		}
	};
}
