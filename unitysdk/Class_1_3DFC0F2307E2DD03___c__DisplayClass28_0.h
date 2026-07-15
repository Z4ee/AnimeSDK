#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimEffectItem; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16702FE0)

inline static constexpr unsigned int Class_1_3DFC0F2307E2DD03___c__DisplayClass28_0_TypeDefinitionIndex = 72788;

class Class_1_3DFC0F2307E2DD03___c__DisplayClass28_0 : public ::System::Object
{
public:
	::System::Action* callback; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FiveDimEffectItem*, ::UnityEngine::GameObject*>* effectEntityDict; // 0x18
	::System::Boolean needRefresh; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3DFC0F2307E2DD03___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}
};
