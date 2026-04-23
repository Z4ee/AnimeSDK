#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12C1B2C0)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12C1B320)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x12C131C0)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12C1B2A0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_ShaderDispatchCallback_TypeDefinitionIndex = 36958;

	class Player_ShaderDispatchCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::Shader* Invoke(::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additiveMode)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_INVOKE_OFFSET))(this, movieInfo, additiveMode);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::MovieInfo* movieInfo, ::System::Boolean additiveMode, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_BEGININVOKE_OFFSET))(this, movieInfo, additiveMode, callback, object);
		}

		::UnityEngine::Shader* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
