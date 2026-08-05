#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

namespace MoleMole { class PerformanceSettingProfile; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define CLASS_1_144B047379F813BA_METHOD_1_2BBEF517D4C61AF2_OFFSET UNITYSDK_OFFSET(0x14A2D990)
#define CLASS_1_144B047379F813BA_METHOD_1_48CDCE8C38EFF7E6_OFFSET UNITYSDK_OFFSET(0x14A33EC0)
#define CLASS_1_144B047379F813BA_METHOD_1_4B3C42E9045189F4_OFFSET UNITYSDK_OFFSET(0x14A33F40)
#define CLASS_1_144B047379F813BA_METHOD_1_6667C1084D90FE78_OFFSET UNITYSDK_OFFSET(0x14A2D910)
#define CLASS_1_144B047379F813BA_METHOD_1_B2D21548D00F38E7_OFFSET UNITYSDK_OFFSET(0x14A33FC0)
#define CLASS_1_144B047379F813BA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A34050)
#define CLASS_1_144B047379F813BA_METHOD_1_D898AB97D755349E_OFFSET UNITYSDK_OFFSET(0x14A33D40)
#define CLASS_1_144B047379F813BA_METHOD_1_F0B34C479CCBFC44_OFFSET UNITYSDK_OFFSET(0x14A33E00)
#define CLASS_1_144B047379F813BA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2D900)

inline static constexpr unsigned int Class_1_144B047379F813BA_TypeDefinitionIndex = 53525;

class Class_1_144B047379F813BA : public ::System::Object
{
public:
	::MoleMole::PerformanceSettingProfile* Field_1_0; // 0x10

	::System::Void _ctor(::MoleMole::PerformanceSettingProfile* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingProfile*))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_6667C1084D90FE78(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_6667C1084D90FE78_OFFSET))(a1);
	}

	::System::Void Method_1_2BBEF517D4C61AF2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_2BBEF517D4C61AF2_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_1_4B3C42E9045189F4(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution a1)
	{
		return ((::System::Int32(*)(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_4B3C42E9045189F4_OFFSET))(a1);
	}

	static ::System::Void Method_1_D898AB97D755349E(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_D898AB97D755349E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_48CDCE8C38EFF7E6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_48CDCE8C38EFF7E6_OFFSET))(a1);
	}

	static ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution Method_1_B2D21548D00F38E7(::System::Int32 a1)
	{
		return ((::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_B2D21548D00F38E7_OFFSET))(a1);
	}

	static ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* Method_1_F0B34C479CCBFC44()
	{
		return ((::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*(*)())((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_F0B34C479CCBFC44_OFFSET))();
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_144B047379F813BA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
