#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162844D0)

inline static constexpr unsigned int Class_1_AE4CA5FB1615574B___c__DisplayClass40_0_TypeDefinitionIndex = 76231;

class Class_1_AE4CA5FB1615574B___c__DisplayClass40_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>* effectEntityDict; // 0x10
	::System::Action* callback; // 0x18
	::System::Boolean needRefresh; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE4CA5FB1615574B___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
	}
};
