#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_D8257A310CAD757C;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9ADB2A0)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9ADB300)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9AD8060)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x9ADB280)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_OnGroupEntitiesCreatedDelegate_TypeDefinitionIndex = 49328;

	class Map_OnGroupEntitiesCreatedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Class_2_D8257A310CAD757C* mapGroupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8257A310CAD757C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET))(this, mapGroupDef, versionStamp);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_D8257A310CAD757C* mapGroupDef, ::System::UInt32 versionStamp, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_D8257A310CAD757C*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET))(this, mapGroupDef, versionStamp, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
