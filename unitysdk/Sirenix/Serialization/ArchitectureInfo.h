#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"

#define SIRENIX_SERIALIZATION_ARCHITECTUREINFO_SETRUNTIMEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1D543B70)
#define SIRENIX_SERIALIZATION_ARCHITECTUREINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D543AF0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int ArchitectureInfo_TypeDefinitionIndex = 7493;

	class ArchitectureInfo : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_Architecture_Supports_Unaligned_Float32_Reads()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ArchitectureInfo_TypeDefinitionIndex)->GetStaticField(0x32F0);
		}
		static ::System::Boolean* StaticGet_Architecture_Supports_All_Unaligned_ReadWrites()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ArchitectureInfo_TypeDefinitionIndex)->GetStaticField(0x32F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARCHITECTUREINFO__CCTOR_OFFSET))();
		}

		static ::System::Void SetRuntimePlatform(::UnityEngine::RuntimePlatform platform)
		{
			return ((::System::Void(*)(::UnityEngine::RuntimePlatform))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_ARCHITECTUREINFO_SETRUNTIMEPLATFORM_OFFSET))(platform);
		}
	};
}
