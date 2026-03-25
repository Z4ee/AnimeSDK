#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CapturePostProcessPass_EPostProcess.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CapturePostProcessPass_RTHandle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A66A60)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ENDFILTER_OFFSET UNITYSDK_OFFSET(0x16A7C3C0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GETFILTERRT_OFFSET UNITYSDK_OFFSET(0x16A7C340)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_CAPTUREFILTERENABLE_OFFSET UNITYSDK_OFFSET(0x16A7D6B0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_WATERMARKENABLE_OFFSET UNITYSDK_OFFSET(0x16A7D6D0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET__CAPTUREFEATUREENABLE_OFFSET UNITYSDK_OFFSET(0x16A7C520)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16A6F570)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ISFILTERING_OFFSET UNITYSDK_OFFSET(0x16A7C500)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RELEASEFILTERRT_OFFSET UNITYSDK_OFFSET(0x16A7C400)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_STARTFILTER_OFFSET UNITYSDK_OFFSET(0x16A7C000)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x16A6F560)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLMOBILE_OFFSET UNITYSDK_OFFSET(0x16A7CFA0)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLPC_OFFSET UNITYSDK_OFFSET(0x16A7C530)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x16A62A40)
#define RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__STARTFILTER_OFFSET UNITYSDK_OFFSET(0x16A7C030)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapturePostProcessPass_TypeDefinitionIndex = 29373;

	class CapturePostProcessPass : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::CapturePostProcessPass** StaticGet_s_Instance()
		{
			return (::RPG::CustomRP::CapturePostProcessPass**)Il2CppClass::FromTypeDefinitionIndex(CapturePostProcessPass_TypeDefinitionIndex)->GetStaticField(0x30850);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::CapturePostProcessPass_RTHandle*>* _RTHandles; // 0x10
		::Il2CppArray<::System::String*>* _Keywords; // 0x18
		::UnityEngine::Material* _PPMat; // 0x20
		::UnityEngine::RenderTexture* _SrcTex; // 0x28
		::System::Int32 _TempRT1; // 0x30
		::RPG::CustomRP::CapturePostProcessPass_EPostProcess _PPFeature; // 0x34
		::System::Int32 _RTBlur1; // 0x38
		::System::Int32 _RTBlur2; // 0x3C
		::System::Int32 _RTBlur3; // 0x40
		::System::Int32 _BoxBlurParams; // 0x44
		::System::Int32 _TempRT2; // 0x48
		::System::Int32 _RTBlur4; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_DISPOSE_OFFSET))(this);
		}

		static ::System::Void StartFilter(::UnityEngine::RenderTexture* srcTex, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess ppFeature, ::UnityEngine::Material* ppMat)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_STARTFILTER_OFFSET))(srcTex, ppFeature, ppMat);
		}

		static ::UnityEngine::RenderTexture* GetFilterRT()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GETFILTERRT_OFFSET))();
		}

		static ::System::Void EndFilter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ENDFILTER_OFFSET))();
		}

		static ::System::Void ReleaseFilterRT()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_RELEASEFILTERRT_OFFSET))();
		}

		static ::System::Boolean IsFiltering()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_ISFILTERING_OFFSET))();
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_UPDATE_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_INNEREXECUTE_OFFSET))(this, cmd);
		}

		static ::System::Boolean get_CaptureFilterEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_CAPTUREFILTERENABLE_OFFSET))();
		}

		static ::System::Boolean get_WaterMarkEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET_WATERMARKENABLE_OFFSET))();
		}

		::System::Void _StartFilter(::UnityEngine::RenderTexture* srcTex, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess ppFeature, ::UnityEngine::Material* ppMat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::RPG::CustomRP::CapturePostProcessPass_EPostProcess, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__STARTFILTER_OFFSET))(this, srcTex, ppFeature, ppMat);
		}

		::System::Void _BlurFullPC(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLPC_OFFSET))(this, cmd);
		}

		::System::Void _BlurFullMobile(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS__BLURFULLMOBILE_OFFSET))(this, cmd);
		}

		::System::Boolean get__CaptureFeatureEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CAPTUREPOSTPROCESSPASS_GET__CAPTUREFEATUREENABLE_OFFSET))(this);
		}
	};
}
