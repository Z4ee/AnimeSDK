#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_METHOD_1_1B1C1635438B9669_OFFSET UNITYSDK_OFFSET(0x17B32B10)
#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_METHOD_1_1E857558BF5FA984_OFFSET UNITYSDK_OFFSET(0x17B32A00)
#define RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B32DA0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassFinishRoute_TypeDefinitionIndex = 78453;

	class WormCompassFinishRoute : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* Path; // 0x10
		::System::String* RouteName; // 0x18
		::System::Int16 SavedGroupPropertyValue; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* TargetCols; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_1E857558BF5FA984(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_METHOD_1_1E857558BF5FA984_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_1B1C1635438B9669(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>* a1, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassDirection>*, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSFINISHROUTE_METHOD_1_1B1C1635438B9669_OFFSET))(this, a1, a2);
		}
	};
}
