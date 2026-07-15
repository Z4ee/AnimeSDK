#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_0_16E4307DCC419505_465;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { template <typename T> class IRtFlagListener_1; }
namespace RPG::GameCore { template <typename T> class RtFlagRef_1; }
namespace System::Collections { class BitArray; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtFlagComponent_1_TypeDefinitionIndex = 51523;

	template <typename TFlag>
	class RtFlagComponent_1 : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::RtFlagRef_1<TFlag>*>* _FlagDict; // 0x0
		::System::Collections::BitArray* _FlagArray; // 0x0
		::System::Collections::Generic::List_1<::RPG::GameCore::IRtFlagListener_1<TFlag>*>* _FlagListeners; // 0x0
		::System::UInt32 _FlagStateVersion; // 0x0
	};
}
