#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_ShadersThatShareTiling_ShaderThatSharesTiling.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_GETSCALEANDOFFSETFORTEXTUREPROP_OFFSET UNITYSDK_OFFSET(0x1AF82630)
#define DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_GETSHADERSTHATSHARETILING_OFFSET UNITYSDK_OFFSET(0x1AF82250)
#define DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_INIT_OFFSET UNITYSDK_OFFSET(0x1AF82290)
#define DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF82890)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_ShadersThatShareTiling_TypeDefinitionIndex = 85078;

	class MB3_ShadersThatShareTiling : public ::System::Object
	{
	public:
		static ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling** StaticGet__singleton()
		{
			return (::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling**)Il2CppClass::FromTypeDefinitionIndex(MB3_ShadersThatShareTiling_TypeDefinitionIndex)->GetStaticField(0x49D10);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling_ShaderThatSharesTiling>* shadersThatShareTiling; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING__CTOR_OFFSET))(this);
		}

		static ::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling* GetShadersThatShareTiling()
		{
			return ((::DigitalOpus::MB::Core::MB3_ShadersThatShareTiling*(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_GETSHADERSTHATSHARETILING_OFFSET))();
		}

		static ::System::Void GetScaleAndOffsetForTextureProp(::UnityEngine::Material* m, ::System::String* texturePropName, ::UnityEngine::Vector2& offset, ::UnityEngine::Vector2& scale)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::String*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_GETSCALEANDOFFSETFORTEXTUREPROP_OFFSET))(m, texturePropName, offset, scale);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_SHADERSTHATSHARETILING_INIT_OFFSET))();
		}
	};
}
