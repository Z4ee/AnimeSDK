#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class ShaderGenerateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_PRELOADLEVELGENERATECONFIG_ISLEVELIGNORE_OFFSET UNITYSDK_OFFSET(0x11780870)
#define MOLEMOLE_PRELOADLEVELGENERATECONFIG_ISSHADERSUPPORTASYNCCREATE_OFFSET UNITYSDK_OFFSET(0x11780780)
#define MOLEMOLE_PRELOADLEVELGENERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11780930)

namespace MoleMole
{
	inline static constexpr unsigned int PreloadLevelGenerateConfig_TypeDefinitionIndex = 80944;

	class PreloadLevelGenerateConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ShaderGenerateConfig*>* shaderPlatforms; // 0x58
		::Il2CppArray<::System::String*>* forceSyncShaderPatterns; // 0x60
		::Il2CppArray<::System::String*>* ignorePrefabPatterns; // 0x68
		::Il2CppArray<::System::String*>* ignoreAssetPatterns; // 0x70
		::Il2CppArray<::System::String*>* ignoreLevelPatterns; // 0x78
		::Il2CppArray<::System::String*>* forcePreloadPrefabPaths; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELGENERATECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShaderSupportAsyncCreate(::System::String* shaderName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELGENERATECONFIG_ISSHADERSUPPORTASYNCCREATE_OFFSET))(this, shaderName);
		}

		::System::Boolean IsLevelIgnore(::System::String* fcPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_PRELOADLEVELGENERATECONFIG_ISLEVELIGNORE_OFFSET))(this, fcPath);
		}
	};
}
