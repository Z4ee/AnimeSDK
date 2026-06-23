#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

namespace MoleMole { class PerformanceSettingProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define CLASS_1_144B047379F813BA_METHOD_1_0E29F2DAB31C0AB2_OFFSET UNITYSDK_OFFSET(0x127E97A0)
#define CLASS_1_144B047379F813BA_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x127EFB50)
#define CLASS_1_144B047379F813BA_METHOD_1_4B3C42E9045189F4_OFFSET UNITYSDK_OFFSET(0x127E9650)
#define CLASS_1_144B047379F813BA_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x127E9930)
#define CLASS_1_144B047379F813BA_METHOD_1_B2D21548D00F38E7_OFFSET UNITYSDK_OFFSET(0x127E9710)
#define CLASS_1_144B047379F813BA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x127E96D0)
#define CLASS_1_144B047379F813BA_METHOD_1_D898AB97D755349E_OFFSET UNITYSDK_OFFSET(0x127E9870)
#define CLASS_1_144B047379F813BA_METHOD_1_EEC2F7E3485A76DF_OFFSET UNITYSDK_OFFSET(0x127E99B0)
#define CLASS_1_144B047379F813BA__CTOR_OFFSET UNITYSDK_OFFSET(0x127E9640)

inline static constexpr unsigned int Class_1_144B047379F813BA_TypeDefinitionIndex = 56282;

class Class_1_144B047379F813BA : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingProfile* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_4B3C42E9045189F4(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution a1)
	{
		return ((::System::Int32(*)(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_4B3C42E9045189F4_OFFSET))(a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution Method_1_B2D21548D00F38E7(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_B2D21548D00F38E7_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* Method_1_0E29F2DAB31C0AB2()
	{
		return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_0E29F2DAB31C0AB2_OFFSET))();
	}

	static ::System::Void Method_1_D898AB97D755349E(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_D898AB97D755349E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
	}

	::System::Void Method_1_EEC2F7E3485A76DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_EEC2F7E3485A76DF_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}
};
