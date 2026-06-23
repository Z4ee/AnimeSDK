#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4F3537D1CE4F6317.h"
#include "unitysdk/Enum_3_B6A163368DEBFA20.h"

class Class_0_16E4307DCC419505_416;
class Class_1_6A3A26AD0CB7F995;
class Class_2_3EB92686D65E00AD;
class MonoCustomPropertyUIControllerBase;
class MonoInLevelLocalRoleHudUIControllerBase;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int Class_4_99778C2231570461_TypeDefinitionIndex = 63687;

template <typename T>
class Class_4_99778C2231570461 : public ::Class_3_4F3537D1CE4F6317<T>
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_4_0; // 0x0
	::System::UInt32 Field_4_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MonoCustomPropertyUIControllerBase*>* Field_4_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MonoInLevelLocalRoleHudUIControllerBase*>* Field_4_3; // 0x0
	// static const ::System::String* Field_4_4; // 0x0
	// static const ::System::String* Field_4_5; // 0x0
	// static const ::System::String* Field_4_6; // 0x0
};
