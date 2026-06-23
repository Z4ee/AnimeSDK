#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class TurnBattleUnitBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_4_3D4EFA6B3CC691CC_Struct_2_913E9FE1CC2F9A87_TypeDefinitionIndex = 50038;

struct alignas(8) Class_4_3D4EFA6B3CC691CC_Struct_2_913E9FE1CC2F9A87
{
	::System::Func_2<::System::Collections::Generic::List_1<::MoleMole::TurnBattleUnitBase*>*, ::System::Object*>* Field_2_0; // 0x10
	::System::Action_2<::MoleMole::TurnBattleUnitBase*, ::System::Object*>* Field_2_1; // 0x18
};
