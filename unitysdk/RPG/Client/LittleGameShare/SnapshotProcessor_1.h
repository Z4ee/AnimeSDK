#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_8278C4CB5E7C57A4;
class Class_1_829CFD6018DBC4E4;
class Class_3_C66DEDBB208C643C;
namespace Entitas { template <typename T> class Context_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotProcessor_1_TypeDefinitionIndex = 34430;

	template <typename TEntity>
	class SnapshotProcessor_1 : public ::System::Object
	{
	public:
		::Class_3_C66DEDBB208C643C* _instance; // 0x0
		::Entitas::Context_1<TEntity>* _context; // 0x0
		::Il2CppArray<::System::RuntimeTypeHandle>* _ComponentTypes; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
	};
}
