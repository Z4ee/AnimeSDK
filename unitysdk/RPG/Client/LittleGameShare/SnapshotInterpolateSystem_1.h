#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/SnapshotInterpolateSystem_1_State.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_78A7ED2C7E071DF9;
class Class_1_8278C4CB5E7C57A4;
class Class_1_829CFD6018DBC4E4;
class Class_1_ACEF39B7952CA17D;
class Class_3_9F40BD36E5F30CAE;
namespace Entitas { template <typename T> class Context_1; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int SnapshotInterpolateSystem_1_TypeDefinitionIndex = 35370;

	template <typename TEntity>
	class SnapshotInterpolateSystem_1 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::SnapshotInterpolateSystem_1_State<TEntity> _State; // 0x0
		::Class_3_9F40BD36E5F30CAE* _Instance; // 0x0
		::Entitas::Context_1<TEntity>* _Context; // 0x0
		::Class_1_78A7ED2C7E071DF9* _OldFrameSnapShotData; // 0x0
		::Class_1_78A7ED2C7E071DF9* _CurrentFrameSnapShotData; // 0x0
		::System::Collections::Generic::Queue_1<::Class_1_78A7ED2C7E071DF9*>* _FrameSnapshotQueue; // 0x0
		::Class_1_ACEF39B7952CA17D* _NewDataReader; // 0x0
		::Class_1_ACEF39B7952CA17D* _OldDataReader; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_829CFD6018DBC4E4*>*>* _OldComponentSnapShotDic; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_36*>* _SnapshotLerpList; // 0x0
		::System::Action_1<::Class_1_8278C4CB5E7C57A4*>* OnApplyEntityInterpolateEnd; // 0x0
		::System::Action_1<::Class_1_8278C4CB5E7C57A4*>* OnApplyEntitySpawn; // 0x0
		::System::Action_1<::Class_1_8278C4CB5E7C57A4*>* OnApplyEntityDespawn; // 0x0
		::System::Action_2<::Class_1_8278C4CB5E7C57A4*, ::Class_1_829CFD6018DBC4E4*>* OnApplyNoInterpolateComponent; // 0x0
	};
}
