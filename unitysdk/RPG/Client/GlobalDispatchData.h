#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GLOBALDISPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD117920)

namespace RPG::Client
{
	inline static constexpr unsigned int GlobalDispatchData_TypeDefinitionIndex = 69351;

	class GlobalDispatchData : public ::System::Object
	{
	public:
		::System::String* ForceUpdateUrl; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GlobalDispatchData_ServerData*>* ServerList; // 0x18
		::System::String* ForceUpdateMsg; // 0x20
		::System::String* Url; // 0x28
		::System::Boolean IsForceUpdate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GLOBALDISPATCHDATA__CTOR_OFFSET))(this);
		}
	};
}
