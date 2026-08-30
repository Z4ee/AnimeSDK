#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_7C3EF1FF302C26DE.h"
#include "unitysdk/System/Object.h"

class Class_1_8330E65955F3FDEC;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SimpleEventService_1_TypeDefinitionIndex = 76045;

	template <typename TEntity>
	class SimpleEventService_1 : public ::System::Object
	{
	public:
		// static const ::System::UInt32 INVALID_SOURCE_ID = 0x0; // 0x0
		// static const ::System::Int32 INVALID_RUNTIME_ID = 0x0; // 0x0
		// static const ::System::UInt32 NONE_SOURCE_ID = 0xFFFFFFFF; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Int32 _EventCenterEntityID; // 0x0
		// static const ::System::Int32 INVALID_ENTITY_ID = 0x7FFFFFFF; // 0x0
	};
}
