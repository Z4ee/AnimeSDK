#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace RPG::Client { class ImageSmoothMask; }
namespace UnityEngine::UI { class VertexHelper; }

#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x993A470)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9939000)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x99390F0)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x993A4E0)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x993A540)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x993A510)
#define RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x993A530)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageForSmoothMask_TypeDefinitionIndex = 59450;

	class ImageForSmoothMask : public ::UnityEngine::UI::Image
	{
	public:
		::RPG::Client::ImageSmoothMask* Field_9_0; // 0x1E8

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

		::System::Void __iFixBaseProxy_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEFORSMOOTHMASK___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}
	};
}
