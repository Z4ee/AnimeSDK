#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9ADB310)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9ADB340)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AD97B0)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACEF00)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_OnMapObjectsUpdateRequestFinish_TypeDefinitionIndex = 49327;

	class Map_OnMapObjectsUpdateRequestFinish : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::RPG::Client::Map_MapObjectsUpdateRequest* req)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_INVOKE_OFFSET))(this, req);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Map_MapObjectsUpdateRequest* req, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_BEGININVOKE_OFFSET))(this, req, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
