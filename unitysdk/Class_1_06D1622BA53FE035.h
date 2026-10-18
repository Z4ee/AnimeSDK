#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_06D1622BA53FE035_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAAFDB0)
#define CLASS_1_06D1622BA53FE035__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAFE70)

inline static constexpr unsigned int Class_1_06D1622BA53FE035_TypeDefinitionIndex = 43412;

class Class_1_06D1622BA53FE035 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::LittleGameBaseEventAction*>* GKMGEAJGIKN; // 0x10
	::UnityEngine::AnimationCurve* FDBFGGMDJBM; // 0x18
	::System::Single IFEPJHGNCOI; // 0x20
	::UnityEngine::Vector3 IJHDBLGLCMN; // 0x24
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30
	::System::Single OIKGNPCGODF; // 0x3C
	::System::Single IEHPFADHJFD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06D1622BA53FE035__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06D1622BA53FE035_CLEAR_OFFSET))(this);
	}
};
