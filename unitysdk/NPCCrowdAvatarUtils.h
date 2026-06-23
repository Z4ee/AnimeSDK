#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPCCrowdAvatarUtils_CrowdAvatarShaderInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define NPCCROWDAVATARUTILS_GETCROWDSHADER_1_OFFSET UNITYSDK_OFFSET(0xF9C8760)
#define NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET UNITYSDK_OFFSET(0xF9C7DE0)
#define NPCCROWDAVATARUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9C8C80)
#define NPCCROWDAVATARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C8C70)

inline static constexpr unsigned int NPCCrowdAvatarUtils_TypeDefinitionIndex = 67787;

class NPCCrowdAvatarUtils : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo*>** StaticGet_CrowdShadersInfos()
	{
		return (::System::Collections::Generic::List_1<::NPCCrowdAvatarUtils_CrowdAvatarShaderInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48B90);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Shader*>** StaticGet__crowdShaderMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Shader*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarUtils_TypeDefinitionIndex)->GetStaticField(0x48B98);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Shader* GetCrowdShader(::UnityEngine::Shader* originShader)
	{
		return ((::UnityEngine::Shader*(*)(::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_GETCROWDSHADER_OFFSET))(originShader);
	}

	static ::UnityEngine::Shader* GetCrowdShader_1(::System::String* originShaderName)
	{
		return ((::UnityEngine::Shader*(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCCROWDAVATARUTILS_GETCROWDSHADER_1_OFFSET))(originShaderName);
	}
};
