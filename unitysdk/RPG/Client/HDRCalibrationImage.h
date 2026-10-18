#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET UNITYSDK_OFFSET(0xD2E52B0)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET UNITYSDK_OFFSET(0xD2E5350)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE__CCTOR_OFFSET UNITYSDK_OFFSET(0xD2E5480)
#define RPG_CLIENT_HDRCALIBRATIONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2E5470)

namespace RPG::Client
{
	inline static constexpr unsigned int HDRCalibrationImage_TypeDefinitionIndex = 72804;

	class HDRCalibrationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_CDNPLBFACFJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRCalibrationImage_TypeDefinitionIndex)->GetStaticField(0x30D0);
		}
		static ::System::Int32* StaticGet_HLCMBIDIJPC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HDRCalibrationImage_TypeDefinitionIndex)->GetStaticField(0x30D4);
		}
		::System::Boolean isBackground; // 0x18
		::UnityEngine::UI::Image* KIODLMCBHLL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HDRCALIBRATIONIMAGE_UPDATE_OFFSET))(this);
		}
	};
}
