#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_78A7ED2C7E071DF9;
class Class_1_8278C4CB5E7C57A4;
class Class_3_49128057410E0DBC;
namespace Entitas { template <typename T> class IContext_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotServerProcessor_1_TypeDefinitionIndex = 35392;

	template <typename TEntity>
	class SnapshotServerProcessor_1 : public ::System::Object
	{
	public:
		::Class_3_49128057410E0DBC* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
	};
}
