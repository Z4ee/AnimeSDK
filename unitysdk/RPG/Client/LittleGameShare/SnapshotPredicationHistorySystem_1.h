#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_68567FA2484DF545;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotPredicationHistorySystem_1_TypeDefinitionIndex = 35378;

	template <typename TEntity>
	class SnapshotPredicationHistorySystem_1 : public ::System::Object
	{
	public:
		::Class_3_9F40BD36E5F30CAE* _Instance; // 0x0
		::Entitas::IContext_1<TEntity>* _Context; // 0x0
		::Entitas::IMatcher_1<TEntity>* _PrediactedMatcher; // 0x0
		::Entitas::IGroup_1<TEntity>* _PrediactedGroup; // 0x0
		::System::Int32 _ReplicatedComponentIndex; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _CurDirtyEntity2Components; // 0x0
		static ::System::UInt32* StaticGet_PREDICTION_HISTORY_SIZE()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(SnapshotPredicationHistorySystem_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::Class_1_68567FA2484DF545*>* _PredicationHistory; // 0x0
		::Class_1_68567FA2484DF545* _WrittingHeadPredicationHistory; // 0x0
		::System::Int32 _PredicationHistoryIndexHead; // 0x0
	};
}
