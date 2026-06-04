#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPGRENDERINGUTILS_ISCLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C850)
#define RPGRENDERINGUTILS_ISCURRENTGLESCONFIG_OFFSET UNITYSDK_OFFSET(0x18F2B460)
#define RPGRENDERINGUTILS_ISCURRENTVULKANCONFIG_OFFSET UNITYSDK_OFFSET(0x18F2B970)
#define RPGRENDERINGUTILS_ISDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CB60)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CAF0)
#define RPGRENDERINGUTILS_ISDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CA80)
#define RPGRENDERINGUTILS_ISENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CBD0)
#define RPGRENDERINGUTILS_ISENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C9A0)
#define RPGRENDERINGUTILS_ISENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C8C0)
#define RPGRENDERINGUTILS_ISENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CA10)
#define RPGRENDERINGUTILS_ISENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C930)
#define RPGRENDERINGUTILS_ISVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C770)
#define RPGRENDERINGUTILS_ISVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C4D0)
#define RPGRENDERINGUTILS_ISVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C7E0)
#define RPGRENDERINGUTILS_MAKECLOSEVKPRETRANSFORMCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C820)
#define RPGRENDERINGUTILS_MAKEDISABLECLEARATTACHMENTOPTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CB30)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPALLGBUFFERCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CAC0)
#define RPGRENDERINGUTILS_MAKEDISABLEVKTILEMEMORYHEAPCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CA50)
#define RPGRENDERINGUTILS_MAKEENABLEDYNAMICRENDERINGCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2CBA0)
#define RPGRENDERINGUTILS_MAKEENABLEVKATTACHMENTSTORENONEFORNONADREONGPUCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C970)
#define RPGRENDERINGUTILS_MAKEENABLEVKGPUCRASHCHECKCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C890)
#define RPGRENDERINGUTILS_MAKEENABLEVKMEMORYREPORTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C9E0)
#define RPGRENDERINGUTILS_MAKEENABLEVKSHADERMODULECACHECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C900)
#define RPGRENDERINGUTILS_MAKEFORCEGLESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2B6F0)
#define RPGRENDERINGUTILS_MAKEFORCEVULKANCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2BC30)
#define RPGRENDERINGUTILS_MAKEVULKANDYNAMICVERTEXSTATECONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C740)
#define RPGRENDERINGUTILS_MAKEVULKANFEATURESCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C100)
#define RPGRENDERINGUTILS_MAKEVULKANINDIRECTDRAWCOUNTCONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C7B0)
#define RPGRENDERINGUTILS_MAKEVULKANRBACONFIGFILE_OFFSET UNITYSDK_OFFSET(0x18F2C710)
#define RPGRENDERINGUTILS_SETINVULKANWHITELIST_OFFSET UNITYSDK_OFFSET(0x18F2BC00)
#define RPGRENDERINGUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F2CC10)

inline static constexpr unsigned int RPGRenderingUtils_TypeDefinitionIndex = 35150;

class RPGRenderingUtils : public ::System::Object
{
public:
	static ::System::String** StaticGet_customVkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x62E90);
	}
	static ::System::String** StaticGet_ActiveStageName()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x62E98);
	}
	static ::System::String** StaticGet_vulkanFeaturesFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x62EA0);
	}
	static ::System::String** StaticGet_vkCapsFilePath()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x62EA8);
	}
	static ::System::Boolean* StaticGet_glesConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13850);
	}
	static ::System::Byte* StaticGet_glesForceVulkanFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13851);
	}
	static ::System::UInt32* StaticGet_enableVulkanIndirectDrawCount()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13854);
	}
	static ::System::UInt32* StaticGet_enableVKShaderModuleCache()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13858);
	}
	static ::System::UInt32* StaticGet_enableVulkanDynamicVertexState()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x1385C);
	}
	static ::System::UInt32* StaticGet_enableVulkanRBA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13860);
	}
	static ::System::UInt32* StaticGet_enableVKGPUCrashCheck()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13864);
	}
	static ::System::UInt32* StaticGet_enableVKMemoryReport()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13868);
	}
	static ::System::Boolean* StaticGet_vulkanConfigDirty()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x1386C);
	}
	static ::System::Boolean* StaticGet_isVulkanConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x1386D);
	}
	static ::System::Byte* StaticGet_glesForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x1386E);
	}
	static ::System::UInt32* StaticGet_disableClearAttachmentOpt()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13870);
	}
	static ::System::Byte* StaticGet_customFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13874);
	}
	static ::System::Byte* StaticGet_vulkanForceGlesFlag()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13875);
	}
	static ::System::Boolean* StaticGet_isGlesConfig()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13876);
	}
	static ::System::Boolean* StaticGet_isInVulkanWhitelist()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13877);
	}
	static ::System::UInt32* StaticGet_enableVKAttachmentStoreNoneForNonAdreonGPU()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13878);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeapAllGBuffer()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x1387C);
	}
	static ::System::UInt32* StaticGet_enableDynamicRendering()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13880);
	}
	static ::System::UInt32* StaticGet_disableVKTileMemoryHeap()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13884);
	}
	static ::System::UInt32* StaticGet_closeVkPreTransform()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RPGRenderingUtils_TypeDefinitionIndex)->GetStaticField(0x13888);
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
