#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CriWare::CriMana { class Player; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E7CB260)
#define CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E7CB290)
#define CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7CAD60)
#define CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CAD40)

namespace CriWare::CriMana
{
	inline static constexpr unsigned int Player_LoopPointCallback_TypeDefinitionIndex = 34408;

	class Player_LoopPointCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::CriWare::CriMana::Player* player)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_INVOKE_OFFSET))(this, player);
		}

		::System::IAsyncResult* BeginInvoke(::CriWare::CriMana::Player* player, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CriWare::CriMana::Player*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_BEGININVOKE_OFFSET))(this, player, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANA_PLAYER_LOOPPOINTCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
