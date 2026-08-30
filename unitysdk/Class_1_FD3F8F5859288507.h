#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_FD3F8F5859288507_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C53BF20)
#define CLASS_1_FD3F8F5859288507__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53BFC0)

inline static constexpr unsigned int Class_1_FD3F8F5859288507_TypeDefinitionIndex = 41770;

class Class_1_FD3F8F5859288507 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::FiveDimBaseEventAction*>* GKMGEAJGIKN; // 0x10
	::UnityEngine::AnimationCurve* FDBFGGMDJBM; // 0x18
	::System::Single IEHPFADHJFD; // 0x20
	::System::Single OIKGNPCGODF; // 0x24
	::System::Single IFEPJHGNCOI; // 0x28
	::UnityEngine::Vector3 IJHDBLGLCMN; // 0x2C
	::UnityEngine::Vector3 DLKMKNFJLIK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3F8F5859288507__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD3F8F5859288507_CLEAR_OFFSET))(this);
	}
};
