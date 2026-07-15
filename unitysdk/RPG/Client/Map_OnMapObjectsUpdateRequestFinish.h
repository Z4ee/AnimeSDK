#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17FCCC90)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17FCCCC0)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_INVOKE_OFFSET UNITYSDK_OFFSET(0x17FCACD0)
#define RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCCBA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_OnMapObjectsUpdateRequestFinish_TypeDefinitionIndex = 58133;

	class Map_OnMapObjectsUpdateRequestFinish : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::Map_MapObjectsUpdateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Map_MapObjectsUpdateRequest* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Map_MapObjectsUpdateRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONMAPOBJECTSUPDATEREQUESTFINISH_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
