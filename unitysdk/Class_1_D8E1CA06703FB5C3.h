#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F67EA3F2FFD139F6.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TabView; }
namespace Sofa { class BaseSofaControl; }
namespace System { class IDisposable; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

inline static constexpr unsigned int Class_1_D8E1CA06703FB5C3_TypeDefinitionIndex = 50187;

template <typename TViewModel, typename TTabVM>
class Class_1_D8E1CA06703FB5C3 : public ::System::Object
{
public:
	::System::Func_3<::RPG::Client::TabView*, TTabVM, ::System::Int32>* CMEBADKEFKL; // 0x0
	::System::Func_4<::Sofa::BaseSofaControl*, TTabVM, ::Struct_2_F67EA3F2FFD139F6, ::System::IDisposable*>* JFAKEMMEMHJ; // 0x0
};
