#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_510E2A3B742BC0DC;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xBEBD620)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xBEBD680)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xBEBAA20)
#define RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xBEBD530)

namespace RPG::Client
{
	inline static constexpr unsigned int Map_OnGroupEntitiesCreatedDelegate_TypeDefinitionIndex = 56887;

	class Map_OnGroupEntitiesCreatedDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::Class_2_510E2A3B742BC0DC* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Class_2_510E2A3B742BC0DC* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_510E2A3B742BC0DC*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP_ONGROUPENTITIESCREATEDDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
