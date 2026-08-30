#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Shader; }

#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DC4ABC0)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DC4AC20)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DC3FDC0)
#define CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4AAD0)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_ShaderDispatchCallback_TypeDefinitionIndex = 38926;

	class Player_ShaderDispatchCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Shader* Invoke(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::MovieInfo* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Shader* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::Shader*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_SHADERDISPATCHCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
