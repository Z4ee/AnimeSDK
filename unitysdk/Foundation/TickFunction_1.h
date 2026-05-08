#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ETickFunctionFlags.h"
#include "unitysdk/Foundation/TickContext.h"
#include "unitysdk/Foundation/TickTime.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ITickFunctionCollector; }
namespace Foundation { template <typename T> class ITickCollector_1; }
namespace Foundation { template <typename T> class ITickService_1; }
namespace Foundation { template <typename T> class InternalTickData_1; }
namespace Foundation { template <typename T> class TickFunction_1; }
namespace Foundation { template <typename T> class TickFunction_1_GenTickTimeFunc; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickFunction_1_TypeDefinitionIndex = 9189;

	template <typename TTickingGroup>
	class TickFunction_1 : public ::System::Object
	{
	public:
		TTickingGroup TickGroup; // 0x0
		TTickingGroup EndTickGroup; // 0x0
		::System::Single TickInterval; // 0x0
		::Foundation::ETickFunctionFlags _flags; // 0x0
		::System::Collections::Generic::List_1<::Foundation::TickFunction_1<TTickingGroup>*>* Prerequisites; // 0x0
		::Foundation::InternalTickData_1<TTickingGroup>* InternalData; // 0x0
		::System::Boolean _isEnabled; // 0x0
		static ::Foundation::TickFunction_1_GenTickTimeFunc<TTickingGroup>** StaticGet_GenMergeTickTime()
		{
			return (::Foundation::TickFunction_1_GenTickTimeFunc<TTickingGroup>**)Il2CppClass::FromTypeDefinitionIndex(TickFunction_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Foundation::TickFunction_1_GenTickTimeFunc<TTickingGroup>** StaticGet_GenNoMergeTickTime()
		{
			return (::Foundation::TickFunction_1_GenTickTimeFunc<TTickingGroup>**)Il2CppClass::FromTypeDefinitionIndex(TickFunction_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
