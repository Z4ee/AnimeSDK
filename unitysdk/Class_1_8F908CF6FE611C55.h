#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace RPG::UINavigation { class UINavigation; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8F908CF6FE611C55_METHOD_1_3C12AB5D75FF4ABA_OFFSET UNITYSDK_OFFSET(0x1A845070)

inline static constexpr unsigned int Class_1_8F908CF6FE611C55_TypeDefinitionIndex = 50202;

class Class_1_8F908CF6FE611C55 : public ::System::Object
{
public:
	static ::R3::Observable_1<::System::Boolean>* Method_1_3C12AB5D75FF4ABA(::RPG::UINavigation::UINavigation* a1)
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CLASS_1_8F908CF6FE611C55_METHOD_1_3C12AB5D75FF4ABA_OFFSET))(a1);
	}
};
