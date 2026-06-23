#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1.h"
#include "unitysdk/System/Object.h"

class Class_2_FFECEF59D1CD666C;
class Class_3_0445D2AD5E835B13_Class_4_47530CA409202A22;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
template <typename T> class Class_3_E2828CA0AAE5C975;

inline static constexpr unsigned int Class_1_13FE5DF37DFC3A4C_TypeDefinitionIndex = 78728;

template <typename T>
class Class_1_13FE5DF37DFC3A4C : public ::System::Object
{
public:
	::Enum_3_121CF606CB7E9CD1 Field_1_0; // 0x0
	::Class_3_E2828CA0AAE5C975<T>* Field_1_1; // 0x0
	::MoleMole::UIBaseController* Field_1_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ScrollViewItemWidgetController*>* Field_1_3; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::ScrollViewItemWidgetController*>*>* Field_1_4; // 0x0
};
