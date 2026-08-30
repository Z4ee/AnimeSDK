#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace RPG::Client { class ImageSmoothMask; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19838130)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19836F80)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x19837070)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x198381A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageForSmoothMask_TypeDefinitionIndex = 72471;

	class ImageForSmoothMask : public ::UnityEngine::UI::Image
	{
	public:
		::RPG::Client::ImageSmoothMask* GPDJMIKFKBM; // 0x1E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET))(this);
		}
	};
}
