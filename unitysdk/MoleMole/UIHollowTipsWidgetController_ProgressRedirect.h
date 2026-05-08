#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTipsWidgetController_ProgressRedirect_TypeDefinitionIndex = 74457;

	struct alignas(8) UIHollowTipsWidgetController_ProgressRedirect
	{
		::System::Boolean isValid; // 0x10
		::System::Tuple_2<::System::Int32, ::System::Int32>* curProg; // 0x18
		::System::Tuple_2<::System::Int32, ::System::Int32>* prevProg; // 0x20
	};
}
