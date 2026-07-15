#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65C29E3C44746DB.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"

class Class_1_8826F6D93ACAC1A7;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }
namespace System { class Type; }

namespace RPG::Client
{
	inline static constexpr unsigned int FloorCustomValue_1_TypeDefinitionIndex = 59333;

	template <typename TValue>
	class FloorCustomValue_1 : public ::Class_1_F65C29E3C44746DB
	{
	public:
		::System::Boolean _IsLock; // 0x0
		::RPG::GameCore::FloorCustomValueSetSource _LockSource; // 0x0
		::System::Boolean _NeedRecoverWhenUnlock; // 0x0
		TValue _RecoverValueWhenUnlock; // 0x0
		TValue _Value; // 0x0
	};
}
