#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8450)
#define RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET UNITYSDK_OFFSET(0x1C6F6C20)
#define RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET UNITYSDK_OFFSET(0x1C6F71F0)
#define RPGRENDERINGUTILS_ISDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8760)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F86F0)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8680)
#define RPGRENDERINGUTILS_ISENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F87D0)
#define RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F85A0)
#define RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F84C0)
#define RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8610)
#define RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8530)
#define RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8370)
#define RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8000)
#define RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F83E0)
#define RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8420)
#define RPGRENDERINGUTILS_MAKEDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8730)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F86C0)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8650)
#define RPGRENDERINGUTILS_MAKEENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F87A0)
#define RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8570)
#define RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8490)
#define RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F85E0)
#define RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8500)
#define RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F6F10)
#define RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F7510)
#define RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8340)
#define RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F7AA0)
#define RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F83B0)
#define RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET UNITYSDK_OFFSET(0x1C6F8310)
#define RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET UNITYSDK_OFFSET(0x1C6F74E0)
#define RPGRENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F8810)

inline static constexpr unsigned int RPGRenderingUtils_TypeDefinitionIndex = 36793;

class RPGRenderingUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_ActiveStageName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x423E0);
	}
	static ::System::String** StaticGet_vkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x423E8);
	}
	static ::System::String** StaticGet_customVkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x423F0);
	}
	static ::System::String** StaticGet_vulkanFeaturesFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x423F8);
	}
	static ::System::UInt32* StaticGet_enableVKShaderModuleCache()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD30);
	}
	static ::System::Byte* StaticGet_vulkanForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD34);
	}
	static ::System::Boolean* StaticGet_isVulkanConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD35);
	}
	static ::System::UInt32* StaticGet_disableClearAttachmentOpt()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD38);
	}
	static ::System::Byte* StaticGet_glesForceVulkanFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD3C);
	}
	static ::System::Boolean* StaticGet_vulkanConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD3D);
	}
	static ::System::Boolean* StaticGet_isGlesConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD3E);
	}
	static ::System::UInt32* StaticGet_enableVulkanIndirectDrawCount()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD40);
	}
	static ::System::UInt32* StaticGet_enableVKGPUCrashCheck()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD44);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeap()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD48);
	}
	static ::System::UInt32* StaticGet_enableVKAttachmentStoreNoneForNonAdreonGPU()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD4C);
	}
	static ::System::UInt32* StaticGet_enableVKMemoryReport()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD50);
	}
	static ::System::UInt32* StaticGet_enableDynamicRendering()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD54);
	}
	static ::System::UInt32* StaticGet_enableVulkanRBA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD58);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeapAllGBuffer()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD5C);
	}
	static ::System::Byte* StaticGet_glesForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD60);
	}
	static ::System::Boolean* StaticGet_glesConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD61);
	}
	static ::System::Byte* StaticGet_customFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD62);
	}
	static ::System::Boolean* StaticGet_isInVulkanWhitelist()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD63);
	}
	static ::System::UInt32* StaticGet_enableVulkanDynamicVertexState()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD64);
	}
	static ::System::UInt32* StaticGet_closeVkPreTransform()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0xFD68);
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
