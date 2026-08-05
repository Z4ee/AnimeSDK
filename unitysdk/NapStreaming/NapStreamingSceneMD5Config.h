#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NapStreaming { class NapStreamingSceneMD5; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CHECKNEEDGENERATEQUICKLY_OFFSET UNITYSDK_OFFSET(0x177E9560)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CHECKNEEDGENERATE_OFFSET UNITYSDK_OFFSET(0x177E9510)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CLEARGENERATED_OFFSET UNITYSDK_OFFSET(0x177E9430)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_FASTCHECKSCENECHANGED_OFFSET UNITYSDK_OFFSET(0x177E8E70)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_GETMD5HASH_OFFSET UNITYSDK_OFFSET(0x177E8B40)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x177E8FC0)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_ISGENERATED_OFFSET UNITYSDK_OFFSET(0x177E9380)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_SAVECONFIG_OFFSET UNITYSDK_OFFSET(0x177E91F0)
#define NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177E95B0)

namespace NapStreaming
{
	inline static constexpr unsigned int NapStreamingSceneMD5Config_TypeDefinitionIndex = 64454;

	class NapStreamingSceneMD5Config : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::NapStreaming::NapStreamingSceneMD5*>* streamingScenes; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NapStreaming::NapStreamingSceneMD5*>* sceneMd5Dict; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG__CTOR_OFFSET))(this);
		}

		static ::System::String* GetMD5Hash(::System::String* filePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_GETMD5HASH_OFFSET))(filePath);
		}

		::System::Boolean FastCheckSceneChanged(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_FASTCHECKSCENECHANGED_OFFSET))(this, scenePath);
		}

		::System::Void InitConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_INITCONFIG_OFFSET))(this);
		}

		::System::Void SaveConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_SAVECONFIG_OFFSET))(this);
		}

		::System::Boolean IsGenerated(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_ISGENERATED_OFFSET))(this, scenePath);
		}

		::System::Void ClearGenerated(::System::String* scenePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CLEARGENERATED_OFFSET))(this, scenePath);
		}

		::System::Boolean CheckNeedGenerate(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CHECKNEEDGENERATE_OFFSET))(this, scenePath);
		}

		::System::Boolean CheckNeedGenerateQuickly(::System::String* scenePath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAPSTREAMING_NAPSTREAMINGSCENEMD5CONFIG_CHECKNEEDGENERATEQUICKLY_OFFSET))(this, scenePath);
		}
	};
}
