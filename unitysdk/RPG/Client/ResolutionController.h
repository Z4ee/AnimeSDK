#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_RESOLUTIONCONTROLLER_GETFITRATIOX_OFFSET UNITYSDK_OFFSET(0x173A6B10)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_GETISPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x173A6A90)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_GET_ISPCRESOLUTION_OFFSET UNITYSDK_OFFSET(0x173A66F0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x173A6560)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_METHOD_5_2A829551B42C81EF_OFFSET UNITYSDK_OFFSET(0x173A6BC0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_METHOD_5_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x173A66A0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x173A65C0)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_SETCHILDRENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x173A6750)
#define RPG_CLIENT_RESOLUTIONCONTROLLER_UPDATECHILDRENRESOLUTION_OFFSET UNITYSDK_OFFSET(0x173A6C50)
#define RPG_CLIENT_RESOLUTIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173A6D30)

namespace RPG::Client
{
	inline static constexpr unsigned int ResolutionController_TypeDefinitionIndex = 69558;

	class ResolutionController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 PCResolution; // 0x18
		::UnityEngine::Vector2 PhoneResolution; // 0x20
		::System::Boolean Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean GetIsPCResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GETISPCRESOLUTION_OFFSET))(this);
		}

		::System::Single GetFitRatioX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GETFITRATIOX_OFFSET))(this);
		}

		::System::Boolean Method_5_2A829551B42C81EF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_METHOD_5_2A829551B42C81EF_OFFSET))(this, a1);
		}

		::System::Void SetChildrenResolution(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_SETCHILDRENRESOLUTION_OFFSET))(this, a1);
		}

		::System::Void UpdateChildrenResolution()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_UPDATECHILDRENRESOLUTION_OFFSET))(this);
		}

		::System::Boolean get_IsPCResolution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_GET_ISPCRESOLUTION_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_5_BC46FCF99873D9DD()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESOLUTIONCONTROLLER_METHOD_5_BC46FCF99873D9DD_OFFSET))(this);
		}
	};
}
