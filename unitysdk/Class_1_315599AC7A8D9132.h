#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EUILayoutPlatform.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int Class_1_315599AC7A8D9132_TypeDefinitionIndex = 70437;

template <typename T>
class Class_1_315599AC7A8D9132 : public ::System::Object
{
public:
	::MoleMole::UIBaseController* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<T>* Field_1_1; // 0x0
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_2; // 0x0
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_3; // 0x0
};
