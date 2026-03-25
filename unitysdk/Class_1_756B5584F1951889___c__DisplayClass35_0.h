#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x897E0B0)

inline static constexpr unsigned int Class_1_756B5584F1951889___c__DisplayClass35_0_TypeDefinitionIndex = 62454;

class Class_1_756B5584F1951889___c__DisplayClass35_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>* effectEntityDict; // 0x10
	::System::Boolean needRefresh; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_756B5584F1951889___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}
};
