#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C280)
#define RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET UNITYSDK_OFFSET(0x1D13AA50)
#define RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET UNITYSDK_OFFSET(0x1D13B020)
#define RPGRENDERINGUTILS_ISDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C590)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C520)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C4B0)
#define RPGRENDERINGUTILS_ISENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C600)
#define RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C3D0)
#define RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C2F0)
#define RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C440)
#define RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C360)
#define RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C1A0)
#define RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13BE30)
#define RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C210)
#define RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C250)
#define RPGRENDERINGUTILS_MAKEDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C560)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C4F0)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C480)
#define RPGRENDERINGUTILS_MAKEENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C5D0)
#define RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C3A0)
#define RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C2C0)
#define RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C410)
#define RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C330)
#define RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13AD40)
#define RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13B340)
#define RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C170)
#define RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13B8D0)
#define RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C1E0)
#define RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1D13C140)
#define RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET UNITYSDK_OFFSET(0x1D13B310)
#define RPGRENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13C640)

inline static constexpr unsigned int RPGRenderingUtils_TypeDefinitionIndex = 35932;

class RPGRenderingUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_customVkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x61210);
	}
	static ::System::String** StaticGet_vulkanFeaturesFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x61218);
	}
	static ::System::String** StaticGet_vkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x61220);
	}
	static ::System::String** StaticGet_ActiveStageName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x61228);
	}
	static ::System::UInt32* StaticGet_enableVKAttachmentStoreNoneForNonAdreonGPU()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AD0);
	}
	static ::System::UInt32* StaticGet_enableDynamicRendering()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AD4);
	}
	static ::System::UInt32* StaticGet_enableVKShaderModuleCache()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AD8);
	}
	static ::System::Boolean* StaticGet_isVulkanConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12ADC);
	}
	static ::System::Boolean* StaticGet_isGlesConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12ADD);
	}
	static ::System::UInt32* StaticGet_enableVKGPUCrashCheck()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AE0);
	}
	static ::System::UInt32* StaticGet_enableVulkanIndirectDrawCount()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AE4);
	}
	static ::System::UInt32* StaticGet_enableVKMemoryReport()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AE8);
	}
	static ::System::UInt32* StaticGet_enableVulkanRBA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AEC);
	}
	static ::System::Boolean* StaticGet_isInVulkanWhitelist()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF0);
	}
	static ::System::Byte* StaticGet_vulkanForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF1);
	}
	static ::System::Boolean* StaticGet_glesConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF2);
	}
	static ::System::Byte* StaticGet_glesForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF3);
	}
	static ::System::Boolean* StaticGet_vulkanConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF4);
	}
	static ::System::Byte* StaticGet_customFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF5);
	}
	static ::System::Byte* StaticGet_glesForceVulkanFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF6);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeapAllGBuffer()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AF8);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeap()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12AFC);
	}
	static ::System::UInt32* StaticGet_disableClearAttachmentOpt()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12B00);
	}
	static ::System::UInt32* StaticGet_enableVulkanDynamicVertexState()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12B04);
	}
	static ::System::UInt32* StaticGet_closeVkPreTransform()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x12B08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsCurrentGlesConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET))();
	}

	static ::System::Void MakeForceGlesConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsCurrentVulkanConfig()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET))();
	}

	static ::System::Void SetInVulkanWhitelist(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET))(a1);
	}

	static ::System::Void MakeForceVulkanConfigFile(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void MakeVulkanFeaturesConfigFile(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET))(a1, a2);
	}

	static ::System::Boolean IsVulkanFeaturesConfigFile(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Void MakeVulkanRBAConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET))(a1);
	}

	static ::System::Void MakeVulkanDynamicVertexStateConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsVulkanDynamicVertexStateConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeVulkanIndirectDrawCountConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsVulkanIndirectDrawCountConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeCloseVkPreTransformConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsCloseVkPreTransformConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKGPUCrashCheckConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsEnableVKGPUCrashCheckConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKShaderModuleCacheConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsEnableVKShaderModuleCacheConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKAttachmentStoreNoneForNonAdreonGPUConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsEnableVKAttachmentStoreNoneForNonAdreonGPUConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableVKMemoryReportConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsEnableVKMemoryReportConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeDisableVKTileMemoryHeapConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsDisableVKTileMemoryHeapConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeDisableVKTileMemoryHeapAllGBufferConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsDisableVKTileMemoryHeapAllGBufferConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeDisableClearAttachmentOptConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsDisableClearAttachmentOptConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET))();
	}

	static ::System::Void MakeEnableDynamicRenderingConfigFile(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_MAKEENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET))(a1);
	}

	static ::System::Boolean IsEnableDynamicRenderingConfigFile()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPGRENDERINGUTILS_ISENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET))();
	}
};
